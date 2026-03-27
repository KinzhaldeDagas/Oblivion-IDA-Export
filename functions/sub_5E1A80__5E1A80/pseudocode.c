void __thiscall sub_5E1A80(_DWORD *this, char a2)
{
  int v3; // esi

  if ( *(this + 0x16) )
  {
    if ( !(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 8))(*(this + 0x16)) )
    {
      v3 = *(this + 0x16);
      if ( v3 )
        *(_BYTE *)(v3 + 0x2A8) = a2;
    }
  }
}
