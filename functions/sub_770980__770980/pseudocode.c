int __cdecl sub_770980(int a1)
{
  float *v1; // ebx
  int v2; // ebp
  int v3; // edi
  unsigned int v4; // eax
  unsigned __int16 v6; // ax
  float *v7; // edx
  int v8; // ecx
  int v9; // ebp
  double v10; // st7
  int v11; // [esp+10h] [ebp-14h]
  unsigned __int16 v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+1Ch] [ebp-8h]

  v1 = *(float **)(a1 + 0x10); /*0x77098a*/
  v2 = 0; /*0x77098d*/
  v3 = *(_DWORD *)(a1 + 0x24); /*0x770992*/
  v11 = 0; /*0x770995*/
  if ( v1 ) /*0x770999*/
  {
    if ( (__int16)(*(_WORD *)(a1 + 4) - 4) <= 0 ) /*0x7709dd*/
      v12 = *(_WORD *)(a1 + 4); /*0x7709ec*/
    else
      v12 = 4; /*0x7709df*/
    v13 = 0; /*0x7709f4*/
    if ( !*(_WORD *)(a1 + 8) ) /*0x7709f8*/
      return v11; /*0x7709f8*/
    while ( 1 ) /*0x770a04*/
    {
      v6 = 0; /*0x770a04*/
      v7 = v1; /*0x770a09*/
      v8 = v3; /*0x770a0b*/
      if ( v12 ) /*0x770a0d*/
      {
        v9 = v12; /*0x770a0f*/
        do /*0x770a50*/
        {
          v10 = *v7; /*0x770a20*/
          ++v8; /*0x770a22*/
          ++v7; /*0x770a29*/
          --v9; /*0x770a36*/
          *(_BYTE *)(v8 - 1) = (int)v10; /*0x770a49*/
        }
        while ( v9 ); /*0x770a50*/
        if ( v12 >= 4u ) /*0x770a58*/
          goto LABEL_16; /*0x770a58*/
        v6 = v12; /*0x770a5a*/
      }
      _memset(v8, 0, (unsigned __int16)(4 - v6)); /*0x770a6c*/
LABEL_16:
      v1 = (float *)((char *)v1 + *(_DWORD *)(a1 + 0x18)); /*0x770a74*/
      v3 += *(_DWORD *)(a1 + 0x20); /*0x770a7e*/
      v11 += *(_DWORD *)(a1 + 0x1C); /*0x770a81*/
      if ( (unsigned __int16)++v13 >= *(_WORD *)(a1 + 8) ) /*0x770a90*/
        return v11; /*0x770a90*/
    }
  }
  if ( !*(_WORD *)(a1 + 8) ) /*0x77099f*/
    return v11; /*0x770a96*/
  v4 = *(_DWORD *)(a1 + 0x1C); /*0x7709a5*/
  do /*0x7709c5*/
  {
    _memset(v3, 0, v4); /*0x7709ac*/
    v4 = *(_DWORD *)(a1 + 0x1C); /*0x7709b1*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x7709b4*/
    v11 += v4; /*0x7709b7*/
    ++v2; /*0x7709bb*/
  }
  while ( (unsigned __int16)v2 < *(_WORD *)(a1 + 8) ); /*0x7709c5*/
  return v11; /*0x7709cb*/
}
