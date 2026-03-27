bool __thiscall sub_5E8A90(void *this)
{
  _DWORD *v1; // ecx
  bool result; // al
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // ebx
  int v8; // edi

  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x128))(this);
  v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
  v6 = v5;
  if ( !v4 )
  {
    if ( v5 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) )
        v4 = v6;
    }
  }
  v7 = v4;
  if ( v4 )
  {
    if ( !*(_DWORD *)(v4 + 0x40) && !*(_DWORD *)(v4 + 0x3C) )
    {
      v7 = 0;
      v8 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
      if ( v8 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) )
          v7 = v8;
      }
    }
  }
  v1 = (_DWORD *)(v7 + 0x3C);
  result = 0;
  do
  {
    if ( result )
      break;
    if ( *v1 )
      result = (*(_BYTE *)(*(_DWORD *)*v1 + 0x34) & 4) != 0;
    v1 = (_DWORD *)v1[1];
  }
  while ( v1 );
  return result;
}
