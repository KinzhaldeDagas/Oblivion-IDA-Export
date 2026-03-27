BOOL __thiscall sub_5E1B30(void *this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ebx
  int v5; // edi

  v2 = 0;
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) )
      v2 = v3;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(v2 + 0x24) + 0x30))(v2 + 0x24) )
    return 1;
  v4 = 0;
  v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) )
      v4 = v5;
  }
  return !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(v4 + 0x24) + 0x28))(v4 + 0x24);
}
