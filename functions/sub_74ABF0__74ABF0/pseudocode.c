LONG __thiscall sub_74ABF0(_DWORD *this, unsigned int a2, LONG *a3)
{
  LONG result; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // edi
  bool v10; // zf

  if ( (unk_B40890 & 1) == 0 ) /*0x74ac01*/
  {
    unk_B40890 |= 1u; /*0x74ac03*/
    unk_B4088C = 0; /*0x74ac0e*/
    atexit(sub_A26CC0); /*0x74ac18*/
  }
  result = a2; /*0x74ac24*/
  if ( a2 < *((unsigned __int16 *)this + 5) ) /*0x74ac2e*/
  {
    v5 = unk_B4088C; /*0x74ac48*/
    v6 = *(this + 1); /*0x74ac51*/
    if ( *a3 == unk_B4088C ) /*0x74ac54*/
    {
      if ( *(_DWORD *)(v6 + 4 * a2) != v5 ) /*0x74ac64*/
        --*((_WORD *)this + 6); /*0x74ac66*/
    }
    else if ( *(_DWORD *)(v6 + 4 * a2) == v5 ) /*0x74ac59*/
    {
      ++*((_WORD *)this + 6); /*0x74ac5b*/
    }
  }
  else
  {
    *((_WORD *)this + 5) = a2 + 1; /*0x74ac33*/
    if ( *a3 != unk_B4088C ) /*0x74ac40*/
      ++*((_WORD *)this + 6); /*0x74ac42*/
  }
  v7 = *(this + 1); /*0x74ac6c*/
  v8 = *(_DWORD *)(v7 + 4 * a2); /*0x74ac6f*/
  v9 = (_DWORD *)(v7 + 4 * a2); /*0x74ac75*/
  if ( v8 != *a3 ) /*0x74ac78*/
  {
    if ( v8 ) /*0x74ac7c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x74ac82*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x74ac97*/
    }
    result = *a3; /*0x74ac99*/
    v10 = *a3 == 0; /*0x74ac9c*/
    *v9 = *a3; /*0x74ac9e*/
    if ( !v10 ) /*0x74aca0*/
      return InterlockedIncrement((volatile LONG *)(result + 4)); /*0x74aca6*/
  }
  return result; /*0x74acac*/
}
