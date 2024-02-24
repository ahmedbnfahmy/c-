#include <vector>
#include <iostream>
using namespace std;

class Movie {

    string name {};
    string rating {};
    int watchTimes {0};

   public :
    Movie(string name,string rating,int watchTimes)
    :name(name),rating(rating),watchTimes(watchTimes){};

    void displayMovie(){
        cout << this->name << " ";
        cout << this->watchTimes << " ";
        cout << this->rating<< " ";
        cout << endl;
    };
    string getName(){
        return this->name;
    }
};

class Movies {
    vector<Movie> moviesList;
    
    public :
    
    bool addMovie (string name ,string rating,int watchTimes){
    
        for (Movie &movie:moviesList)
        {
            if (movie.getName()==name){
            cout << movie.getName()<<" is exists"<<endl;
            return false;} 

        };
        Movie movie(name,rating,watchTimes);
        moviesList.push_back((movie));
        cout << movie.getName()<<" added"<<endl;
        return true;
    };
    void displayMovies(){
        for (auto &i:moviesList)
             i.displayMovie();
    };
};



int main (){
    Movies movies;
    // Movie movie;
    movies.addMovie("tutanic","R",2);
    movies.addMovie("zli","R",2);
    movies.displayMovies();


    return 0;
}