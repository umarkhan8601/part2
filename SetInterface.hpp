#ifndef SET_INTERFACE_H_

#define SET_INTERFACE_H_


#include <vector>


template<class ItemType>

class SetInterface

{

public:
  SetInterface();
   /** Gets the current number of entries in this set.

    @return The integer number of entries currently in the set. */

   virtual int getCurrentSize()  = 0;

   

   /** Checks whether this set is empty.

    @return True if the set is empty, or false if not. */

   virtual bool isEmpty();

   

   /** Adds a new entry to this set.

    @post  If successful, newEntry is stored in the set and

       the count of items in the set has increased by 1.

    @param newEntry  The object to be added as a new entry.

    @return  True if addition was successful, or false if not. */

   virtual bool add(const ItemType& newEntry) = 0;

   

   /** Removes a given entry from this set,if possible.

    @post  If successful, anEntry has been removed from the set

       and the count of items in the set has decreased by 1.

    @param anEntry  The entry to be removed.

    @return  True if removal was successful, or false if not. */

   virtual bool remove(const ItemType& anEntry) = 0;

   

   /** Removes all entries from this set.

    @post  set contains no items, and the count of items is 0. */

   virtual void clear() = 0;

   

   /** Tests whether this set contains a given entry.

    @param anEntry  The entry to locate.

    @return  True if set contains anEntry, or false otherwise. */

   virtual bool contains(const ItemType& anEntry)  = 0;

   

   /** Fills a vector with all entries that are in this set.

    @return  A vector containing all the entries in the set. */

   virtual std::vector<ItemType> toVector() const = 0;

   	private:
   		static const int DEFAULT_SET_SIZE = 4; // for testing purposes we will keep the set small

	ItemType items_[DEFAULT_SET_SIZE]; // array of set items

	int item_count_;                  // current count of set items

	int max_items_;

		// post: Either returns the index of target in the array items_ 

		// or -1 if the array does not contain the target

		int getIndexOf(const ItemType& target) const;
 

   

}; // end SetfInterface

#endif /* SET_INTERFACE_H_ */