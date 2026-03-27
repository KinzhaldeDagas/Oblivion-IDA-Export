unsigned int __cdecl _raise_exc(ULONG_PTR Arguments, DWORD dwExceptionCode, DWORD a3, float *a4, float *a5)
{
  return _raise_exc_ex(Arguments, dwExceptionCode, a3, a4, a5, 0);
}
