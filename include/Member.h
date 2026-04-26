#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <ctime>

class Member {
private:
    int memberID;
    std::string name;
    int age;
    std::string email;
    std::string phone;
    std::string membershipType;
    std::string registrationDate;

public:
    // Constructor
    Member(int id, std::string name, int age, std::string email, std::string phone, std::string type, std::string regDate)
        : memberID(id), name(name), age(age), email(email), phone(phone), membershipType(type), registrationDate(regDate) {}

    // Getter and Setter methods
    int getMemberID() const { return memberID; }
    void setMemberID(int id) { memberID = id; }

    std::string getName() const { return name; }
    void setName(std::string name) { this->name = name; }

    int getAge() const { return age; }
    void setAge(int age) { this->age = age; }

    std::string getEmail() const { return email; }
    void setEmail(std::string email) { this->email = email; }

    std::string getPhone() const { return phone; }
    void setPhone(std::string phone) { this->phone = phone; }

    std::string getMembershipType() const { return membershipType; }
    void setMembershipType(std::string type) { membershipType = type; }

    std::string getRegistrationDate() const { return registrationDate; }
    void setRegistrationDate(std::string regDate) { registrationDate = regDate; }
};

#endif // MEMBER_H