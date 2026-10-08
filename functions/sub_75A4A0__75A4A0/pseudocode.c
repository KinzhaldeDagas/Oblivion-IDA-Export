int __thiscall sub_75A4A0(int *this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x24u); /*0x75a4a6*/
  v4 = (int)v3; /*0x75a4ab*/
  if ( v3 ) /*0x75a4b2*/
  {
    sub_752BF0(v3); /*0x75a4b6*/
    *(_DWORD *)v4 = &NiPSysColorModifier::`vftable'; /*0x75a4bd*/
    *(_DWORD *)(v4 + 0x18) = 0; /*0x75a4c3*/
    *(float *)(v4 + 0x1C) = 0.0; /*0x75a4ca*/
    *(float *)(v4 + 0x20) = 0.0; /*0x75a4cd*/
  }
  else
  {
    v4 = 0; /*0x75a4d2*/
  }
  sub_752C40((const char **)this, v4, a2); /*0x75a4dc*/
  sub_75A3F0((float *)v4, *(this + 6)); /*0x75a4e7*/
  return v4; /*0x75a4ec*/
}
