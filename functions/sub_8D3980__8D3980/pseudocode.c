_BYTE *__cdecl sub_8D3980(_BYTE *a1, float a2, float *a3, int a4, int a5, _DWORD *a6)
{
  int v6; // ecx
  int v8; // [esp+10h] [ebp+Ch]

  v6 = 0; /*0x8d398f*/
  if ( a5 <= 0 ) /*0x8d3993*/
  {
LABEL_5:
    *a1 = 1; /*0x8d39ce*/
    return a1; /*0x8d39ce*/
  }
  else
  {
    *(float *)&v8 = *(float *)(0x3C * *(char *)(*(_DWORD *)a3 + 0x18) + *a6 + 0x1A44) * a3[2]; /*0x8d39b1*/
    while ( fabs(*(float *)(a4 + 4 * v6)) * a2 <= *(float *)&v8 ) /*0x8d39c7*/
    {
      if ( ++v6 >= a5 ) /*0x8d39cc*/
        goto LABEL_5; /*0x8d39cc*/
    }
    *a1 = 0; /*0x8d39db*/
    return a1; /*0x8d39d7*/
  }
}
