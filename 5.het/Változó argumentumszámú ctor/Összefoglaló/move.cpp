#include<bits/stdc++.h> 
int main() 
{ 
	std :: vector <int> vec1 {1, 2, 3, 4, 5}; 
	std :: vector <int> vec2 {6, 6, 6, 6, 6}; 

	
	std :: cout << "1.vektor elemei :"; 
	for(int i = 0; i < vec1.size(); i++) 
		std :: cout << " " << vec1[i]; 
	std :: cout << "\n"; 
	
	std :: cout << "2.vektor elemei :"; 
	for(unsigned int i = 0; i < vec2.size(); i++) 
		std :: cout << " " << vec2[i]; 
	std :: cout << "\n\n"; 
	
	// elso 3 elemet az 1.vektorbol move-olja a 2.vektor 1.elemetol 
	std :: move (vec1.begin(), vec1.begin() + 3, vec2.begin()); 
	
	std :: cout << "2.vektor elemei std::move utan:"; 
	for(unsigned int i = 0; i < vec2.size(); i++) 
		std :: cout << " " << vec2[i]; 
	std :: cout << "\n"; 



	return 0; 
} 
