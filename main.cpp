#include "Header.h"

int main(int argc, char* argv[]) {

    /* int temp=5;
    Queue test;
    for (int i=0; i<maxqueue;i++) {
        test.append(temp + rand() % 254+3);
        temp++;
    }
    std::cout << "Is queue empty: " << std::boolalpha << test.empty() << "\n";
    /////////////////////////////////////

    test.retrieve(temp);
    std::cout << "First number in queue was: " << temp << "\n";
    //////////////////////////////////////

    Extended_queue ex_queue;
    ex_queue.append(12);
    ex_queue.append(14);
    ex_queue.append(13);
    ex_queue.append(15);

    std::cout << "Queue is empty: " << std::boolalpha << ex_queue.empty() << "\n";
    std::cout << "Clearing queue...\n";
    ex_queue.clear();
    std::cout << "Queue is empty: " << std::boolalpha << ex_queue.empty() << "\n";

    ex_queue.append(12);
    ex_queue.append(14);
    ex_queue.append(13);
    ex_queue.append(15);
    ex_queue.serve_and_retrieve(temp);
    std::cout << "First item in queue is: " << temp << ". The next item in line is: ";
    ex_queue.retrieve(temp);
    std::cout << temp << "\n";
    */


    Extended_queue queue;
    int pos, counter= 0;
    char c;
    std::string line,right,left;
    std::cout << "Give line: ";
    std::getline(std::cin,line, '\n');

    for (int i=0; i<line.length(); i++){
        if (line[i] != ':')
        queue.append(line[i]);
        else{
            counter++;
            pos = line.find(':') + 1;
            right = line.substr(pos);
            break;
        }
    }

    pos = 0;
    while(!queue.empty()){
        queue.serve_and_retrieve(c);
        left.insert(pos, 1, c);
        pos++;
    }
    std::cout << "Line:  " << line  << "\nright:  " << right << "\nleft:  " << left << "\n";

    if (line.find(":") == std::string::npos){
        std::cout << "N\n";
    }
    else if (right == left){
        std::cout << "S\n";
    }
    else if (right.size() < left.size()){
        std::cout << "L\n";
    }
    else if (right.size() > left.size()){
        std::cout << "R\n";
    }
    else if (right.size() == left.size()){
        std::cout << "D\n";
    }
    else{
        std::cout << "Cannot do the comparison\n";
    }

    return 0;
}
