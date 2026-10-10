#include "Compare.hpp"

/**
 * @brief Compares two items by name
 * @param a First item to compare
 * @param b Second item to compare
 * @return true if a's name is less than b's name
 */
bool CompareItemName::lessThan(const Item& a, const Item& b){
    return a.name_ < b.name_;
}

/**
 * @brief Checks if two items have equal names
 * @param a First item to compare
 * @param b Second item to compare
 * @return true if items have equal names
 */
bool CompareItemName::equal(const Item& a, const Item& b){
    return a.name_ == b.name_;
}

/**
 * @brief Checks if first item's name is less than or equal to second item's name
 * @param a First item to compare
 * @param b Second item to compare
 * @return true if a's name is less than or equal to b's name
 */
bool CompareItemName::leq(const Item& a, const Item& b){
    return a.name_ <= b.name_;
}

/**
 * @brief Compares two items by weight
 * @param a First item to compare
 * @param b Second item to compare
 * @return true if a's weight is less than b's weight
 */
bool CompareItemWeight::lessThan(const Item& a, const Item& b){
    return a.weight_ < b.weight_;
}

/**
 * @brief Checks if two items have equal weights
 * @param a First item to compare
 * @param b Second item to compare
 * @return true if items have equal weights
 */
bool CompareItemWeight::equal(const Item& a, const Item& b){
    return a.weight_ == b.weight_;
}

/**
 * @brief Checks if first item's weight is less than or equal to second item's weight
 * @param a First item to compare
 * @param b Second item to compare
 * @return true if a's weight is less than or equal to b's weight
 */
bool CompareItemWeight::leq(const Item& a, const Item& b){
    return a.weight_ <= b.weight_;
}

/**
 * @brief Compares two items by type
 * @param a First item to compare
 * @param b Second item to compare
 * @return true if a's type is less than b's type
 */
bool CompareItemType::lessThan(const Item& a, const Item& b){
    return a.type_ < b.type_;
}

/**
 * @brief Checks if two items have equal types
 * @param a First item to compare
 * @param b Second item to compare
 * @return true if items have equal types
 */
bool CompareItemType::equal(const Item& a, const Item& b){
    return a.type_ == b.type_;
}

/**
 * @brief Checks if first item's type is less than or equal to second item's type
 * @param a First item to compare
 * @param b Second item to compare
 * @return true if a's type is less than or equal to b's type
 */
bool CompareItemType::leq(const Item& a, const Item& b){
    return a.type_ <= b.type_;
}
