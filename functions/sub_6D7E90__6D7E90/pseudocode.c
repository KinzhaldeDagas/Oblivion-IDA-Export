LONG __thiscall sub_6D7E90(_DWORD *this, unsigned int a2, LONG *a3)
{
  LONG result; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // edi
  bool v10; // zf

  if ( (unk_B3DAEC & 1) == 0 ) /*0x6d7ea1*/
  {
    unk_B3DAEC |= 1u; /*0x6d7ea3*/
    unk_B3DAE8 = 0; /*0x6d7eae*/
    atexit(sub_A26860); /*0x6d7eb8*/
  }
  result = a2; /*0x6d7ec4*/
  if ( a2 < *((unsigned __int16 *)this + 5) ) /*0x6d7ece*/
  {
    v5 = unk_B3DAE8; /*0x6d7ee8*/
    v6 = *(this + 1); /*0x6d7ef1*/
    if ( *a3 == unk_B3DAE8 ) /*0x6d7ef4*/
    {
      if ( *(_DWORD *)(v6 + 4 * a2) != v5 ) /*0x6d7f04*/
        --*((_WORD *)this + 6); /*0x6d7f06*/
    }
    else if ( *(_DWORD *)(v6 + 4 * a2) == v5 ) /*0x6d7ef9*/
    {
      ++*((_WORD *)this + 6); /*0x6d7efb*/
    }
  }
  else
  {
    *((_WORD *)this + 5) = a2 + 1; /*0x6d7ed3*/
    if ( *a3 != unk_B3DAE8 ) /*0x6d7ee0*/
      ++*((_WORD *)this + 6); /*0x6d7ee2*/
  }
  v7 = *(this + 1); /*0x6d7f0c*/
  v8 = *(_DWORD *)(v7 + 4 * a2); /*0x6d7f0f*/
  v9 = (_DWORD *)(v7 + 4 * a2); /*0x6d7f15*/
  if ( v8 != *a3 ) /*0x6d7f18*/
  {
    if ( v8 ) /*0x6d7f1c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x6d7f22*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x6d7f37*/
    }
    result = *a3; /*0x6d7f39*/
    v10 = *a3 == 0; /*0x6d7f3c*/
    *v9 = *a3; /*0x6d7f3e*/
    if ( !v10 ) /*0x6d7f40*/
      return InterlockedIncrement((volatile LONG *)(result + 4)); /*0x6d7f46*/
  }
  return result; /*0x6d7f4c*/
}
