void __thiscall sub_88EB20(int this)
{
  if ( unk_BA7A8C != 3 ) /*0x88eb2b*/
  {
    if ( (*(_BYTE *)(this + 0xC) & 0x40) != 0 ) /*0x88eb36*/
    {
      if ( unk_BA7A8C != 2 ) /*0x88eb3b*/
      {
        sub_89EAE0((_DWORD *)this); /*0x88eb3f*/
        *(_WORD *)(this + 0xC) &= ~0x40u; /*0x88eb44*/
      }
    }
    else if ( (*(_BYTE *)(this + 0xC) & 1) != 0 ) /*0x88eb50*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 0x64))(this); /*0x88eb5a*/
    }
  }
}
