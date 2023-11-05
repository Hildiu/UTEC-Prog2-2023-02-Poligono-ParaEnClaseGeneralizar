//
// Created by MARIA HILDA BERMEJO RIOS on 11/5/23.
//

#ifndef INC_04_POLIGONOS_03_PARACLASE_UTODAS_H
#define INC_04_POLIGONOS_03_PARACLASE_UTODAS_H

class CTriangulo
{
private:
    TipoNumerico m_lado;
public:
    CTriangulo() {};
    CTriangulo(TipoNumerico lado);
    virtual ~CTriangulo(){};
    //---metodo de acceso
    void set_m_Lado(TipoNumerico lado) {m_lado=lado;}
    TipoNumerico getLado(){ return m_lado;}

    TipoNumerico Apotema();
    TipoNumerico SemiPerimetro();
    TipoNumerico Area();
};

class CCuadrado
{
private:
    TipoNumerico m_lado;
public:
    CCuadrado() {};
    CCuadrado(TipoNumerico lado);
    virtual ~CCuadrado(){};
    //---metodo de acceso
    void set_m_Lado(TipoNumerico lado){m_lado=lado;}
    TipoNumerico getLado(){ return m_lado;}

    TipoNumerico Apotema();
    TipoNumerico SemiPerimetro();
    TipoNumerico Area();
};

class CHexagono
{
private:
    TipoNumerico m_lado;
public:
    CHexagono() {};
    CHexagono(TipoNumerico lado);
    virtual ~CHexagono(){};
    //---metodo de acceso
    void set_m_Lado(TipoNumerico lado){m_lado=lado;}
    TipoNumerico getLado(){ return m_lado;}

    TipoNumerico Apotema();
    TipoNumerico SemiPerimetro();
    TipoNumerico Area();
};




#endif //INC_04_POLIGONOS_03_PARACLASE_UTODAS_H
