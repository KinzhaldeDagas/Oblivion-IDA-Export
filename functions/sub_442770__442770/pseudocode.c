int __stdcall sub_442770(int a1, int a2)
{
  int v2; // ebx
  unsigned int i; // edi
  volatile LONG *v5; // esi

  v2 = 0;
  if ( !a1 )
    return 0;
  for ( i = 0; *(unsigned __int16 *)(a1 + 0xB6) > i; ++i )
  {
    v5 = *(volatile LONG **)(*(_DWORD *)(a1 + 0xB0) + 4 * i);
    if ( v5 )
    {
      InterlockedIncrement(v5 + 1);
      if ( (*(int (__thiscall **)(volatile LONG *))(*v5 + 8))(v5) )
      {
        v2 += sub_442770((int)v5, a2);
      }
      else if ( (*(int (__thiscall **)(volatile LONG *))(*v5 + 0x10))(v5) )
      {
        if ( (_BYTE)a2 || (v5[6] & 1) == 0 )
          v2 += *(unsigned __int16 *)(*((_DWORD *)v5 + 0x2D) + 0x40);
      }
    }
    if ( v5 )
    {
      if ( !InterlockedDecrement(v5 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1);
    }
  }
  return v2;
}
