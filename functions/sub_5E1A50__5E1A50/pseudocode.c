char __thiscall sub_5E1A50(_DWORD *this)
{
  int v2; // esi

  if ( *(this + 0x16)
    && !(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 8))(*(this + 0x16))
    && (v2 = *(this + 0x16)) != 0 )
  {
    return *(_BYTE *)(v2 + 0x2A8);
  }
  else
  {
    return 0;
  }
}
