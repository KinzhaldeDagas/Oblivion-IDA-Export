unsigned int __thiscall sub_6C94E0(unsigned int *this, int a2, int *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  _DWORD *v6; // ecx
  int v8; // eax
  int *v9; // edi
  int v10; // ebp

  v4 = *(this + 3); /*0x6c94e5*/
  v5 = 0; /*0x6c94e8*/
  if ( v4 ) /*0x6c94f0*/
  {
    v6 = (_DWORD *)*(this + 5); /*0x6c94f2*/
    do /*0x6c9502*/
    {
      if ( !*v6 ) /*0x6c94f5*/
        break; /*0x6c94f8*/
      ++v5; /*0x6c94fa*/
      v6 += 4; /*0x6c94fd*/
    }
    while ( v5 < v4 ); /*0x6c9502*/
  }
  if ( v5 == v4 && !sub_6C8580(this) ) /*0x6c950a*/
    return 0xFFFFFFFF; /*0x6c9514*/
  v8 = a2; /*0x6c951f*/
  v9 = (int *)(0x10 * v5 + *(this + 5)); /*0x6c9529*/
  v10 = *v9; /*0x6c952c*/
  if ( *v9 != a2 ) /*0x6c9530*/
  {
    if ( v10 ) /*0x6c9534*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x6c953a*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x6c9551*/
      v8 = a2; /*0x6c9553*/
    }
    *v9 = v8; /*0x6c9559*/
    if ( v8 ) /*0x6c955b*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x6c9561*/
  }
  sub_6C67F0((_DWORD *)(0x10 * v5 + *(this + 6)), a3); /*0x6c9575*/
  return v5; /*0x6c9513*/
}
