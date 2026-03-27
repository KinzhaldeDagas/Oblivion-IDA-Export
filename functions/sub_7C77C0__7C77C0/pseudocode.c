LONG __thiscall sub_7C77C0(_DWORD *this, LONG a2)
{
  LONG result; // eax
  LONG (__stdcall *v4)(volatile LONG *); // edi
  int (__thiscall ***v5)(_DWORD, int); // esi
  LONG (__thiscall ***v6)(_DWORD, int); // esi
  LONG v7; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v8; // [esp+18h] [ebp-4h]

  result = a2;
  if ( a2 )
  {
    InterlockedIncrement((volatile LONG *)(a2 + 4));
    v8 = 0;
    sub_7D5F80(this + 0x39, &v7, &a2);
    result = v7;
    v4 = InterlockedDecrement;
    if ( v7 )
    {
      v5 = (int (__thiscall ***)(_DWORD, int))v7;
      result = v4((volatile LONG *)(v7 + 4));
      if ( !result )
        result = (**v5)(v5, 1);
    }
    v6 = (LONG (__thiscall ***)(_DWORD, int))a2;
    v8 = 0xFFFFFFFF;
    if ( a2 )
    {
      result = v4((volatile LONG *)(a2 + 4));
      if ( !result )
        return (**v6)(v6, 1);
    }
  }
  return result;
}
