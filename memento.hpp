#ifndef _MEMENTO_HPP_
#define _MEMENTO_HPP_ 

template <typename T>
class Memento
{
  frined class Originator;
  private:
     Memento(const T& state);
     ~Memento();
     void SetState(const T& state);
     T GetState();
     T _state;
}

template <typename T>
class Originator
{
  public:
     Originator();
     Originator(const T& state);
     ~Originator();
     void RestoreToMemento(Memento* pMemento);
     Memento* CreateMemento();
     void SetState(const T& state);
     T GetState();
     void show();
  private:
     T _state;
};

class Caretaker
{
  public:
     Caretaker();
     ~Caretaker();
     void SetMemento(Memento*);
     Memento* GetMemento();
  private:
     Memento* _memento;
};
#endif
