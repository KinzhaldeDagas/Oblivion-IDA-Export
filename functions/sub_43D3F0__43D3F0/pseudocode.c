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

  result = (volatile LONG **)IOManager_43C030((IOManager *)*(this + 5), (int)&a2);
  v3 = a2;
  v11 = 0;
  while ( v3 )
  {
    (*(void (__thiscall **)(volatile LONG *))(*v3 + 0x14))(v3);
    result = (volatile LONG **)IOManager_43C030((IOManager *)*(this + 5), (int)&v10);
    v4 = result;
    v3 = a2;
    v5 = a2 == *result;
    LOBYTE(v11) = 1;
    if ( !v5 )
    {
      if ( a2 )
      {
        v6 = a2;
        result = (volatile LONG **)InterlockedDecrement(a2 + 2);
        if ( !result )
          result = (volatile LONG **)(**(int (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
      }
      v3 = *v4;
      a2 = *v4;
      if ( a2 )
      {
        result = (volatile LONG **)InterlockedIncrement(v3 + 2);
        v3 = a2;
      }
    }
    v7 = (int (__thiscall ***)(_DWORD, int))v10;
    LOBYTE(v11) = 0;
    if ( v10 )
    {
      result = (volatile LONG **)InterlockedDecrement((volatile LONG *)(v10 + 8));
      if ( !result )
      {
        if ( v7 )
          result = (volatile LONG **)(**v7)(v7, 1);
      }
      v3 = a2;
    }
  }
  v11 = 0xFFFFFFFF;
  if ( v3 )
  {
    v8 = v3;
    result = (volatile LONG **)InterlockedDecrement(v3 + 2);
    if ( !result )
      return (**(volatile LONG **(__thiscall ***)(volatile LONG *, int))v8)(v8, 1);
  }
  return result;
}
