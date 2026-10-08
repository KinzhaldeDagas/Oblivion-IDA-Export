int *__thiscall sub_959C40(int *this, char a2)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebx
  int v4; // esi
  int v5; // esi

  v2 = InterlockedDecrement; /*0x959c41*/
  v4 = *(this + 1); /*0x959c4b*/
  if ( v4 ) /*0x959c50*/
  {
    if ( !v2((volatile LONG *)(v4 + 4)) ) /*0x959c56*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x959c68*/
  }
  v5 = *this; /*0x959c6a*/
  if ( *this ) /*0x959c6a*/
  {
    if ( !v2((volatile LONG *)(v5 + 4)) ) /*0x959c74*/
    {
      if ( v5 ) /*0x959c7c*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x959c86*/
    }
  }
  if ( (a2 & 1) != 0 ) /*0x959c8d*/
    FormHeapFree((unsigned int)this); /*0x959c90*/
  return this; /*0x959c9a*/
}
