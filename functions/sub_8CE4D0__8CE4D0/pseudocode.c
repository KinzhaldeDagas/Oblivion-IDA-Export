int __thiscall sub_8CE4D0(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  _BYTE v10[524]; // [esp+10h] [ebp-210h] BYREF

  if ( this )
    v3 = *(this + 2);
  else
    v3 = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x20))(v3);
  v5 = result;
  while ( v5 != 0xFFFFFFFF )
  {
    if ( this
      && (v6 = *(this + 2)) != 0
      && (v7 = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v6 + 0x28))(v6, v5, v10)) != 0 )
    {
      v8 = *(_DWORD *)(v7 + 8);
    }
    else
    {
      v8 = 0;
    }
    v9 = this ? *(this + 2) : 0;
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x24))(v9, v5);
    v5 = result;
    if ( !v8 )
      break;
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x90))(v8, a2);
  }
  return result;
}
