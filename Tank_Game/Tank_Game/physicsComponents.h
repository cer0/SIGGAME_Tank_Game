class physicsComponent{
private:
    int mass;       //mass of object for object collision
    int xPos;       //x and y positions
    int yPos;
    int xLength;    //Horizontal/Vertical length
    int yLength;    
    int speed;      //speed of object
    int direction;  //Angle 0-355
    bool visible;   //Visible property
public:
    physicsComponent();                                             //Sets everything to 0, visibility none 
    physicsComponent(int xPos, int yPos, int mass, bool visible);   //Specific constructor
    int getMass(){return mass;}                                     //Get mass of object
    int getXPos(){return xPos;}                                     //Get X position
    int getYPos(){return yPos;}                                     //Get Y position
    int getXLength(){return xLength;}                               //Get X length
    int getYLength(){return yLength;}                               //Get Y length
    int getSpeed(){return speed;}                                   //Get speed
    int direction(){return direction;}                              //Get direction
    bool getVisibility(){return visible;}                           //Get visibility
    void setMass(int newMass);                                      //Change mass to new mass
    void setXYPos(int newX, int newY);                              //Change position of the object
    void setVisibility(bool visibility);                            //Set visible/not visible
    void moveObject();                                              //Moves object in the direcation at that speed/clock cycle
    void handleCollision(physicsComponent other);                   //Changes the speed and direction of *this and other
};