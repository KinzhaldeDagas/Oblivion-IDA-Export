LONG __thiscall sub_739810(_DWORD *this, unsigned int a2, LONG *a3)
{
  LONG result; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // edi
  bool v10; // zf

  if ( (unk_B40164 & 1) == 0 ) /*0x739821*/
  {
    unk_B40164 |= 1u; /*0x739823*/
    unk_B40160 = 0; /*0x73982e*/
    atexit(sub_A26B60); /*0x739838*/
  }
  result = a2; /*0x739844*/
  if ( a2 < *((unsigned __int16 *)this + 5) ) /*0x73984e*/
  {
    v5 = unk_B40160; /*0x739868*/
    v6 = *(this + 1); /*0x739871*/
    if ( *a3 == unk_B40160 ) /*0x739874*/
    {
      if ( *(_DWORD *)(v6 + 4 * a2) != v5 ) /*0x739884*/
        --*((_WORD *)this + 6); /*0x739886*/
    }
    else if ( *(_DWORD *)(v6 + 4 * a2) == v5 ) /*0x739879*/
    {
      ++*((_WORD *)this + 6); /*0x73987b*/
    }
  }
  else
  {
    *((_WORD *)this + 5) = a2 + 1; /*0x739853*/
    if ( *a3 != unk_B40160 ) /*0x739860*/
      ++*((_WORD *)this + 6); /*0x739862*/
  }
  v7 = *(this + 1); /*0x73988c*/
  v8 = *(_DWORD *)(v7 + 4 * a2); /*0x73988f*/
  v9 = (_DWORD *)(v7 + 4 * a2); /*0x739895*/
  if ( v8 != *a3 ) /*0x739898*/
  {
    if ( v8 ) /*0x73989c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x7398a2*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7398b7*/
    }
    result = *a3; /*0x7398b9*/
    v10 = *a3 == 0; /*0x7398bc*/
    *v9 = *a3; /*0x7398be*/
    if ( !v10 ) /*0x7398c0*/
      return InterlockedIncrement((volatile LONG *)(result + 4)); /*0x7398c6*/
  }
  return result; /*0x7398cc*/
}
