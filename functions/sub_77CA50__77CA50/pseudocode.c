void (__thiscall ***__thiscall sub_77CA50(unsigned int **this))(_DWORD, signed int)
{
  _DWORD *v2; // ecx
  unsigned int **v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // esi
  unsigned int v6; // [esp+0h] [ebp-8h] BYREF
  int v7; // [esp+4h] [ebp-4h] BYREF

  v2 = *(this + 8);
  if ( !v2 )
    return 0;
  v3 = this + 7;
  if ( !*v3 )
    return 0;
  v6 = 0;
  sub_7B2600(v2, v3, &v7, &v6);
  v4 = (void (__thiscall ***)(_DWORD, int))v6;
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**v4)(v4, 1);
  }
  return v4;
}
