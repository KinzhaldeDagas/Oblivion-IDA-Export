LONG __thiscall sub_6D2F60(_DWORD *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // eax
  LONG result; // eax
  int v6; // edi
  LONG v7; // ebx
  int v8; // [esp-14h] [ebp-20h]

  v2 = (_DWORD *)a2; /*0x6d2f63*/
  sub_6EC2B0(a2); /*0x6d2f6a*/
  v8 = v2[0x87]; /*0x6d2f82*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v8 + 4); /*0x6d2f83*/
  a2 = 4; /*0x6d2f86*/
  v4(v8, this + 3, 4, &a2, 1); /*0x6d2f8e*/
  result = sub_712A90(v2); /*0x6d2f95*/
  v6 = *(this + 4); /*0x6d2f9a*/
  v7 = result; /*0x6d2f9d*/
  if ( v6 != result ) /*0x6d2fa1*/
  {
    if ( v6 ) /*0x6d2fa5*/
    {
      result = InterlockedDecrement((volatile LONG *)(v6 + 4)); /*0x6d2fab*/
      if ( !result ) /*0x6d2fb3*/
        result = (**(int (__thiscall ***)(int, int))v6)(v6, 1); /*0x6d2fc1*/
    }
    *(this + 4) = v7; /*0x6d2fc5*/
    if ( v7 ) /*0x6d2fc8*/
      return InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x6d2fce*/
  }
  return result; /*0x6d2fd4*/
}
