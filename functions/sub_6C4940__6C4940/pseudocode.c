LONG __thiscall sub_6C4940(_DWORD *this, unsigned int a2, LONG *a3)
{
  LONG result; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // edi
  bool v10; // zf

  if ( (dword_B3CA98[0] & 1) == 0 ) /*0x6c4951*/
  {
    dword_B3CA98[0] |= 1u; /*0x6c4953*/
    unk_B3CA94 = 0; /*0x6c495e*/
    atexit(sub_A267D0); /*0x6c4968*/
  }
  result = a2; /*0x6c4974*/
  if ( a2 < *((unsigned __int16 *)this + 5) ) /*0x6c497e*/
  {
    v5 = unk_B3CA94; /*0x6c4998*/
    v6 = *(this + 1); /*0x6c49a1*/
    if ( *a3 == unk_B3CA94 ) /*0x6c49a4*/
    {
      if ( *(_DWORD *)(v6 + 4 * a2) != v5 ) /*0x6c49b4*/
        --*((_WORD *)this + 6); /*0x6c49b6*/
    }
    else if ( *(_DWORD *)(v6 + 4 * a2) == v5 ) /*0x6c49a9*/
    {
      ++*((_WORD *)this + 6); /*0x6c49ab*/
    }
  }
  else
  {
    *((_WORD *)this + 5) = a2 + 1; /*0x6c4983*/
    if ( *a3 != unk_B3CA94 ) /*0x6c4990*/
      ++*((_WORD *)this + 6); /*0x6c4992*/
  }
  v7 = *(this + 1); /*0x6c49bc*/
  v8 = *(_DWORD *)(v7 + 4 * a2); /*0x6c49bf*/
  v9 = (_DWORD *)(v7 + 4 * a2); /*0x6c49c5*/
  if ( v8 != *a3 ) /*0x6c49c8*/
  {
    if ( v8 ) /*0x6c49cc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x6c49d2*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x6c49e7*/
    }
    result = *a3; /*0x6c49e9*/
    v10 = *a3 == 0; /*0x6c49ec*/
    *v9 = *a3; /*0x6c49ee*/
    if ( !v10 ) /*0x6c49f0*/
      return InterlockedIncrement((volatile LONG *)(result + 4)); /*0x6c49f6*/
  }
  return result; /*0x6c49fc*/
}
