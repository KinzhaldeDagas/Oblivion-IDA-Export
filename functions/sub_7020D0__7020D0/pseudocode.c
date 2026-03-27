int __thiscall sub_7020D0(int this)
{
  int v2; // ecx

  if ( *(_DWORD *)(this + 0x24) )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x24) + 8))(*(_DWORD *)(this + 0x24));
  v2 = *(_DWORD *)(this + 0x3C);
  if ( v2 )
    return **(_DWORD **)(v2 + 0x58);
  else
    return 0;
}
