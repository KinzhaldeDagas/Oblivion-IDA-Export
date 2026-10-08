int __thiscall sub_435C20(_WORD *this)
{
  int result; // eax
  unsigned __int16 i; // bx
  int v4; // edx
  int v5; // esi
  _DWORD *v6; // ebp

  result = 0; /*0x435c47*/
  for ( i = 0; i < *(this + 5); ++i ) /*0x435c4b*/
  {
    v4 = *((_DWORD *)this + 1); /*0x435c55*/
    v5 = *(_DWORD *)(v4 + 4 * i); /*0x435c5b*/
    v6 = (_DWORD *)(v4 + 4 * i); /*0x435c60*/
    if ( v5 ) /*0x435c67*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 8)) ) /*0x435c6d*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x435c83*/
      *v6 = 0; /*0x435c85*/
      result = 0; /*0x435c8c*/
    }
  }
  *(this + 6) = 0; /*0x435c9f*/
  *(this + 5) = 0; /*0x435ca3*/
  return result; /*0x435ca7*/
}
