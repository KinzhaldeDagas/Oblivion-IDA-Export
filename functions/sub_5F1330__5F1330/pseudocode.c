bool __thiscall sub_5F1330(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  char v4; // al
  int v6; // esi

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x78))(this) )
    return 0;
  v2 = (_DWORD *)*(this + 0x16);
  v3 = v2[2];
  if ( v3 )
  {
    v4 = *(_BYTE *)(v3 + 0x20);
    if ( (v4 != 5 || !v2[1]) && (v4 != 6 || !v2[1]) )
      return 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 0x478))(v2) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0x16) + 0x474))(*(this + 0x16), 0);
    return 0;
  }
  v6 = (*(int (__thiscall **)(_DWORD *))(*this + 0x154))(this);
  return v6
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 0x98))(v6)
      && !sub_4A0300(v6, (float *)g_worldScenegraph->camera, flt_A524B0);
}
