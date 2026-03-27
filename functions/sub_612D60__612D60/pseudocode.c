int __thiscall sub_612D60(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(this + 0xF);
  if ( v2 && (v3 = *(_DWORD *)(v2 + 0x58)) != 0 && (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0xEC))(v3, 1) )
    return *(_DWORD *)((*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 0xF) + 0x58) + 0xEC))(
                         *(_DWORD *)(*(this + 0xF) + 0x58),
                         1)
                     + 8);
  else
    return 0;
}
