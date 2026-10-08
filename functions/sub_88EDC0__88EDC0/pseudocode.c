void __thiscall sub_88EDC0(int this)
{
  _DWORD *v2; // ecx

  if ( unk_BA7A8C != 3 ) /*0x88edcb*/
  {
    if ( (*(_BYTE *)(this + 0xC) & 0x40) != 0 ) /*0x88edd6*/
    {
      if ( unk_BA7A8C != 2 ) /*0x88eddb*/
      {
        sub_89EAE0((_DWORD *)this); /*0x88eddf*/
        *(_WORD *)(this + 0xC) &= ~0x40u; /*0x88ede4*/
      }
    }
    else if ( (*(_BYTE *)(this + 0xC) & 1) != 0 ) /*0x88edf0*/
    {
      v2 = *(_DWORD **)(this + 0x10); /*0x88edf2*/
      if ( v2 && sub_607840(v2) || *(float *)(this + 0x14) < 1.0 || *(_DWORD *)(this + 0x1C) == 1 ) /*0x88ee12*/
        (*(void (__thiscall **)(int))(*(_DWORD *)this + 0x64))(this); /*0x88ee1c*/
    }
  }
}
