#include <iostream>
#include <string>

using namespace std;

class Image{
public:
    operator string(){
        return "사진";
    }
}; 

class Message{
public:
    Message(int sendTime, string sendName){
        this->sendTime = sendTime;
        this->sendName = sendName;
    }
    int GetSendTime() const { return sendTime; };
    string GetSendName() const { return sendName; };
private:
    int sendTime;
    string sendName;
};

class TextMessage : public Message{
public:
    TextMessage(int sendTime, string sendName, string text) : Message(sendTime, sendName){
        this->text = text;
    }
    string GetText() const { return text; };
    
private:
    string text;
};

class ImageMessage : public Message{
public:
    ImageMessage(int sendTime, string sendName, Image *image) : Message(sendTime, sendName){
        this->image = image;
    }
    Image *GetImage() const { return image; };

private:
    Image *image;
};

int main(){
    Image *p_dogImage = new Image();
    TextMessage *hello = new TextMessage(5,"dog", "안녕");
    ImageMessage *dog = new ImageMessage(20, "두들", p_dogImage);

    delete hello;
    delete dog;
    delete p_dogImage;

    return 0;
}