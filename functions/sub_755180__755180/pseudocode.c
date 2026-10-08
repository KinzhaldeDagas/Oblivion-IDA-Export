int __thiscall sub_755180(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x34u); /*0x755186*/
  v4 = (int)v3; /*0x75518b*/
  if ( v3 ) /*0x755192*/
  {
    sub_75E800(v3); /*0x755196*/
    *(float *)(v4 + 0x30) = 0.0; /*0x7551a1*/
    *(_DWORD *)v4 = &NiPSysRadialFieldModifier::`vftable'; /*0x7551a8*/
    sub_75E830(this, v4, a2); /*0x7551ae*/
    return v4; /*0x7551b4*/
  }
  else
  {
    sub_75E830(this, 0, a2); /*0x7551c4*/
    return 0; /*0x7551ca*/
  }
}
