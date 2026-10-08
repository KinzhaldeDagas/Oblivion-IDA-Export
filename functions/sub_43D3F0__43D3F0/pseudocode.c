volatile LONG **__thiscall sub_43D3F0(_DWORD **this)
{
  volatile LONG **result; // eax
  volatile LONG *v3; // ecx
  volatile LONG **v4; // edi
  bool v5; // zf
  volatile LONG *v6; // esi
  int (__thiscall ***v7)(_DWORD, int); // esi
  volatile LONG *v8; // esi
  volatile LONG *a2; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+18h] [ebp-10h] BYREF
  unsigned int v11; // [esp+24h] [ebp-4h]

  result = (volatile LONG **)IOManager_43C030((IOManager *)*(this + 5), (int)&a2); /*0x43d421*/
  v3 = a2; /*0x43d426*/
  v11 = 0; /*0x43d432*/
  while ( v3 ) /*0x43d43a*/
  {
    (*(void (__thiscall **)(volatile LONG *))(*v3 + 0x14))(v3); /*0x43d445*/
    result = (volatile LONG **)IOManager_43C030((IOManager *)*(this + 5), (int)&v10); /*0x43d44f*/
    v4 = result; /*0x43d454*/
    v3 = a2; /*0x43d456*/
    v5 = a2 == *result; /*0x43d45a*/
    LOBYTE(v11) = 1; /*0x43d45c*/
    if ( !v5 ) /*0x43d461*/
    {
      if ( a2 ) /*0x43d465*/
      {
        v6 = a2; /*0x43d467*/
        result = (volatile LONG **)InterlockedDecrement(a2 + 2); /*0x43d46d*/
        if ( !result ) /*0x43d471*/
          result = (volatile LONG **)(**(int (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x43d47f*/
      }
      v3 = *v4; /*0x43d481*/
      a2 = *v4; /*0x43d485*/
      if ( a2 ) /*0x43d489*/
      {
        result = (volatile LONG **)InterlockedIncrement(v3 + 2); /*0x43d48f*/
        v3 = a2; /*0x43d495*/
      }
    }
    v7 = (int (__thiscall ***)(_DWORD, int))v10; /*0x43d499*/
    LOBYTE(v11) = 0; /*0x43d49f*/
    if ( v10 ) /*0x43d4a4*/
    {
      result = (volatile LONG **)InterlockedDecrement((volatile LONG *)(v10 + 8)); /*0x43d4aa*/
      if ( !result ) /*0x43d4ae*/
      {
        if ( v7 ) /*0x43d4b2*/
          result = (volatile LONG **)(**v7)(v7, 1); /*0x43d4bc*/
      }
      v3 = a2; /*0x43d4be*/
    }
  }
  v11 = 0xFFFFFFFF; /*0x43d4cc*/
  if ( v3 ) /*0x43d4d4*/
  {
    v8 = v3; /*0x43d4d6*/
    result = (volatile LONG **)InterlockedDecrement(v3 + 2); /*0x43d4dc*/
    if ( !result ) /*0x43d4e0*/
      return (**(volatile LONG **(__thiscall ***)(volatile LONG *, int))v8)(v8, 1); /*0x43d4ee*/
  }
  return result; /*0x43d4f0*/
}
