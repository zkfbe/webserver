#pragma once
class User {
public:
    User(const std::string name_ , const std::string pwd_) : name(name_), pwd(pwd_) {};
    std::string name;
    std::string pwd;
};

