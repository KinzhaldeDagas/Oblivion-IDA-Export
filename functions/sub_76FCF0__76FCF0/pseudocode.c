char __thiscall sub_76FCF0(int this, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // eax
  int v6; // eax

  if ( a2 >= *(_DWORD *)(this + 0x1C) || a3 >= *(_DWORD *)(this + 0x20) )
    return 0;
  v5 = *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0x10 * a3 + 8) + 0x1C * a2;
  *(_DWORD *)(v5 + 8) = 0xFFFFFFFF;
  *(_DWORD *)(v5 + 0xC) = 0x11;
  v6 = *(_DWORD *)(this + 0x30);
  *(_BYTE *)(this + 0x28) = 1;
  if ( v6 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6);
    *(_DWORD *)(this + 0x30) = 0;
  }
  return 1;
}
