#include <QPixmap>
#include <QIcon>
#include "alwaystopmemo.h"

AlwaysTopMemo::AlwaysTopMemo(QObject *parent)
{
    (void)parent;
    setWindowTitle(" ");
    QObject::connect(this, &QTextEdit::textChanged,
                     this, [this](){ updateTitle(); });

    // Set icon invisible
    // FIXME I wanna delete icon completely.
    QBitmap bm(1,1);
    bm.clear();
    QPixmap pm(1,1);
    pm.setMask(bm);
    QIcon qi(pm);
    setWindowIcon(qi);

    // Always Top
    setWindowFlags(Qt::WindowStaysOnTopHint);
}

