LONG __thiscall sub_6F95E0(_DWORD *this, unsigned int a2, LONG *a3)
{
  LONG result; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // edi
  bool v10; // zf

  if ( (dword_B3F388[0] & 1) == 0 ) /*0x6f95f1*/
  {
    dword_B3F388[0] |= 1u; /*0x6f95f3*/
    unk_B3F384 = 0; /*0x6f95fe*/
    atexit(sub_A268D0); /*0x6f9608*/
  }
  result = a2; /*0x6f9614*/
  if ( a2 < *((unsigned __int16 *)this + 5) ) /*0x6f961e*/
  {
    v5 = unk_B3F384; /*0x6f9638*/
    v6 = *(this + 1); /*0x6f9641*/
    if ( *a3 == unk_B3F384 ) /*0x6f9644*/
    {
      if ( *(_DWORD *)(v6 + 4 * a2) != v5 ) /*0x6f9654*/
        --*((_WORD *)this + 6); /*0x6f9656*/
    }
    else if ( *(_DWORD *)(v6 + 4 * a2) == v5 ) /*0x6f9649*/
    {
      ++*((_WORD *)this + 6); /*0x6f964b*/
    }
  }
  else
  {
    *((_WORD *)this + 5) = a2 + 1; /*0x6f9623*/
    if ( *a3 != unk_B3F384 ) /*0x6f9630*/
      ++*((_WORD *)this + 6); /*0x6f9632*/
  }
  v7 = *(this + 1); /*0x6f965c*/
  v8 = *(_DWORD *)(v7 + 4 * a2); /*0x6f965f*/
  v9 = (_DWORD *)(v7 + 4 * a2); /*0x6f9665*/
  if ( v8 != *a3 ) /*0x6f9668*/
  {
    if ( v8 ) /*0x6f966c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x6f9672*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x6f9687*/
    }
    result = *a3; /*0x6f9689*/
    v10 = *a3 == 0; /*0x6f968c*/
    *v9 = *a3; /*0x6f968e*/
    if ( !v10 ) /*0x6f9690*/
      return InterlockedIncrement((volatile LONG *)(result + 4)); /*0x6f9696*/
  }
  return result; /*0x6f969c*/
}
