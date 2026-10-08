LONG __thiscall sub_6E8550(_DWORD *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // eax
  LONG result; // eax
  int v6; // edi
  LONG v7; // ebx
  int v8; // [esp-14h] [ebp-20h]

  v2 = (_DWORD *)a2; /*0x6e8553*/
  sub_6EC2B0(a2); /*0x6e855a*/
  v8 = v2[0x87]; /*0x6e8572*/
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v8 + 4); /*0x6e8573*/
  a2 = 1; /*0x6e8576*/
  v4(v8, this + 3, 1, &a2, 1); /*0x6e857e*/
  result = sub_712A90(v2); /*0x6e8585*/
  v6 = *(this + 4); /*0x6e858a*/
  v7 = result; /*0x6e858d*/
  if ( v6 != result ) /*0x6e8591*/
  {
    if ( v6 ) /*0x6e8595*/
    {
      result = InterlockedDecrement((volatile LONG *)(v6 + 4)); /*0x6e859b*/
      if ( !result ) /*0x6e85a3*/
        result = (**(int (__thiscall ***)(int, int))v6)(v6, 1); /*0x6e85b1*/
    }
    *(this + 4) = v7; /*0x6e85b5*/
    if ( v7 ) /*0x6e85b8*/
      return InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x6e85be*/
  }
  return result; /*0x6e85c4*/
}
