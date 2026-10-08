void __thiscall sub_644DE0(_DWORD *this)
{
  TravelPath *v2; // eax
  TravelPath *v3; // eax

  if ( !*(this + 0xD) ) /*0x644e04*/
  {
    v2 = (TravelPath *)FormHeapAlloc(0x14u); /*0x644e0c*/
    if ( v2 ) /*0x644e22*/
      v3 = PathLow_ctor(v2); /*0x644e26*/
    else
      v3 = 0; /*0x644e2d*/
    *(this + 0xD) = v3; /*0x644e2f*/
    v3->initializedByte10 = 0; /*0x644e32*/
  }
}
