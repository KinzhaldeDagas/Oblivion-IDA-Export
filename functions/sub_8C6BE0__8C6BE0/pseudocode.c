int __thiscall sub_8C6BE0(_DWORD *this)
{
  int result; // eax
  unsigned int i; // ebx
  int v4; // ecx
  int v5; // esi
  _DWORD *v6; // edi

  result = 0; /*0x8c6c09*/
  for ( i = 0; i < *(this + 3); v6[1] = 0 ) /*0x8c6c0d*/
  {
    v4 = *(this + 1); /*0x8c6c20*/
    v5 = *(_DWORD *)(v4 + 8 * i); /*0x8c6c23*/
    v6 = (_DWORD *)(v4 + 8 * i); /*0x8c6c28*/
    if ( v5 ) /*0x8c6c2f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x8c6c35*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x8c6c4b*/
      *v6 = 0; /*0x8c6c4d*/
      result = 0; /*0x8c6c53*/
    }
    ++i; /*0x8c6c55*/
  }
  *(this + 4) = 0; /*0x8c6c68*/
  *(this + 3) = 0; /*0x8c6c6b*/
  return result; /*0x8c6c6e*/
}
