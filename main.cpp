#include <iostream>

class Summate {
    public:
        unsigned int _start_number, _end_number, _result = 0;
        
        void set_start_number(unsigned int _value) {
            _start_number = _value;
        }
        
        void set_end_number(unsigned int _value) {
            _end_number = _value;
        }
        
        unsigned int get_start_number() {
            return _start_number;
        }
        
        unsigned int get_end_number() {
            return _end_number;
        }
        
        void print_sums() {
            unsigned int _index = 1; unsigned int _element = get_start_number(); _result = _element;
            
            std::cout << "n=" << get_end_number() << std::endl;
            std::cout << "Σn = ";
            
            if(get_end_number() > 10) {
                // First, visualize the list with ellipses
                
                // First half of list to be printed
                while(_index <= get_end_number()) {
                    if(_index < 6) {
                        std::cout << _element;
                        if(_index != 5) {
                            std::cout << " + ";
                        }
                    }
                    _element++;
                    _index++;
                }
                
                // Reset values and count from start again
                _element = get_start_number(); _index = 1;
                
                // Ellipses
                std::cout << " ... ";
                
                // Last half of list to be printed
                while(_index <= get_end_number()) {
                    if(_index > get_end_number() - 5) {
                        std::cout << _element;
                        if(_index != get_end_number()) {
                            std::cout << " + ";
                        }
                    }
                    _element++;
                    _index++;
                }
                
                // Reset again to get now the result
                _element = get_start_number(); _index = 1;
                
                // Finally, display the result
                while(_index <= get_end_number()) {
                    _element++;
                    if(_index != get_end_number()){
                        _result += _element;
                    }
                    _index++;
                }
            } else {
                while(_index <= get_end_number()) {
                    std::cout << _element;
                    if(_index != get_end_number()) {
                        std::cout << " + ";
                    }
                    _element++;
                    if(_index != get_end_number()){
                        _result += _element;
                    }
                    _index++;
                }
            }
            
            std::cout << " = " << _result;
            std::cout << "\n" << "k=" << get_start_number() << std::endl;
        }
};

void header() {
    std::cout << "Summation Calculator" << std::endl << std::endl;
}

int main() {
    header();
    
    unsigned int n, k;
    Summate sigma;
    
    std::cout << "Enter the number to start counting from: ";
    std::cin >> k;
    sigma.set_start_number(k);
    
    std::cout << "Enter the limit of numbers to be counted: ";
    std::cin >> n;
    sigma.set_end_number(n);

    std::cout << std::endl;

    sigma.print_sums();

    return 0;
}
