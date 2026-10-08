void __thiscall sub_5E1A80(_DWORD *this, char a2)
{
  int v3; // esi

  if ( *(this + 0x16) ) /*0x5e1a83*/
  {
    if ( !(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 8))(*(this + 0x16)) ) /*0x5e1a91*/
    {
      v3 = *(this + 0x16); /*0x5e1a97*/
      if ( v3 ) /*0x5e1a9c*/
        *(_BYTE *)(v3 + 0x2A8) = a2; /*0x5e1aa2*/
    }
  }
}
