char __thiscall sub_6CCD10(_BYTE *this, int a2)
{
  char v4; // al
  unsigned __int8 v5; // bl

  if ( !(unsigned __int8)sub_89D6F0(a2) )
    return 0;
  v4 = *(this + 0xD);
  if ( v4 != *(_BYTE *)(a2 + 0xD) )
    return 0;
  v5 = 0;
  if ( v4 )
  {
    while ( sub_6CCC50((float *)(0x18 * v5 + *((_DWORD *)this + 5)), (float *)(0x18 * v5 + *(_DWORD *)(a2 + 0x14))) )
    {
      if ( ++v5 >= *(this + 0xD) )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    if ( *(this + 0xC) == *(_BYTE *)(a2 + 0xC)
      && *(float *)(a2 + 0x1C) == *((float *)this + 7)
      && *(this + 0xE) == *(_BYTE *)(a2 + 0xE)
      && *(this + 0xF) == *(_BYTE *)(a2 + 0xF)
      && (!*((_DWORD *)this + 6)
       || (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 6) + 0x2C))(
            *((_DWORD *)this + 6),
            *(_DWORD *)(a2 + 0x18)))
      && *((_DWORD *)this + 6) == *(_DWORD *)(a2 + 0x18)
      && *(float *)(a2 + 0x20) == *((float *)this + 8)
      && *(this + 0x10) == *(_BYTE *)(a2 + 0x10)
      && *(this + 0x11) == *(_BYTE *)(a2 + 0x11) )
    {
      return 1;
    }
  }
  return 0;
}
