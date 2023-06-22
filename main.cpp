#include "mariadb/conncpp.hpp"
#include <iostream>

int main() {
	sql::Driver* driver = sql::mariadb::get_driver_instance();

    try {
        // Подключение к серверу базы данных
        std::unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3306", "root", ""));

        // Используем базу данных
        con->setSchema("Tehiuphvzhvuogv3");

        // Создаем запрос к базе данных
        std::unique_ptr<sql::Statement> stmt(con->createStatement());
        std::unique_ptr<sql::ResultSet> rs(stmt->executeQuery("SELECT * FROM playlist;"));

        // Выводим результат на экран
        while (rs->next())
        {
            std::cout << rs->getInt(1) << '\t' << rs->getString(2) << '\t' << rs->getString(3) << std::endl;
        }
    }
    catch (sql::SQLException& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
