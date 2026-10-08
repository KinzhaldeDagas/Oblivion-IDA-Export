int __thiscall sub_6E84B0(_BYTE *this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x18u); /*0x6e84d7*/
  v4 = (int)v3; /*0x6e84dc*/
  if ( v3 ) /*0x6e84ef*/
  {
    sub_6EC220(v3); /*0x6e84f3*/
    *(_DWORD *)v4 = &NiBoolInterpolator::`vftable'; /*0x6e84f8*/
    *(_BYTE *)(v4 + 0xC) = byte_A7C6AC; /*0x6e8503*/
    *(_DWORD *)(v4 + 0x10) = 0; /*0x6e8506*/
    *(_DWORD *)(v4 + 0x14) = 0; /*0x6e850d*/
  }
  else
  {
    v4 = 0; /*0x6e8516*/
  }
  sub_6E82F0(this, v4, a2); /*0x6e8528*/
  return v4; /*0x6e852f*/
}
