void __thiscall sub_733380(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // ebp
  int v6; // edi
  int v7; // esi
  double v8; // st7
  int v9; // edx
  int v10; // ecx
  double v11; // st6
  int v12; // ecx
  double v13; // st6
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  float v17; // [esp+Ch] [ebp+4h]
  float v18; // [esp+Ch] [ebp+4h]

  v3 = a3; /*0x733380*/
  v4 = a2; /*0x733386*/
  if ( a3 > a2 ) /*0x73338e*/
  {
    while ( 1 ) /*0x7333a0*/
    {
      v6 = v4 - 1; /*0x7333a0*/
      v7 = v3 + 1; /*0x7333a3*/
      v17 = sub_733200(this, v4, v3); /*0x7333ab*/
      v8 = v17; /*0x7333af*/
      while ( 1 ) /*0x7333b3*/
      {
        v9 = *(this + 0xB); /*0x7333b3*/
        v10 = v9 + 4 * v7; /*0x7333b6*/
        do /*0x7333c9*/
        {
          v11 = *(float *)(v10 - 4); /*0x7333b9*/
          v10 -= 4; /*0x7333bc*/
          --v7; /*0x7333c1*/
        }
        while ( v11 > v8 ); /*0x7333c9*/
        v12 = v9 + 4 * v6; /*0x7333cb*/
        do /*0x7333de*/
        {
          v13 = *(float *)(v12 + 4); /*0x7333ce*/
          v12 += 4; /*0x7333d1*/
          ++v6; /*0x7333d6*/
        }
        while ( v13 < v8 ); /*0x7333de*/
        if ( v6 >= v7 ) /*0x7333e2*/
          break; /*0x7333e2*/
        v14 = *(this + 0xA); /*0x7333e4*/
        v15 = *(_DWORD *)(v14 + 4 * v6); /*0x7333e7*/
        *(_DWORD *)(v14 + 4 * v6) = *(_DWORD *)(v14 + 4 * v7); /*0x7333ed*/
        *(_DWORD *)(*(this + 0xA) + 4 * v7) = v15; /*0x7333f3*/
        v16 = *(this + 0xB); /*0x7333f6*/
        v18 = *(float *)(v16 + 4 * v6); /*0x7333fc*/
        *(float *)(v16 + 4 * v6) = *(float *)(v16 + 4 * v7); /*0x733403*/
        *(float *)(*(this + 0xB) + 4 * v7) = v18; /*0x73340d*/
      }
      if ( v7 == a3 ) /*0x733418*/
      {
        a3 = v7 - 1; /*0x73341d*/
      }
      else
      {
        sub_733380(this, v4, v7); /*0x733427*/
        v4 = v7 + 1; /*0x73342c*/
      }
      if ( a3 <= v4 ) /*0x733433*/
        break; /*0x733433*/
      v3 = a3; /*0x733398*/
    }
  }
}
