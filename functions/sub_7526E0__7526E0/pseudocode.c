int __thiscall sub_7526E0(void *this, _DWORD **a2)
{
  _DWORD *v3; // eax
  int v4; // esi

  v3 = (_DWORD *)FormHeapAlloc(0x34u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_752BF0(v3);
    *(float *)(v4 + 0x1C) = 1.0;
    *(_DWORD *)v4 = &NiPSysSpawnModifier::`vftable';
    *(float *)(v4 + 0x24) = 0.0;
    *(_WORD *)(v4 + 0x18) = 1;
    *(float *)(v4 + 0x28) = 0.0;
    *(_WORD *)(v4 + 0x20) = 1;
    *(float *)(v4 + 0x2C) = 0.0;
    *(_WORD *)(v4 + 0x22) = 1;
    *(float *)(v4 + 0x30) = 0.0;
  }
  else
  {
    v4 = 0;
  }
  sub_752C40(this, v4, a2);
  *(_WORD *)(v4 + 0x18) = *((_WORD *)this + 0xC);
  *(float *)(v4 + 0x1C) = *((float *)this + 7);
  *(_WORD *)(v4 + 0x20) = *((_WORD *)this + 0x10);
  *(_WORD *)(v4 + 0x22) = *((_WORD *)this + 0x11);
  *(float *)(v4 + 0x24) = *((float *)this + 9);
  *(float *)(v4 + 0x28) = *((float *)this + 0xA);
  *(float *)(v4 + 0x2C) = *((float *)this + 0xB);
  *(float *)(v4 + 0x30) = *((float *)this + 0xC);
  return v4;
}
