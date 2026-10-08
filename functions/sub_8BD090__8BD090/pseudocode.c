void __thiscall sub_8BD090(_DWORD *this, int a2)
{
  int v3; // ebx
  unsigned int v4; // edi
  int **v5; // esi

  v3 = a2; /*0x8bd0b6*/
  if ( a2 ) /*0x8bd0bc*/
  {
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x8bd0c6*/
    v4 = *(this + 6); /*0x8bd0cc*/
    v5 = (int **)(this + 3); /*0x8bd0cf*/
    if ( v4 >= (unsigned int)v5[2] ) /*0x8bd0dd*/
      sub_8BCA30(v5, (int *)((char *)v5[5] + v4)); /*0x8bd0e7*/
    sub_8BCD40(v5, v4, &a2); /*0x8bd0f4*/
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x8bd102*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8bd114*/
  }
}
