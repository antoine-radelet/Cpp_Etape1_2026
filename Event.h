class Event
{
  private:

    int code;
    char* title;

  public:

    Event();//constructeur par defaut

    Event(int c,const char* t);//constructeur d'initialisation

    Event(const Event& e);//constructeur de copie

    ~Event();//destructeur
    
    void setTitle(const char* t);

    void setCode(int c);

    const char* getTitle() const;

    int getCode() const;

    void display() const;
};