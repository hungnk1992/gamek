
class Mouse : public ComputerDecorator{
public:
    Mouse(Computer *decorator) : ComputerDecorator (decorator){
        //
    }
    
    std::string getDescription (){
        return this->getDecorator()->getDescription() + " with mouse";
    }
};
