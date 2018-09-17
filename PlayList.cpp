#include "PlayList.hpp"
#include "Set.hpp"
#include <iostream>

using namespace std;


PlayList::PlayList(const Song& a_song)

{
    // insert() funciton adds the element to the set
    playlist_.add(a_song);

}
template <class ItemType>
int PlayList<ItemType>::getNumberOfSongs() const{
	Set<ItemType>::getCurrentSize();
}

template <class ItemType>
bool PlayList::isEmpty() const{
	
}
template <class ItemType>
bool PlayList::addSong(const Song& new_song){
	if(playlist_.add(new_song) == true){
		return true;
	}
	return false;
}
template <class ItemType>
bool PlayList::removeSong(const Song& a_song){
	if(playlist_.remove(a_song) == 0){
		return true;
	}
	return false;

}
template <class ItemType>
void PlayList::clearPlayList()
{
    // clear function removes all elements from set
    playlist_.clear();
}


template <class ItemType>
void PlayList::displayPlayList() const{

	vector<int> v = playlist_.toVector();
	cout << v << endl; 

}









