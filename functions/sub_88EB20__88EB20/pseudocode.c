void __thiscall sub_88EB20(int this)
{
  if ( dword_BA7A8C != 3 )
  {
    if ( (*(_BYTE *)(this + 0xC) & 0x40) != 0 )
    {
      if ( dword_BA7A8C != 2 )
      {
        sub_89EAE0((_DWORD *)this);
        *(_WORD *)(this + 0xC) &= ~0x40u;
      }
    }
    else if ( (*(_BYTE *)(this + 0xC) & 1) != 0 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 0x64))(this);
    }
  }
}
