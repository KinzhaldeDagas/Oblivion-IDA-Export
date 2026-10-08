// Clears a ref-counted NiT object-pointer array: releases every non-null element, nulls entries, and resets end/count words to zero. At bow release it is invoked on ArrowBone+0xAC, thereby releasing all ArrowBone children including the held Arrow:0 clone.
void __thiscall NiTObjectArray_ClearAndRelease(void *this)
{
  unsigned __int16 i; // bx
  int v3; // edx
  int v4; // esi
  _DWORD *v5; // ebp

  for ( i = 0; i < *((_WORD *)this + 5); ++i ) /*0x477f1b*/
  {
    v3 = *((_DWORD *)this + 1); /*0x477f25*/
    v4 = *(_DWORD *)(v3 + 4 * i); /*0x477f2b*/
    v5 = (_DWORD *)(v3 + 4 * i); /*0x477f30*/
    if ( v4 ) /*0x477f37*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x477f3d*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x477f53*/
      *v5 = 0; /*0x477f55*/
    }
  }
  *((_WORD *)this + 6) = 0; /*0x477f6f*/
  *((_WORD *)this + 5) = 0; /*0x477f73*/
}
