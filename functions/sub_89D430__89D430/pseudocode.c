int __thiscall sub_89D430(_DWORD *this, char a2)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 2); /*0x89d430*/
  if ( v2 ) /*0x89d435*/
  {
    if ( a2 ) /*0x89d43c*/
    {
      if ( *(_WORD *)(v2 + 4) ) /*0x89d43e*/
        ++*(_WORD *)(v2 + 6); /*0x89d445*/
    }
    else if ( *(_WORD *)(v2 + 4) ) /*0x89d44d*/
    {
      result = (unsigned __int16)--*(_WORD *)(v2 + 6); /*0x89d459*/
      if ( !(_WORD)result ) /*0x89d460*/
        return (**(int (__thiscall ***)(int, int))v2)(v2, 1); /*0x89d46e*/
    }
  }
  return result; /*0x89d44a*/
}
