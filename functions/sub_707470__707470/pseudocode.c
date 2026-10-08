// Fog property propagation decode: direct single-property insertion helper; formula would place fog kind 1 at state +0x0C, but stock native callsites are screen-texture non-fog inserts.
void __thiscall sub_707470(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  int v3; // eax

  if ( a2 ) /*0x70747a*/
  {                                             // Fog property propagation decode: direct insertion uses the same kind guard as 0x7077D0; fog kind 1 would pass.
    if ( (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x13))(a2) <= 0xA ) /*0x707488*/
    {
      v3 = (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x13))(a2); /*0x707492*/
      NiSmartPointer_Set__(this + v3 + 2, a2);  // Fog property propagation decode: direct insertion target is state +0x08 + 4*kind; fog kind 1 would be state +0x0C. /*0x707498*/
    }
  }
}
