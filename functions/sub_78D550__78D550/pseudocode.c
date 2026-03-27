char *__fastcall sub_78D550(unsigned int *a1, int a2, const void *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  char *v6; // edi
  char *result; // eax
  char *v8; // edi
  char *v9; // [esp+Ch] [ebp-8h] BYREF

  v4 = a1[1];
  if ( v4 )
    v5 = (int)(a1[2] - v4) / 0x1C;
  else
    v5 = 0;
  if ( v4 && v5 < (int)(a1[3] - v4) / 0x1C )
  {
    v6 = (char *)a1[2];
    LOBYTE(v9) = 0;
    result = sub_788AE0(v9, v6, 1, a3);
    a1[2] = (unsigned int)(v6 + 0x1C);
  }
  else
  {
    v8 = (char *)a1[2];
    if ( v4 > (unsigned int)v8 )
      _invalid_parameter_noinfo();
    return (char *)sub_78C8F0(a1, (unsigned int **)&v9, a1, v8, a3);
  }
  return result;
}
