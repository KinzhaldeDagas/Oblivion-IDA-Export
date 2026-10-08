int __usercall _vsnprintf_helper@<eax>(
        int a1@<edi>,
        int a2@<esi>,
        int (__cdecl *a3)(FILE *, int, int, int),
        char *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8)
{
  int result; // eax
  bool v9; // sf
  FILE File; // [esp+4h] [ebp-20h] BYREF
  int v11; // [esp+38h] [ebp+14h]

  if ( !a6 ) /*0x987892*/
  {
    *_errno() = 0x16; /*0x98789e*/
    _invalid_parameter(0, a1, a2); /*0x9878a4*/
    return 0xFFFFFFFF; /*0x9878af*/
  }
  if ( a5 && !a4 ) /*0x9878c2*/
  {
    *_errno() = 0x16; /*0x9878ce*/
    _invalid_parameter(0, a5, 0); /*0x9878d4*/
    return 0xFFFFFFFF; /*0x9878df*/
  }
  File._cnt = 0x7FFFFFFF; /*0x9878e8*/
  if ( a5 <= 0x7FFFFFFF ) /*0x9878eb*/
    File._cnt = a5; /*0x9878ed*/
  File._flag = 0x42; /*0x9878f9*/
  File._base = a4; /*0x987903*/
  File._ptr = a4; /*0x987907*/
  result = a3(&File, a6, a7, a8); /*0x98790a*/
  v11 = result; /*0x987912*/
  if ( a4 ) /*0x987915*/
  {
    if ( result >= 0 ) /*0x987919*/
    {
      if ( --File._cnt >= 0 ) /*0x98791e*/
      {
        *File._ptr = 0; /*0x987923*/
        return v11; /*0x98793b*/
      }
      if ( _flsbuf(0, &File) != 0xFFFFFFFF ) /*0x987936*/
        return v11; /*0x987936*/
    }
    v9 = File._cnt < 0; /*0x98793f*/
    a4[a5 - 1] = 0; /*0x987942*/
    return !v9 - 2; /*0x98794a*/
  }
  return result; /*0x98794d*/
}
