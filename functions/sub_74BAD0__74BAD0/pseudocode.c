_DWORD *__thiscall sub_74BAD0(_DWORD *this, char a2)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebx
  int v4; // esi

  v2 = InterlockedDecrement; /*0x74bad1*/
  v4 = *(this + 2); /*0x74badb*/
  if ( v4 ) /*0x74bae0*/
  {
    if ( !v2((volatile LONG *)(v4 + 4)) ) /*0x74bae6*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x74baf8*/
  }
  *this = &NiRefObject::`vftable'; /*0x74baff*/
  v2(&MEMORY[0xB3FD64]); /*0x74bb05*/
  if ( (a2 & 1) != 0 ) /*0x74bb0c*/
    FormHeapFree((unsigned int)this); /*0x74bb0f*/
  return this; /*0x74bb19*/
}
