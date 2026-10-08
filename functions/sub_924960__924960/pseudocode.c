int __thiscall sub_924960(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax

  if ( a2 ) /*0x92496a*/
  {
    if ( *(_WORD *)(a2 + 4) ) /*0x92496c*/
      ++*(_WORD *)(a2 + 6); /*0x924973*/
  }
  v3 = *(this + 0x26); /*0x924977*/
  if ( v3 ) /*0x92497f*/
  {
    if ( *(_WORD *)(v3 + 4) ) /*0x924981*/
    {
      if ( !--*(_WORD *)(v3 + 6) ) /*0x92498c*/
        result = (**(int (__thiscall ***)(int, int))v3)(v3, 1); /*0x924997*/
    }
  }
  *(this + 0x26) = a2; /*0x924999*/
  return result; /*0x92499f*/
}
