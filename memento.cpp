
#include <string>
#include <iostream>

class Memento
{
    friend class Originator;
private:
    Memento(){}
    Memento(const std::string& state)
    {
        this->state_ = state;
    }
    ~Memento(){}
    void SetState(const std::string& state){
        this->state_=state;
    }
    std::string GetState(){
        return this->state_;
    }
    std::string state_;
};

class Originator
{
public:
    Originator():state_("LLRLRLLLRL"){}
    ~Originator(){}
    void RestoreToMemento(Memento* nMemento){
        this->state_=nMemento->GetState();
    }
    Memento* CreateMemento(){
        return new Memento(this->state_);
    }
    void ClearState(){
        this->state_="";
    }
    std::string GetState(){
        return this->state_;
    }
    void addL(){
        state_=state_+"L";
    }
    
    void addR(){
        state_=state_+"R";
    }
private:
    std::string state_;
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

int main(){
    Originator *Case = new Originator();
    Caretaker *Seal = new Caretaker();
    Seal.SetMemento(Case.CreateMemento());
    Case.ClearState();
    Case.addL();
    Case.addR();
    Case.addL();
    Case.addL();
    Case.addR();
    Case.addL();
    Case.addL();
    Case.addR();
    Case.addR();
    std::cout << Case.GetState()<< "\n";
    Case.RestoreToMemento(Seal.GetMemento());
    std::cout << Case.GetState()<< "\n";
}
