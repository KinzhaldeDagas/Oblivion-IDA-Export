_BYTE *__cdecl sub_8D3980(_BYTE *a1, float a2, float *a3, int a4, int a5, _DWORD *a6)
{
  int v6; // ecx
  int v8; // [esp+10h] [ebp+Ch]

  v6 = 0;
  if ( a5 <= 0 )
  {
LABEL_5:
    *a1 = 1;
    return a1;
  }
  else
  {
    *(float *)&v8 = *(float *)(0x3C * *(char *)(*(_DWORD *)a3 + 0x18) + *a6 + 0x1A44) * a3[2];
    while ( fabs(*(float *)(a4 + 4 * v6)) * a2 <= *(float *)&v8 )
    {
      if ( ++v6 >= a5 )
        goto LABEL_5;
    }
    *a1 = 0;
    return a1;
  }
}
