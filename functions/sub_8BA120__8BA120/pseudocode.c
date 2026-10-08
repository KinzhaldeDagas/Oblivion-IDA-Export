int __thiscall sub_8BA120(_DWORD *this, int a2, int a3)
{
  int v4; // ecx
  int result; // eax

  if ( *(_WORD *)(a2 + 4) ) /*0x8ba125*/
    ++*(_WORD *)(a2 + 6); /*0x8ba130*/
  v4 = *(this + a3 + 2); /*0x8ba138*/
  if ( v4 ) /*0x8ba13e*/
  {
    if ( *(_WORD *)(v4 + 4) ) /*0x8ba140*/
    {
      if ( !--*(_WORD *)(v4 + 6) ) /*0x8ba14b*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x8ba156*/
    }
  }
  *(this + a3 + 2) = a2; /*0x8ba158*/
  return result; /*0x8ba15c*/
}
