void __thiscall PathMiddleHigh::~PathMiddleHigh(NiDX92DBufferData **this)
{
  NiDX92DBufferData **v2; // edi

  *this = (NiDX92DBufferData *)&PathMiddleHigh::`vftable'; /*0x68b349*/
  v2 = this + 5; /*0x68b34f*/
  sub_68C6E0(this + 5); /*0x68b35c*/
  sub_68C9B0(v2); /*0x68b368*/
  PathLow_dtor((TravelPath *)this); /*0x68b377*/
}
