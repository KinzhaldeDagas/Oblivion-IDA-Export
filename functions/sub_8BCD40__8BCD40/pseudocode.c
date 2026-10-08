LONG __thiscall sub_8BCD40(_DWORD *this, unsigned int a2, LONG *a3)
{
  LONG result; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // esi
  _DWORD *v7; // edi
  bool v8; // zf

  result = a2; /*0x8bcd40*/
  if ( a2 < *(this + 3) ) /*0x8bcd4e*/
  {
    v4 = *(this + 1); /*0x8bcd70*/
    if ( *a3 ) /*0x8bcd67*/
    {
      if ( !*(_DWORD *)(v4 + 4 * a2) ) /*0x8bcd75*/
        ++*(this + 4); /*0x8bcd80*/
    }
    else if ( *(_DWORD *)(v4 + 4 * a2) ) /*0x8bcd86*/
    {
      --*(this + 4); /*0x8bcd91*/
    }
  }
  else
  {
    *(this + 3) = a2 + 1; /*0x8bcd53*/
    if ( *a3 ) /*0x8bcd56*/
      ++*(this + 4); /*0x8bcd61*/
  }
  v5 = *(this + 1); /*0x8bcd95*/
  v6 = *(_DWORD *)(v5 + 4 * a2); /*0x8bcd98*/
  v7 = (_DWORD *)(v5 + 4 * a2); /*0x8bcd9e*/
  if ( v6 != *a3 ) /*0x8bcda1*/
  {
    if ( v6 ) /*0x8bcda5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x8bcdab*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x8bcdc1*/
    }
    result = *a3; /*0x8bcdc3*/
    v8 = *a3 == 0; /*0x8bcdc6*/
    *v7 = *a3; /*0x8bcdc8*/
    if ( !v8 ) /*0x8bcdca*/
      return InterlockedIncrement((volatile LONG *)(result + 4)); /*0x8bcdd0*/
  }
  return result; /*0x8bcdd6*/
}
