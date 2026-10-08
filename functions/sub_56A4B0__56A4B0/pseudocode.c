char __thiscall sub_56A4B0(_DWORD *this, int a2)
{
  int v2; // edi

  v2 = a2; /*0x56a4b2*/
  if ( a2 ) /*0x56a4ba*/
  {
    while ( *(_DWORD *)(v2 + 4) || *(_DWORD *)v2 ) /*0x56a4c9*/
    {
      if ( !this || !*(this + 1) && !*this || sub_56ABB0((_DWORD *)*this, *(_DWORD **)v2) ) /*0x56a4df*/
        return 1; /*0x56a4e6*/
      v2 = *(_DWORD *)(v2 + 4); /*0x56a4e8*/
      this = (_DWORD *)*(this + 1); /*0x56a4ed*/
      if ( !v2 ) /*0x56a4f0*/
        return this && (*(this + 1) || *this); /*0x56a4f0*/
    }
  }
  return this && (*(this + 1) || *this); /*0x56a509*/
}
