int __thiscall sub_5E4A80(TESObjectREFR *this)
{
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  _BYTE *v6; // esi

  if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef && GetGodMode() )
    return 0;
  v3 = *((_DWORD *)this + 0x16);
  if ( v3
    && (v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0xEC))(v3, 1), (v5 = v4) != 0)
    && (v6 = *(_BYTE **)(v4 + 8)) != 0
    && v6[4] == 0x21
    && *((_DWORD *)this + 0x16)
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x304))(*((_DWORD *)this + 0x16)) )
  {
    return (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 0x78))(v6) == 0 ? v5 : 0;
  }
  else
  {
    return 0;
  }
}
