int __thiscall sub_8A62C0(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax

  if ( a2 ) /*0x8a62ca*/
  {
    if ( *(_WORD *)(a2 + 4) ) /*0x8a62cc*/
      ++*(_WORD *)(a2 + 6); /*0x8a62d3*/
  }
  v3 = *(this + 0x19); /*0x8a62d7*/
  if ( v3 ) /*0x8a62dc*/
  {
    if ( *(_WORD *)(v3 + 4) ) /*0x8a62de*/
    {
      if ( !--*(_WORD *)(v3 + 6) ) /*0x8a62e9*/
        result = (**(int (__thiscall ***)(int, int))v3)(v3, 1); /*0x8a62f4*/
    }
  }
  *(this + 0x19) = a2; /*0x8a62f6*/
  return result; /*0x8a62f9*/
}
