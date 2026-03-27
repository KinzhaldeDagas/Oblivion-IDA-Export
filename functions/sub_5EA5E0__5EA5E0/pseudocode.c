BOOL __thiscall sub_5EA5E0(_BYTE *this)
{
  int v2; // ebx
  int v3; // edi

  v2 = 0;
  v3 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x190))(this) )
      v2 = v3;
  }
  return !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(v2 + 0x24) + 0x24))(v2 + 0x24)
      && !BaseExtraList_HasGhost(this + 0x44);
}
