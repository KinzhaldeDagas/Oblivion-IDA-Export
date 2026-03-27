int __thiscall sub_756E40(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x28u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_752BF0(v3);
    *(float *)(v4 + 0x18) = 0.0;
    *(_DWORD *)v4 = &NiPSysGrowFadeModifier::`vftable';
    *(float *)(v4 + 0x20) = 0.0;
    *(_WORD *)(v4 + 0x1C) = 0;
    *(_WORD *)(v4 + 0x24) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_752C40(this, v4, a2);
  *(float *)(v4 + 0x18) = *((float *)this + 6);
  *(_WORD *)(v4 + 0x1C) = *((_WORD *)this + 0xE);
  *(float *)(v4 + 0x20) = *((float *)this + 8);
  *(_WORD *)(v4 + 0x24) = *((_WORD *)this + 0x12);
  return v4;
}
