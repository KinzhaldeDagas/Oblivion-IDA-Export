int __thiscall sub_6EB7B0(float *this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x34u); /*0x6eb7d7*/
  v4 = (int)v3; /*0x6eb7dc*/
  if ( v3 ) /*0x6eb7ef*/
  {
    sub_6CC4E0(v3); /*0x6eb7f3*/
    *(_DWORD *)v4 = &NiBlendBoolInterpolator::`vftable'; /*0x6eb7f8*/
    *(_BYTE *)(v4 + 0x30) = byte_A7C6AC; /*0x6eb803*/
  }
  else
  {
    v4 = 0; /*0x6eb808*/
  }
  sub_6CD3D0(this, v4, a2); /*0x6eb81a*/
  *(_BYTE *)(v4 + 0x30) = *((_BYTE *)this + 0x30); /*0x6eb822*/
  return v4; /*0x6eb827*/
}
