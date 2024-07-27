#ifndef LINKER2_HEADER_FUNK_H
#define LINKER2_HEADER_FUNK_H

class Counter {
public:
    explicit Counter(int count){
        this->count = count;
    };
    static void set_count(int count);
    int get_count() const;
    void incrim_count();
    void decrim_cout() ;
    void print_dig() const;
private:
    int count;
};

#endif //LINKER2_HEADER_FUNK_H

