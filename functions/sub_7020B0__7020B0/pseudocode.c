int __thiscall sub_7020B0(int this)
{
  int v2; // ecx

  if ( *(_DWORD *)(this + 0x24) )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x24) + 4))(*(_DWORD *)(this + 0x24));
  v2 = *(_DWORD *)(this + 0x3C);
  if ( v2 )
    return **(_DWORD **)(v2 + 0x54);
  else
    return 0;
}
