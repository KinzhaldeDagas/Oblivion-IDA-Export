_DWORD *__thiscall sub_6B9B40(_DWORD *this, int a2)
{
  int v3; // esi
  _DWORD *result; // eax

  v3 = a2; /*0x6b9b64*/
  if ( a2 ) /*0x6b9b6e*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6b9b74*/
  result = NiTRefPointerList__AddTail(this + 4, &a2); /*0x6b9b8a*/
  if ( v3 ) /*0x6b9b99*/
  {
    result = (_DWORD *)InterlockedDecrement((volatile LONG *)(v3 + 4)); /*0x6b9b9f*/
    if ( !result ) /*0x6b9ba7*/
      return (**(_DWORD *(__thiscall ***)(int, int))v3)(v3, 1); /*0x6b9bb1*/
  }
  return result; /*0x6b9bb3*/
}
