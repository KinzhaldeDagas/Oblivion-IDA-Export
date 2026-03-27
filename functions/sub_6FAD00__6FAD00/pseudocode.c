int __thiscall sub_6FAD00(float *this, _DWORD **a2)
{
  _DWORD *v3; // eax
  int v4; // esi

  v3 = (_DWORD *)FormHeapAlloc(0x1Cu);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_752BF0(v3);
    *(float *)(v4 + 0x18) = 1.0;
    *(_DWORD *)v4 = &BSWindModifier::`vftable';
    *(_DWORD *)(v4 + 0xC) = 0xFA0;
  }
  else
  {
    v4 = 0;
  }
  sub_752C40(this, v4, a2);
  *(float *)(v4 + 0x18) = *(this + 6);
  return v4;
}
