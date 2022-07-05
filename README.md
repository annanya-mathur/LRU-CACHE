# LRU-CACHE
**It is used for fast interaction between server and client**:- Implementing the LRU cache data structure , will allow the following operation in **O(1)**.<br>
<ul>
<li>Insert (key , value) </li>
<li>getvalue (key) </li>
<li>getmostrecentlyused () </li>
</ul>
# Max Size Prperty:-
It represents the max key-value pairs that can be stored inside the cache at a time. <br> If key-value pair has to be inserted into the cache when cache is full then the least recently used key-value pair should be deleted, then only new pair will be inserted.<br> If key-value pair to be inserted already exist in cache, then simply update the value of key with new value.<hr> 
