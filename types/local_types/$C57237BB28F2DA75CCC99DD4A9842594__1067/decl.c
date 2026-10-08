struct $C57237BB28F2DA75CCC99DD4A9842594
{
BOOL (*p_wglCopyContext)(wgl_context *, wgl_context *, UINT) __offset(OFF64|AUTO);
wgl_context *(*p_wglCreateContext)(HDC) __offset(OFF64|AUTO);
BOOL (*p_wglDeleteContext)(wgl_context *) __offset(OFF64|AUTO);
int (*p_wglDescribePixelFormat)(HDC, int, UINT, PIXELFORMATDESCRIPTOR *) __offset(OFF64|AUTO);
int (*p_wglGetPixelFormat)(HDC) __offset(OFF64|AUTO);
PROC (*p_wglGetProcAddress)(LPCSTR) __offset(OFF64|AUTO);
BOOL (*p_wglMakeCurrent)(HDC, wgl_context *) __offset(OFF64|AUTO);
BOOL (*p_wglSetPixelFormat)(HDC, int, const PIXELFORMATDESCRIPTOR *) __offset(OFF64|AUTO);
BOOL (*p_wglShareLists)(wgl_context *, wgl_context *) __offset(OFF64|AUTO);
BOOL (*p_wglSwapBuffers)(HDC) __offset(OFF64|AUTO);
};
