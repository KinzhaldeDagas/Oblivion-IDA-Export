LONG __thiscall sub_74AB20(_DWORD *this, unsigned int a2, LONG *a3)
{
  LONG result; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // edi
  bool v10; // zf

  if ( (unk_B40888 & 1) == 0 ) /*0x74ab31*/
  {
    unk_B40888 |= 1u; /*0x74ab33*/
    unk_B40884 = 0; /*0x74ab3e*/
    atexit(sub_A26CF0); /*0x74ab48*/
  }
  result = a2; /*0x74ab54*/
  if ( a2 < *((unsigned __int16 *)this + 5) ) /*0x74ab5e*/
  {
    v5 = unk_B40884; /*0x74ab78*/
    v6 = *(this + 1); /*0x74ab81*/
    if ( *a3 == unk_B40884 ) /*0x74ab84*/
    {
      if ( *(_DWORD *)(v6 + 4 * a2) != v5 ) /*0x74ab94*/
        --*((_WORD *)this + 6); /*0x74ab96*/
    }
    else if ( *(_DWORD *)(v6 + 4 * a2) == v5 ) /*0x74ab89*/
    {
      ++*((_WORD *)this + 6); /*0x74ab8b*/
    }
  }
  else
  {
    *((_WORD *)this + 5) = a2 + 1; /*0x74ab63*/
    if ( *a3 != unk_B40884 ) /*0x74ab70*/
      ++*((_WORD *)this + 6); /*0x74ab72*/
  }
  v7 = *(this + 1); /*0x74ab9c*/
  v8 = *(_DWORD *)(v7 + 4 * a2); /*0x74ab9f*/
  v9 = (_DWORD *)(v7 + 4 * a2); /*0x74aba5*/
  if ( v8 != *a3 ) /*0x74aba8*/
  {
    if ( v8 ) /*0x74abac*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x74abb2*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x74abc7*/
    }
    result = *a3; /*0x74abc9*/
    v10 = *a3 == 0; /*0x74abcc*/
    *v9 = *a3; /*0x74abce*/
    if ( !v10 ) /*0x74abd0*/
      return InterlockedIncrement((volatile LONG *)(result + 4)); /*0x74abd6*/
  }
  return result; /*0x74abdc*/
}
