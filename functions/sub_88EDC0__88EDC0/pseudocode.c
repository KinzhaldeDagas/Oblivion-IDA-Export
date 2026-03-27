void __thiscall sub_88EDC0(int this)
{
  _DWORD *v2; // ecx

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
      v2 = *(_DWORD **)(this + 0x10);
      if ( v2 && sub_607840(v2) || *(float *)(this + 0x14) < 1.0 || *(_DWORD *)(this + 0x1C) == 1 )
        (*(void (__thiscall **)(int))(*(_DWORD *)this + 0x64))(this);
    }
  }
}
