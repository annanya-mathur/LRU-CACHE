# LRU-CACHE
<br>**Data Structure Used :-** Doubly-Linked List and Hash Map.
**Cache**:- It is the fastest memory which is smaller in size and expensive . It has a fixed size.<hr>

![lru](https://user-images.githubusercontent.com/68476475/184906506-c3a11290-7488-4d02-8ebb-6cf64221ed7b.svg)


**It is real life data structure application. It is used for fast interaction between server and client**:-<br> Implementing the LRU cache data structure , will allow the following operation in **O(1)**.<br>
<ul>
<li>Insert (key , value) </li>
<li>getvalue (key) </li>
<li>getmostrecentlyused () </li>
</ul><hr>

**Max Size Property**:-

<br> It represents the max key-value pairs that can be stored inside the cache at a time. <br> If key-value pair has to be inserted into the cache when cache is full then the least recently used key-value pair should be deleted, then only new pair will be inserted.<br> If key-value pair to be inserted already exist in cache, then simply update the value of key with new value.<hr> 
 
**Implementation**:- LRU cache is implemented using doubly linked list storing key-value pair and unordered-map storing key along with its address.<br> 
Insert operation has 3 cases:-<br>
<ol>
 <li>If cache hits, then check and update the value of key.</li>
 <li>If cache miss , then insert the key-value pair in cache at the top if cache is not full.</li>
 <li>If cache miss and cache is full, insert key-value pair at the top and remove key-value which is LRU.</li>
 </ol>


