LONG __thiscall sub_6E8550(_DWORD *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // eax
  LONG result; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // [esp-14h] [ebp-20h]

  v2 = (_DWORD *)a2;
  sub_6EC2B0(a2);
  v8 = v2[0x87];
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v8 + 4);
  a2 = 1;
  v4(v8, this + 3, 1, &a2, 1);
  result = sub_712A90(v2);
  v6 = *(this + 4);
  v7 = result;
  if ( v6 != result )
  {
    if ( v6 )
    {
      result = InterlockedDecrement((volatile LONG *)(v6 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v6)(v6, 1);
    }
    *(this + 4) = v7;
    if ( v7 )
      return InterlockedIncrement((volatile LONG *)(v7 + 4));
  }
  return result;
}
