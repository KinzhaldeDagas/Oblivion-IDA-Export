int __thiscall sub_753790(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x3Cu); /*0x753796*/
  v4 = (int)v3; /*0x75379b*/
  if ( v3 ) /*0x7537a2*/
  {
    sub_75E800(v3); /*0x7537a6*/
    *(_DWORD *)v4 = &NiPSysVortexFieldModifier::`vftable'; /*0x7537ab*/
    *(float *)(v4 + 0x30) = g_zeroNiPoint3.x; /*0x7537b6*/
    *(float *)(v4 + 0x34) = g_zeroNiPoint3.y; /*0x7537bf*/
    *(float *)(v4 + 0x38) = g_zeroNiPoint3.z; /*0x7537c8*/
  }
  else
  {
    v4 = 0; /*0x7537cd*/
  }
  sub_75E830(this, v4, a2); /*0x7537d7*/
  *(_DWORD *)(v4 + 0x30) = *(this + 0xC); /*0x7537e2*/
  *(_DWORD *)(v4 + 0x34) = *(this + 0xD); /*0x7537e8*/
  *(_DWORD *)(v4 + 0x38) = *(this + 0xE); /*0x7537ee*/
  return v4; /*0x7537f1*/
}
