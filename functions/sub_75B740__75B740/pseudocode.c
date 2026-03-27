int __thiscall sub_75B740(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi
  int v5; // edx

  v3 = (NiObject *)FormHeapAlloc(0x38u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_752BF0(v3);
    *(_DWORD *)v4 = &NiPSysBombModifier::`vftable';
    *(_DWORD *)(v4 + 0x18) = 0;
    *(_DWORD *)(v4 + 0x1C) = dword_B258D0;
    *(_DWORD *)(v4 + 0x20) = dword_B258D4;
    v5 = dword_B258D8;
    *(float *)(v4 + 0x28) = 0.0;
    *(float *)(v4 + 0x2C) = 0.0;
    *(_DWORD *)(v4 + 0x24) = v5;
    *(_DWORD *)(v4 + 0x30) = 0;
    *(_DWORD *)(v4 + 0x34) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_752C40(this, v4, a2);
  *(_DWORD *)(v4 + 0x1C) = *(this + 7);
  *(_DWORD *)(v4 + 0x20) = *(this + 8);
  *(_DWORD *)(v4 + 0x24) = *(this + 9);
  *(float *)(v4 + 0x28) = *((float *)this + 0xA);
  *(float *)(v4 + 0x2C) = *((float *)this + 0xB);
  *(_DWORD *)(v4 + 0x30) = *(this + 0xC);
  *(_DWORD *)(v4 + 0x34) = *(this + 0xD);
  return v4;
}
