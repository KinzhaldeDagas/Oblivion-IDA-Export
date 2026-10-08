LONG __thiscall sub_5331C0(_DWORD *this, unsigned int a2, LONG *a3)
{
  LONG result; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // edi
  bool v10; // zf

  if ( (dword_B36590[0] & 1) == 0 ) /*0x5331d1*/
  {
    dword_B36590[0] |= 1u; /*0x5331d3*/
    unk_B3658C = 0; /*0x5331de*/
    atexit(sub_A1C550); /*0x5331e8*/
  }
  result = a2; /*0x5331f4*/
  if ( a2 < *((unsigned __int16 *)this + 5) ) /*0x5331fe*/
  {
    v5 = unk_B3658C; /*0x533218*/
    v6 = *(this + 1); /*0x533221*/
    if ( *a3 == unk_B3658C ) /*0x533224*/
    {
      if ( *(_DWORD *)(v6 + 4 * a2) != v5 ) /*0x533234*/
        --*((_WORD *)this + 6); /*0x533236*/
    }
    else if ( *(_DWORD *)(v6 + 4 * a2) == v5 ) /*0x533229*/
    {
      ++*((_WORD *)this + 6); /*0x53322b*/
    }
  }
  else
  {
    *((_WORD *)this + 5) = a2 + 1; /*0x533203*/
    if ( *a3 != unk_B3658C ) /*0x533210*/
      ++*((_WORD *)this + 6); /*0x533212*/
  }
  v7 = *(this + 1); /*0x53323c*/
  v8 = *(_DWORD *)(v7 + 4 * a2); /*0x53323f*/
  v9 = (_DWORD *)(v7 + 4 * a2); /*0x533245*/
  if ( v8 != *a3 ) /*0x533248*/
  {
    if ( v8 ) /*0x53324c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x533252*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x533267*/
    }
    result = *a3; /*0x533269*/
    v10 = *a3 == 0; /*0x53326c*/
    *v9 = *a3; /*0x53326e*/
    if ( !v10 ) /*0x533270*/
      return InterlockedIncrement((volatile LONG *)(result + 4)); /*0x533276*/
  }
  return result; /*0x53327c*/
}
