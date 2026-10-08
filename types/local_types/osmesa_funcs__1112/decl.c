struct osmesa_funcs
{
void (*get_gl_funcs)(opengl_funcs *);
wgl_context *(*create_context)(HDC, const PIXELFORMATDESCRIPTOR *);
BOOL (*delete_context)(wgl_context *);
PROC (*get_proc_address)(const char *);
BOOL (*make_current)(wgl_context *, void *, int, int, int, int);
};
