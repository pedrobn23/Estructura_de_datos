#include "chronology.h"

//Constructor por defecto

//Ordenar por fecha

//Eventos anteriores

//Eventos posteriores


bool Chronology::InsertBefall(int date,const string &s){
  bool insert = false;
  int var_date;
  for(int i=0; insert == false; i++){
    var_date = event.at(i).get_date();
    if (var_date > date){
      HistoricEvent event(date,string);
      event.insert(i,event);
      insert = true;
    }
    else if (var_date == date){
      if (event.at(i).compare(string s)!=0){
      event.at(i).add_befall(s);
      insert = true;
      }
    }
  }
  return insert;
}


Chronology::rm_event (int a)  {
	int i = 0;
	while (a != events[i].get_date()) {				//compare vale 0 si son iguales
		i++;
	}

	events.erase(i);
}

Chronology Chronology::sum_chrono(const Chronology &chron2){
  std::vector<HistoricEvent> v;
  int size_chron1 = *this.event.size();
  int size_chron2 = chron2.event.size();

  for(int i = 0; i < size_chron1; i++){
    v.push_back(*this.event.at(i));
  }

  for(int i = 0; i < size_chron2; i++){
    v.push_back(chron2.event.at(i);
  }

  Chronology result(v);
  result.sort();

  return result;
}
void Chronology::show_range(int inf, int sup){
  if (inf > sup)
    std::swap(inf,sup);
  int size = this->event.size();
  int befalls_size;

  for(int i = 0; i < size; i++){                                                          // Comprueba si la fecha de cada HistoricEvent
      if (this->event.at(i).get_date() >= inf && this->event.at(i).get_date() <= sup){    // es correcta y procede a mostrar su contenido
        befalls_size = this->event.at(i).befalls_size();
          for(int j = 0; j < befalls_size; i++){
            show(event.at(i).show(i));
          }
      }
  }
}
