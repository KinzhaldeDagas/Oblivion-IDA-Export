int __usercall _raise_exc@<eax>(
        __int16 a1@<fpstat>,
        ULONG_PTR Arguments,
        DWORD dwExceptionCode,
        DWORD a4,
        float *a5,
        float *a6)
{
  return _raise_exc_ex(a1, Arguments, dwExceptionCode, a4, a5, a6, 0); /*0x992cde*/
}
