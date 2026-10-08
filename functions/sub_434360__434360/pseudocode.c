LONG __thiscall sub_434360(_DWORD *this, _DWORD *a2)
{
  void (__thiscall *v2)(_DWORD *); // edx
  int v4; // eax
  LONG result; // eax
  int v6; // eax
  int v7; // [esp+0h] [ebp-Ch]

  v2 = *(void (__thiscall **)(_DWORD *))(*a2 + 8); /*0x434367*/
  a2[3] = 4; /*0x43436f*/
  v2(a2); /*0x434376*/
  v4 = a2[4]; /*0x43437b*/
  v7 = a2[5]; /*0x43437e*/
  a2[3] = 5; /*0x43437f*/
  result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 0x10))(this, v4, v7); /*0x43438e*/
  if ( (_BYTE)result ) /*0x434392*/
  {
    v6 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 0x1C))(this, a2[4], a2[5]); /*0x4343a3*/
    return InterlockedDecrement((volatile LONG *)(*(this + 0xB) + 4 * v6)); /*0x4343b1*/
  }
  return result; /*0x4343a8*/
}
