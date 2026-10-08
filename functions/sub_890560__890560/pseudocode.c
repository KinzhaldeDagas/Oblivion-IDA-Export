int __thiscall sub_890560(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax

  v3 = *(this + 0x24); /*0x890568*/
  if ( v3 != a2 ) /*0x890570*/
  {
    if ( v3 ) /*0x890574*/
    {
      if ( *(_WORD *)(v3 + 4) ) /*0x890576*/
      {
        result = (unsigned __int16)--*(_WORD *)(v3 + 6); /*0x890582*/
        if ( !(_WORD)result ) /*0x890589*/
          result = (**(int (__thiscall ***)(int, int))v3)(v3, 1); /*0x890591*/
      }
    }
    *(this + 0x24) = a2; /*0x890595*/
    if ( a2 ) /*0x89059b*/
    {
      if ( *(_WORD *)(a2 + 4) ) /*0x89059d*/
        ++*(_WORD *)(a2 + 6); /*0x8905a4*/
    }
  }
  return result; /*0x8905a9*/
}
