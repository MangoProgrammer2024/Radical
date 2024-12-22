#ifndef CAMWND_H
#define CAMWND_H

#include <QOpenGLContext>
#include "ui_mainframe.h"
#include "libs/mathlib.h"
#include <QLabel>

class CamWnd{
public:

    CamWnd();
    virtual ~CamWnd();

    int camwnd_id;
    /*---CAMERA WIDGET WINDOW---*/
    QWidget * camwnd;

    bool DeleteCamwnd(CamWnd * wnd, int _id);
    virtual void AddCamera(CamWnd * wnd) = 0;
    void InitCamwnd(QWidget * widget, CamWnd * cwnd, float _X, float _Y);

    QWindow * CameraWindow;
    bool camreal(QWindow * window);
    /*
     ---CAMERA WINDOW STUFF---
    */
    int CAM_H = 50;
    int CAM_W = 100;
    bool RefreshWindow(QWindow * window);

    #define CAMERAWND_COLOR_RGB

    static float camera_globalstream_color();
    void CameraGlWidget(QOpenGLContext * glwidget, QWindow * Widget);
    void Widget_GlobalStream(QWidget * widget, const char * _class, QWindow * window);
    void camwindow_insert_command(QAction * command, QWindow * window);

    static float CAM_FRUSTUM;
    vec3_t lighting_coords; vec3_t texture_coords; vec3_t render_meshes;
    void Camera_GlobalInsertVectorStream(vec3_t * vector);
    CamWnd&m_bCamWnd;
    void CameraColor_Stream(QWindow * window, QOpenGLContext * context, QColor * rgb);
    void m_bCameraSysprintf(const char * _format, QWindow * window, char * _buffer);/*---needs buffer format---*/
    void construct_camwnd_toolbar(QWindow * window, QToolBar * camtoolbar);
    static float CameraWnd_Tick;
    const char * Camwnd_GlobalStream_Label(QWindow * window, QLabel * label);
    void CameraWnd_GlobalOutputStream(QWindow * window, QWidget * console, QString& camwndmsg);
    bool Refresh_CamWnd(CamWnd * wnd, float rate);
    bool Flush_CamWnd(QWindow * window, float flushnum);

};

#endif // CAMWND_H
