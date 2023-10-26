#pragma once
#include"user.h"
#include"database.h"
#include <mysql/mysql.h>
class ORM {
public:
    static bool createTable();
    static bool insert(MYSQL* sql,const User& user){
        Database database(sql);
        return database.executeInsert(user.name,user.pwd);
    }
    static bool update(const User& user);
    static bool remove(int userId);
    static bool findById(MYSQL* sql,User& user) {
        Database database(sql);
        return database.executeQuery(user.name);
    }
    static bool findAll(std::vector<User>& users);
};

