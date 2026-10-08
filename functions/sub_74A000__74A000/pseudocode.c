int *__thiscall sub_74A000(int *this, char a2)
{
  int *v3; // ebx
  int v4; // ebp
  int *v5; // edi
  int i; // ebp
  int v7; // esi
  int v9; // esi

  if ( (a2 & 2) != 0 ) /*0x74a009*/
  {
    v3 = this + 0xFFFFFFFF; /*0x74a00c*/
    v4 = *(this + 0xFFFFFFFF); /*0x74a010*/
    v5 = this + v4; /*0x74a012*/
    for ( i = v4 - 1; i >= 0; --i ) /*0x74a018*/
    {
      v7 = v5[0xFFFFFFFF]; /*0x74a020*/
      v5 += 0xFFFFFFFF; /*0x74a023*/
      if ( v7 ) /*0x74a028*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x74a02e*/
          (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x74a044*/
      }
    }
    if ( (a2 & 1) != 0 ) /*0x74a050*/
      FormHeapFree((unsigned int)v3); /*0x74a053*/
    return v3; /*0x74a05c*/
  }
  else
  {
    v9 = *this; /*0x74a064*/
    if ( *this ) /*0x74a064*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x74a06e*/
      {
        if ( v9 ) /*0x74a07a*/
          (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x74a084*/
      }
    }
    if ( (a2 & 1) != 0 ) /*0x74a08b*/
      FormHeapFree((unsigned int)this); /*0x74a08e*/
    return this; /*0x74a096*/
  }
}
