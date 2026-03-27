int __thiscall sub_759D80(const void **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x68u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_73EE80(v3);
    *(_DWORD *)v4 = &NiPSysData::`vftable';
    *(_DWORD *)(v4 + 0x5C) = 0;
    *(_DWORD *)(v4 + 0x60) = 0;
    *(_WORD *)(v4 + 0x64) = 0;
    *(_WORD *)(v4 + 0x66) = 0;
    sub_759940(this, v4, a2);
    return v4;
  }
  else
  {
    sub_759940(this, 0, a2);
    return 0;
  }
}
