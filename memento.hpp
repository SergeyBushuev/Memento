#ifndef _MEMENTO_HPP_
#define _MEMENTO_HPP_ 

template <typename T>
class Memento
{
  frined class Originator;
  private:
     Memento(){}
     Memento(const T& state)
     {
      this->_state = state;
     }
     ~Memento(){}
     void SetState(const T& state){
      this->state=state_;
     }
     T GetState(){
      return this->state_;
     }
     T state_;
}

template <typename T>
class Originator
{
  public:
     Originator(){}
     ~Originator(){}
     void RestoreToMemento(Memento* nMemento){
      this->state_=nMemento.GetState; 
     }
     Memento* CreateMemento(){
      return new Memento(this->state_);
     }
     void SetState(const T& state){
      this->state_=state; 
     }
     T GetState(){
      return this->state_; 
     }
  private:
     T state_;
};

class Caretaker
{
  public:
     Caretaker(){}
     ~Caretaker(){}
     void SetMemento(Memento* nMemento){
      this->memento_ = nMemento; 
     }
     Memento* GetMemento(){
      return this->memento_; 
     }
  private:
     Memento* memento_;
};
#endif
