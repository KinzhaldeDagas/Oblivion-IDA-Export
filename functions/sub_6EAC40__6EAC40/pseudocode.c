int __thiscall sub_6EAC40(float *this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x40u); /*0x6eac67*/
  v4 = (int)v3; /*0x6eac6c*/
  if ( v3 ) /*0x6eac7f*/
  {
    sub_6CC4E0(v3); /*0x6eac83*/
    *(_DWORD *)v4 = &NiBlendPoint3Interpolator::`vftable'; /*0x6eac88*/
    *(_DWORD *)(v4 + 0x30) = dword_B24FC8; /*0x6eac93*/
    *(_DWORD *)(v4 + 0x34) = dword_B24FCC; /*0x6eac9c*/
    *(_DWORD *)(v4 + 0x38) = dword_B24FD0; /*0x6eaca5*/
    *(_BYTE *)(v4 + 0x3C) = 0; /*0x6eaca8*/
  }
  else
  {
    v4 = 0; /*0x6eacae*/
  }
  sub_6CD3D0(this, v4, a2); /*0x6eacc0*/
  *(float *)(v4 + 0x30) = *(this + 0xC); /*0x6eacc8*/
  *(float *)(v4 + 0x34) = *(this + 0xD); /*0x6eacce*/
  *(float *)(v4 + 0x38) = *(this + 0xE); /*0x6eacd4*/
  *(_BYTE *)(v4 + 0x3C) = *((_BYTE *)this + 0x3C); /*0x6eacda*/
  return v4; /*0x6eacdf*/
}
