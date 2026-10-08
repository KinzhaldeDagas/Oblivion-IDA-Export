int __thiscall sub_7592B0(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x40u); /*0x7592b6*/
  v4 = (int)v3; /*0x7592bb*/
  if ( v3 ) /*0x7592c2*/
  {
    sub_75E800(v3); /*0x7592c6*/
    *(_DWORD *)v4 = &NiPSysDragFieldModifier::`vftable'; /*0x7592cb*/
    *(_BYTE *)(v4 + 0x30) = 0; /*0x7592d1*/
    *(float *)(v4 + 0x34) = g_zeroNiPoint3.x; /*0x7592da*/
    *(float *)(v4 + 0x38) = g_zeroNiPoint3.y; /*0x7592e3*/
    *(float *)(v4 + 0x3C) = g_zeroNiPoint3.z; /*0x7592ec*/
  }
  else
  {
    v4 = 0; /*0x7592f1*/
  }
  sub_75E830(this, v4, a2); /*0x7592fb*/
  *(_BYTE *)(v4 + 0x30) = *((_BYTE *)this + 0x30); /*0x759306*/
  *(_DWORD *)(v4 + 0x34) = *(this + 0xD); /*0x75930b*/
  *(_DWORD *)(v4 + 0x38) = *(this + 0xE); /*0x759311*/
  *(_DWORD *)(v4 + 0x3C) = *(this + 0xF); /*0x759318*/
  return v4; /*0x759317*/
}
