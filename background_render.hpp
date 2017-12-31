#ifndef DJRA_B_RENDER_HPP
#define DJRA_B_RENDER_HPP

#include <GL/gl.h>
#include <GL/glut.h>
#include <opencv/cv.h>
#include <opencv/cxcore.h>
#include <opencv/highgui.h>

/** Variables **/
extern GLdouble angle, dAspect;
extern GLdouble anglex, angley, anglez;
extern GLuint textureId;
extern IplImage * imageBgd;
extern int quantidadeVidas;

/** Background images variables **/
extern char name0[]; extern char nameBgd0[]; extern char nameBgd2D0[];
extern char name1[]; extern char nameBgd1[]; extern char nameBgd2D1[];
extern char name2[]; extern char nameBgd2[];

extern void detMedVisualizacao();

void alteraJanela(
    GLsizei w,
    GLsizei h
);
void initTexture();
void init(
    int argc,
    char **argv,
    void draw(),
    void sairEsc(),
    void tutorial(),
    void TempoAtivo(),
    void Tempo(),
    void TransicaoFases()
);
void setCamera();
void BarraTempo(char *string);
void vidas();

#endif