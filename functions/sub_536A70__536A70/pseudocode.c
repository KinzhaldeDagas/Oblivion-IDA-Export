void __thiscall sub_536A70(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // eax

  if ( (*(_BYTE *)(a2 + 0x30) & 0x3F) == 0xC ) /*0x536a83*/
  {
    sub_536110(a2 + 0x14); /*0x536a87*/
    v4 = v3; /*0x536a8c*/
    if ( v3 ) /*0x536a93*/
    {
      v5 = (_DWORD *)FormHeapAlloc(0x10u); /*0x536a97*/
      if ( v5 ) /*0x536aa1*/
      {
        v5[2] = a2 + 0x14; /*0x536aa3*/
        v5[3] = v4; /*0x536aa6*/
        *v5 = 0; /*0x536aa9*/
        v5[1] = 0; /*0x536aaf*/
        v5[1] = *(this + 2); /*0x536aba*/
        *(this + 2) = v5; /*0x536abe*/
      }
      else
      {
        *(_DWORD *)4 = *(this + 2); /*0x536aca*/
        *(this + 2) = 0; /*0x536acd*/
      }
    }
  }
}
