int __thiscall sub_756E40(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x28u); /*0x756e46*/
  v4 = (int)v3; /*0x756e4b*/
  if ( v3 ) /*0x756e52*/
  {
    sub_752BF0(v3); /*0x756e56*/
    *(float *)(v4 + 0x18) = 0.0; /*0x756e5d*/
    *(_DWORD *)v4 = &NiPSysGrowFadeModifier::`vftable'; /*0x756e60*/
    *(float *)(v4 + 0x20) = 0.0; /*0x756e66*/
    *(_WORD *)(v4 + 0x1C) = 0; /*0x756e69*/
    *(_WORD *)(v4 + 0x24) = 0; /*0x756e6f*/
  }
  else
  {
    v4 = 0; /*0x756e77*/
  }
  sub_752C40(this, v4, a2); /*0x756e81*/
  *(float *)(v4 + 0x18) = *((float *)this + 6); /*0x756e89*/
  *(_WORD *)(v4 + 0x1C) = *((_WORD *)this + 0xE); /*0x756e90*/
  *(float *)(v4 + 0x20) = *((float *)this + 8); /*0x756e97*/
  *(_WORD *)(v4 + 0x24) = *((_WORD *)this + 0x12); /*0x756e9f*/
  return v4; /*0x756e9e*/
}
