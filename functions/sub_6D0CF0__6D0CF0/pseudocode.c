int __thiscall sub_6D0CF0(int this)
{
  int v2; // ecx
  int result; // eax

  if ( *(_DWORD *)(this + 0x30) )
  {
    if ( *(_BYTE *)(this + 0x58) )
    {
      sub_6D0C30((_DWORD *)this);
      v2 = *(_DWORD *)(*(_DWORD *)(this + 0x30) + 0xB4);
      result = 1;
      *(_WORD *)(v2 + 0x2E) |= 1u;
      if ( (*(_BYTE *)(this + 0x3C) & 1) != 0 )
      {
        if ( *(_DWORD *)(v2 + 0x20) )
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x54))(v2);
      }
      *(_BYTE *)(this + 0x58) = 0;
    }
  }
  return result;
}
