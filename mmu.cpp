//
// Created by ccccqqqq on 2023/4/18.
//

#include "mmu.h"

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <queue>
#include <string>
#include <climits>
using namespace std;


//typedef struct {
//    PRESENT
//    REFERENCED
//    MODIFIED
//    WRITE_PROTECT
//    PAGEDOUT
//
//    physical_frame
//} pte_t; // can only be total of 32-bit size and will check on this typedef struct { ... } frame_t;
//
//
//frame_t frame_table[MAX_FRAMES];
//pte_t page_table[MAX_VPAGES]; // a per process array of fixed size=64 of pte_t not pte_t pointers !
//
//class Pager {
//    virtual frame_t* select_victim_frame() = 0; // virtual base class
//};
//
//frame_t *get_frame() {
//    frame_t *frame = allocate_frame_from_free_list();
//    if (frame == NULL) frame = THE_PAGER->select_victim_frame();
//    return frame;
//}
//while (get_next_instruction(&operation, &vpage)) {
//// handle special case of “c” and “e” instruction // now the real instructions for read and write pte_t *pte = &current_process->page_table[vpage]; if ( ! pte->present) {
//// this in reality generates the page fault exception and now you execute
//// verify this is actually a valid page in a vma if not raise error and next inst frame_t *newframe = get_frame();
////-> figure out if/what to do with old frame if it was mapped
//// see general outline in MM-slides under Lab3 header and writeup below
//// see whether and how to bring in the content of the access page.
//}
//// now the page is definitely present
//// check write protection
//// simulate instruction execution by hardware by updating the R/M PTE bits update_pte(read/modify) bits based on operations.
//}
//
//
//void get_input(char* in_filename){
//    ifstream in(in_filename);
//    if (!in.is_open())
//    {
//        std::cerr << "rFile not open" << '\n';
//    }else{
//        string line1;
//        while (std::getline(in, line1))
//            ++num_process;
//
//    }
//    in.close();
//    processes.resize(num_process);
//    ifstream input(in_filename);
//    if (!input.is_open())
//    {
//        std::cerr << "rFile not open" << '\n';
//    }else{
////        ofs = num_process;
//        string line;
//        for(int i =0;i<num_process;i++){
//            if(getline(input, line)){
//                istringstream ss(line);
//                int state_ts;
//                int total_cpu_ts;
//                int max_cpu_burst;
//                int max_io_burst;
//                ss>>state_ts;
//                ss>>total_cpu_ts;
//                ss>>max_cpu_burst;
//                ss>>max_io_burst;
//
//
//                int priority = randvals[cur_pid];
//                if(maxprios-1==0){
//                    cout<<"hhhh"<<endl;
//                }
//
//                int randp = myrandom(maxprios-1);
//
//
//
//                Process *p = new Process(cur_pid,state_ts,total_cpu_ts, max_cpu_burst,max_io_burst,randp);
//                p->state = STATE_CREATED;
//
//                processes[i] = *p;
//                cur_pid+=1;
//
//            }
//
//        }
//    }
//    input.close();
//
//
//}
int main(int argc, char *argv[]) {

    int frame_num = 0;
    char algo[1];
    string op;
    char* input_file;
    char* rfile;

    sscanf(argv[1], "-f%d",&frame_num);
    sscanf(argv[2], "-a%s",algo);
    op = argv[3];

    string options = op.substr(4,5);
    input_file = argv[4];
    rfile = argv[5];
    cout<<algo<<endl;
    cout<<options<<endl;
    cout<<input_file<<endl;
    cout<<rfile<<endl;








    //get input

}
