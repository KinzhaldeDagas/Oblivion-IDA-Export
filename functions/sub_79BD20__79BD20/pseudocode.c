char *__fastcall sub_79BD20(unsigned int *a1, int a2, const void *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  char *v6; // edi
  char *result; // eax
  char *v8; // edi
  char *v9; // [esp+Ch] [ebp-8h] BYREF

  v4 = a1[1];
  if ( v4 )
    v5 = (int)(a1[2] - v4) / 0x38;
  else
    v5 = 0;
  if ( v4 && v5 < (int)(a1[3] - v4) / 0x38 )
  {
    v6 = (char *)a1[2];
    LOBYTE(v9) = 0;
    result = sub_79AA10(v9, v6, 1, a3);
    a1[2] = (unsigned int)(v6 + 0x38);
  }
  else
  {
    v8 = (char *)a1[2];
    if ( v4 > (unsigned int)v8 )
      _invalid_parameter_noinfo();
    return (char *)sub_79B560(a1, (unsigned int **)&v9, a1, v8, a3);
  }
  return result;
}
