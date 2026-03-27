bool __thiscall sub_718220(_BYTE *this, int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx
  bool result; // al

  result = 0;
  if ( sub_6D7E00(this, a2) )
  {
    if ( ((*(_BYTE *)(a2 + 0x18) ^ *(this + 0x18)) & 1) == 0 )
    {
      v3 = *(unsigned __int16 *)(a2 + 0x18);
      v4 = *((unsigned __int16 *)this + 0xC);
      if ( (((unsigned __int8)v4 ^ (unsigned __int8)*(_WORD *)(a2 + 0x18)) & 0x1E) == 0
        && ((v4 ^ v3) & 0x1E0) == 0
        && (((unsigned __int8)(v4 >> 9) ^ (unsigned __int8)(v3 >> 9)) & 1) == 0
        && ((v4 ^ v3) & 0x1C00) == 0
        && *(this + 0x1A) == *(_BYTE *)(a2 + 0x1A)
        && (((unsigned __int8)(v4 >> 0xD) ^ (unsigned __int8)(v3 >> 0xD)) & 1) == 0 )
      {
        return 1;
      }
    }
  }
  return result;
}
