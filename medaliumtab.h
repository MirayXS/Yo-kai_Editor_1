#pragma execution_character_set("utf-8")

#ifndef MEDALIUMTAB_H
#define MEDALIUMTAB_H

#include <QWidget>
#include "tab.h"
#include "youkaichecklist.h"

namespace Ui {
class MedaliumTab;
}

class MedaliumTab : public Tab
{
    Q_OBJECT

public:
    explicit MedaliumTab(SaveManager *mgr, QWidget *parent=0, int sectionId=-1);
    ~MedaliumTab();
public slots:
    void update();
    void apply();
private:
    Ui::MedaliumTab *ui;
    YoukaiCheckList *seen;
    YoukaiCheckList *befriended;
    YoukaiCheckList *youkaiCam;

};

#endif // MEDALIUMTAB_H
