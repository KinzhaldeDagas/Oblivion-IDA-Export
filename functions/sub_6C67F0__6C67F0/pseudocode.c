_DWORD *__thiscall sub_6C67F0(_DWORD *this, int *a2)
{
  int v3; // ebx
  int v4; // eax
  bool v5; // zf

  v3 = *this; /*0x6c67f4*/
  if ( *this != *a2 ) /*0x6c67fd*/
  {
    if ( v3 ) /*0x6c6801*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6c6807*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6c681d*/
    }
    v4 = *a2; /*0x6c681f*/
    v5 = *a2 == 0; /*0x6c6821*/
    *this = *a2; /*0x6c6823*/
    if ( !v5 ) /*0x6c6825*/
      InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x6c682b*/
  }
  *((_WORD *)this + 2) = *((_WORD *)a2 + 2); /*0x6c6835*/
  *((_WORD *)this + 3) = *((_WORD *)a2 + 3); /*0x6c683d*/
  *((_WORD *)this + 4) = *((_WORD *)a2 + 4); /*0x6c6845*/
  *((_WORD *)this + 5) = *((_WORD *)a2 + 5); /*0x6c684d*/
  *((_WORD *)this + 6) = *((_WORD *)a2 + 6); /*0x6c6856*/
  return this; /*0x6c6855*/
}
