LONG __thiscall sub_436710(void *this, int *a2)
{
  LONG v2; // ebx
  _DWORD *v4; // eax
  int v5; // edi
  int v6; // eax
  bool v7; // zf
  LONG result; // eax
  LONG *Comperand; // [esp+Ch] [ebp-4h]

  v2 = 0; /*0x436714*/
  v4 = (_DWORD *)FormHeapAlloc(8u); /*0x43671e*/
  if ( v4 ) /*0x436728*/
  {
    *v4 = 0; /*0x43672a*/
    v4[1] = 0; /*0x43672c*/
    v2 = (LONG)v4; /*0x43672f*/
  }
  v5 = *(_DWORD *)(v2 + 4); /*0x436731*/
  if ( v5 != *a2 ) /*0x43673c*/
  {
    if ( v5 ) /*0x436740*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 8)) ) /*0x436746*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x43675c*/
    }
    v6 = *a2; /*0x43675e*/
    v7 = *a2 == 0; /*0x436761*/
    *(_DWORD *)(v2 + 4) = *a2; /*0x436763*/
    if ( !v7 ) /*0x436766*/
      InterlockedIncrement((volatile LONG *)(v6 + 8)); /*0x43676c*/
  }
  do /*0x4367ca*/
  {
    while ( 1 ) /*0x43679d*/
    {
      do /*0x43679d*/
      {
        Comperand = *(LONG **)(*(_DWORD *)this + 8); /*0x436785*/
        **((_DWORD **)this + 1) = Comperand; /*0x436794*/
      }
      while ( Comperand != *(LONG **)(*(_DWORD *)this + 8) ); /*0x43679d*/
      if ( !*Comperand ) /*0x4367a3*/
        break; /*0x4367a3*/
      InterlockedCompareExchange((volatile LONG *)(*(_DWORD *)this + 8), *Comperand, (LONG)Comperand); /*0x4367c2*/
    }
  }
  while ( InterlockedCompareExchange(Comperand, v2, 0) ); /*0x4367ca*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)this + 4))(*(_DWORD *)this); /*0x4367d7*/
  result = InterlockedCompareExchange((volatile LONG *)(*(_DWORD *)this + 8), v2, (LONG)Comperand); /*0x4367e5*/
  **((_DWORD **)this + 1) = 0; /*0x4367ec*/
  return result; /*0x4367ea*/
}
