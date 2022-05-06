#include <Loop.h>
#include <algorithm>


Loop::Loop(Basic_block *bb1, Basic_block *bb2, unsigned int id):header_bb(bb1), latch_bb(bb2), loop_id(id){}

Loop::~Loop(){}

void Loop::set_header(Basic_block *bb){
  header_bb = bb;
  return;
}
void Loop::set_latch(Basic_block *bb){
  latch_bb = bb;
  return;
}

void Loop::set_id(unsigned int id){
  loop_id = id;
  return;
}
Basic_block* Loop::get_header(){
  return header_bb;
}
Basic_block* Loop::get_latch(){
  return latch_bb;
}

unsigned int Loop::get_id(){
  return loop_id;
}
void Loop::display(){
  if (!header_bb || !latch_bb) {
    cerr << "Loop:display : can't display a loop without header or latch";
    exit(0);
  }
  cout << "Loop " << loop_id << " between BB" << header_bb->get_index() << " and BB" << latch_bb->get_index() << ": ";
    for (auto bb: _myBB){
	cout << "BB" << bb->get_index() << " ";
    }
  cout << endl;
  return;
}


int Loop::nbr_BB(){
  
  return _myBB.size();
}


void Loop::compute_in_loop_BB_aux(Basic_block *b){
  for(int i = 0; i<b->get_nb_pred(); i++) {
    auto p = b->get_predecessor(i);
    if(find(_myBB.begin(), _myBB.end(), p) == _myBB.end() && p != get_header()){
      _myBB.push_back(p);
      compute_in_loop_BB_aux(p);
    }
  }
  return;
}


void Loop::compute_in_loop_BB(){
  
  /* A REMPLIR */ 
  _myBB.push_back(get_latch());
  compute_in_loop_BB_aux(get_latch());
  _myBB.push_back(get_header());

  return;
}
