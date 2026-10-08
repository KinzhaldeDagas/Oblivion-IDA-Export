int __usercall _sprintf@<eax>(int a1@<edi>, int a2@<esi>, char *a3, char *a4, ...)
{
  int v5; // eax
  bool v6; // sf
  int v7; // esi
  FILE File; // [esp+4h] [ebp-20h] BYREF
  va_list va; // [esp+34h] [ebp+10h] BYREF

  va_start(va, a4);
  if ( a4 && a3 ) /*0x9820bb*/
  {
    File._base = a3; /*0x9820be*/
    File._ptr = a3; /*0x9820c1*/
    File._cnt = 0x7FFFFFFF; /*0x9820d0*/
    File._flag = 0x42; /*0x9820d7*/
    v5 = _output_l(&File, (unsigned __int8 *)a4, 0, (int *)va); /*0x9820de*/
    v6 = --File._cnt < 0; /*0x9820e6*/
    v7 = v5; /*0x9820e9*/
    if ( v6 ) /*0x9820eb*/
      _flsbuf(0, &File); /*0x9820f9*/
    else
      *File._ptr = 0; /*0x9820f0*/
    return v7; /*0x982100*/
  }
  else
  {
    *_errno() = 0x16; /*0x9820a3*/
    _invalid_parameter(0, a1, a2); /*0x9820a9*/
    return 0xFFFFFFFF; /*0x9820b1*/
  }
}
