#include "Inventory.hpp"
#include <vector>

/**
 * @brief Constructor with optional parameters for initialization.
 * @param items A const reference to a 2D vector of items. 
 *  Defaults to a 10x10 grid of default-constructed items, if none provided.
 * @param equipped A pointer to an Item object. 
 *  Defaults to nullptr, if none provided.
 * 
 * @post Initializes members in the following way:
 * 1) Initializes `weight_` as the total weight of all items in `items` (excluding NONE type) 
 * 2) Initialies `item_count_` as the count of non-NONE items. 
 * 
 * NOTE: The `equipped` item is excluded from these calculations.
*/
Inventory::Inventory(const std::vector<std::vector<Item>>& items, Item* equipped) : inventory_grid_{items}, equipped_{equipped}, weight_{0}, item_count_{0} {
    for (size_t row = 0; row < items.size(); row++){
        for (size_t col = 0; col < items[row].size(); col++){
            if (items[row][col].type_ != NONE){
                weight_ += items[row][col].weight_;
                item_count_++;

            }
        }
    }
}

/** 
 * @brief Retrieves the value stored in `equipped_`
 * @return The Item pointer stored in `equipped_`
 */
Item* Inventory::getEquipped() const {
    return equipped_;
}

/**
 * @brief Equips a new item.
 * @param itemToEquip A pointer to the item to equip.
 * @post Updates `equipped` to the specified item 
 * without deallocating the original.
 */
void Inventory::equip(Item* itemToEquip) {
    equipped_ = itemToEquip;
}

/**
 * @brief Discards the currently equipped item.
 * @post Deallocates the item pointed to by `equipped` 
 * and sets `equipped` to nullptr, if `equipped` is not nullptr already.
 */
void Inventory::discardEquipped() {
    if(equipped_ != nullptr){
        delete equipped_;
        equipped_ = nullptr;
    }
}

/** 
 * @brief Retrieves the value stored in `inventory_grid_`
 * @return The vector<vector<Item>> value stored in `inventory_grid_`
 */
std::vector<std::vector<Item>> Inventory::getItems() const {
    return inventory_grid_;
}

/** 
 * @brief Retrieves the value stored in `weight_`
 * @return The float value stored in `weight_`
 */
float Inventory::getWeight() const {
    return weight_;
}


/**
 * @brief Retrieves the value stored in `item_count_`
 * @return The size_t value stored in `item_count_`
 */
size_t Inventory::getCount() const {
    return item_count_;
}

/**
 * @brief Retrieves the item located at the specified row and column
 * in the inventory grid.
 *
 * @param row A size_t parameter for the row index in the inventory grid.
 * @param col A size_t parameter for the column index in the inventory grid.
 * @return The item at the specified row and column.
 * @throws std::out_of_range If the row or column is out of bounds.
 */
Item Inventory::at (const size_t& row, const size_t& col) const {

}