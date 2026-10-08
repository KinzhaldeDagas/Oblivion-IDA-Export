void __thiscall sub_6623A0(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi

  v1 = (_DWORD *)*(this + 0x7E); /*0x6623a1*/
  if ( v1[1] ) /*0x6623a7*/
  {
    do /*0x6623c4*/
    {
      v2 = *(_DWORD *)(v1[1] + 4); /*0x6623b3*/
      FormHeapFree(v1[1]); /*0x6623b7*/
      v1[1] = v2; /*0x6623c1*/
    }
    while ( v2 ); /*0x6623c4*/
  }
  *v1 = 0; /*0x6623c7*/
}
