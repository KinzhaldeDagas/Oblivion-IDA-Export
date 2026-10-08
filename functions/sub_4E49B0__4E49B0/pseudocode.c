void __cdecl sub_4E49B0(int a1, int a2, float a3)
{
  int v3; // esi
  double v4; // st7
  int v5; // edx
  float *v6; // ecx
  int v7; // eax
  float v8; // [esp+4h] [ebp+4h]

  if ( a1 ) /*0x4e49b6*/
  {
    v3 = a2; /*0x4e49b9*/
    if ( a2 ) /*0x4e49bf*/
    {
      v4 = a3; /*0x4e49c1*/
      v5 = 0; /*0x4e49c5*/
      v6 = (float *)(a1 + 4); /*0x4e49c7*/
      do /*0x4e49fe*/
      {
        if ( *v6 > v4 ) /*0x4e49d3*/
        {
          v7 = *((_DWORD *)v6 + 0xFFFFFFFF); /*0x4e49d7*/
          v8 = *v6; /*0x4e49da*/
          *((_DWORD *)v6 + 0xFFFFFFFF) = v3; /*0x4e49de*/
          v3 = v7; /*0x4e49e1*/
          *v6 = v4; /*0x4e49e3*/
          v4 = v8; /*0x4e49ed*/
        }
        if ( !v3 ) /*0x4e49f3*/
          break; /*0x4e49f3*/
        ++v5; /*0x4e49f5*/
        v6 += 2; /*0x4e49f8*/
      }
      while ( v5 < 5 ); /*0x4e49fe*/
    }
  }
}
