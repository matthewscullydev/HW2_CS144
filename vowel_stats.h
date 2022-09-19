#include <string>
// header files are used for declaring what methods will be used in the class
// and what variable types are in the class
//
// // CLASSES ARE DEFINED IN HEADER FILES //
//
//
class vowel_stats;
class vowel_stats {
   private:
    std::string m_str;
    // declare array
    // declare vector
    // declare iterator
    //

   public:
    vowel_stats();
    void get_vector_stats();

    void get_array_stats();

    void display_stats();

    vowel_stats(std::string str);
};
