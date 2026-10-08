void __thiscall sub_583DD0(_DWORD *this, int a2)
{
  double VirtualScreenWidth; // st7

  *(this + 3) = a2 - 5; /*0x583dda*/
  if ( a2 - 5 < 0 ) /*0x583ddd*/
  {
    VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x583ddf*/
    *(this + 3) = Double_To_SInt32(VirtualScreenWidth); /*0x583de9*/
  }
}
