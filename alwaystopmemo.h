#ifndef ALWAYSTOPMEMO_H
#define ALWAYSTOPMEMO_H

#include <QTextEdit>

class AlwaysTopMemo : public QTextEdit
{
    Q_OBJECT
public:
    explicit AlwaysTopMemo(QObject *parent = nullptr);

    virtual ~AlwaysTopMemo() {}

private:
    void updateTitle(void)
    {
        QString title = toPlainText();
        if ( title.length() == 0 )
            title = " ";
        setWindowTitle(title);
    }
};

#endif // ALWAYSTOPMEMO_H
