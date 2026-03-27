int __thiscall sub_75A4A0(int *this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x24u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_752BF0(v3);
    *(_DWORD *)v4 = &NiPSysColorModifier::`vftable';
    *(_DWORD *)(v4 + 0x18) = 0;
    *(float *)(v4 + 0x1C) = 0.0;
    *(float *)(v4 + 0x20) = 0.0;
  }
  else
  {
    v4 = 0;
  }
  sub_752C40((const char **)this, v4, a2);
  sub_75A3F0((float *)v4, *(this + 6));
  return v4;
}
