#ifndef CTROISNOMBRES_H
#define CTROISNOMBRES_H

class CTroisNombres {
    private:
        short nb1;
        short nb2;
        short nb3;

    public:
        CTroisNombres();
        ~CTroisNombres();
        short getBiggestNbr();
        short getMiddleNbr();
        short getSmallestNbr();
        void setNb1(short val);
        void setNb2(short val);
        void setNb3(short val);
        short getNb1();
        short getNb2();
        short getNb3();
};

#endif  // CTROISNOMBRES_H
