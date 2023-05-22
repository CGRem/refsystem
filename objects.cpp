#include "objects.h"
#include <QDebug>
#include <QDir>
namespace obj_r {
// test db
void read_db(){
    qDebug() << "started!";
    sqlite3 *db = 0;
    sqlite3_open_v2("..\\refsystem\\db\\db.db", &db, SQLITE_OPEN_READWRITE, NULL);
    int rc;
    sqlite3_stmt* result;
    rc = sqlite3_prepare(db, "SELECT * FROM categories", -1, &result, NULL);
    QDir dir;
    qDebug() << dir.currentPath() << flush;
    qDebug() << "rc " << sqlite3_errmsg(db);
    if (rc == SQLITE_OK) {
        qDebug() << "base connected!";
    }
    sqlite3_close(db);

}


} // obj_r
