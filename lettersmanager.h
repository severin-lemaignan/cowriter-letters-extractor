#ifndef LETTERSMANAGER_H
#define LETTERSMANAGER_H

#include <string>

#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>

#include "lettersscene.h"
#include "letterselector.h"
#include "sheets.h"

enum Condition {UNDEFINED, PRETEST, PEERMODE, TUTORMODE, POSTTEST};

class LettersManager
{
public:
    LettersManager();
    ~LettersManager();

    QGraphicsScene& scene() {return _scene;}

    void setInputSheet(const std::string& file);
    void setActiveLetter(const QString& letter);
    void nextSheet();

    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
	
	void saveCurrentSelection();


    int activeGroup;
    int activeChild;
    Condition condition;
private:
    LettersManager(const LettersManager&);
    LettersScene _scene;
    QString _activeLetter;

    QGraphicsPixmapItem* currentInputSheet;
    LetterSelector _selector;
    Sheets sheets;
};

#endif // LETTERSMANAGER_H
