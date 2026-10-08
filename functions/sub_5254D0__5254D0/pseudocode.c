LONG __thiscall sub_5254D0(_DWORD *this, unsigned int a2, LONG *a3)
{
  LONG result; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // edi
  bool v10; // zf

  if ( (unk_B362F8 & 1) == 0 ) /*0x5254e1*/
  {
    unk_B362F8 |= 1u; /*0x5254e3*/
    unk_B362F4 = 0; /*0x5254ee*/
    atexit(sub_A1C190); /*0x5254f8*/
  }
  result = a2; /*0x525504*/
  if ( a2 < *((unsigned __int16 *)this + 5) ) /*0x52550e*/
  {
    v5 = unk_B362F4; /*0x525528*/
    v6 = *(this + 1); /*0x525531*/
    if ( *a3 == unk_B362F4 ) /*0x525534*/
    {
      if ( *(_DWORD *)(v6 + 4 * a2) != v5 ) /*0x525544*/
        --*((_WORD *)this + 6); /*0x525546*/
    }
    else if ( *(_DWORD *)(v6 + 4 * a2) == v5 ) /*0x525539*/
    {
      ++*((_WORD *)this + 6); /*0x52553b*/
    }
  }
  else
  {
    *((_WORD *)this + 5) = a2 + 1; /*0x525513*/
    if ( *a3 != unk_B362F4 ) /*0x525520*/
      ++*((_WORD *)this + 6); /*0x525522*/
  }
  v7 = *(this + 1); /*0x52554c*/
  v8 = *(_DWORD *)(v7 + 4 * a2); /*0x52554f*/
  v9 = (_DWORD *)(v7 + 4 * a2); /*0x525555*/
  if ( v8 != *a3 ) /*0x525558*/
  {
    if ( v8 ) /*0x52555c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x525562*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x525577*/
    }
    result = *a3; /*0x525579*/
    v10 = *a3 == 0; /*0x52557c*/
    *v9 = *a3; /*0x52557e*/
    if ( !v10 ) /*0x525580*/
      return InterlockedIncrement((volatile LONG *)(result + 4)); /*0x525586*/
  }
  return result; /*0x52558c*/
}
