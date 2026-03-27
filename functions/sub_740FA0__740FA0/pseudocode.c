LONG sub_740FA0()
{
  NiObjectNET *v0; // eax
  int v1; // esi
  LONG result; // eax
  int (__thiscall ***v3)(_DWORD, int); // edi

  v0 = (NiObjectNET *)FormHeapAlloc(0x2Cu);
  v1 = (int)v0;
  if ( v0 )
  {
    NiObjectNET::NiObjectNET(v0);
    *(_DWORD *)v1 = &NiFogProperty::`vftable';
    *(float *)(v1 + 0x20) = 0.0;
    *(float *)(v1 + 0x24) = 0.0;
    *(float *)(v1 + 0x28) = 0.0;
    *(_WORD *)(v1 + 0x18) = 0;
    *(float *)(v1 + 0x1C) = 1.0;
    *(_DWORD *)(v1 + 0x20) = dword_B3FA90;
    *(_DWORD *)(v1 + 0x24) = dword_B3FA94;
    *(_DWORD *)(v1 + 0x28) = dword_B3FA98;
  }
  else
  {
    v1 = 0;
  }
  result = dword_B401FC;
  if ( dword_B401FC != v1 )
  {
    if ( result )
    {
      v3 = (int (__thiscall ***)(_DWORD, int))dword_B401FC;
      result = InterlockedDecrement((volatile LONG *)(result + 4));
      if ( !result )
        result = (**v3)(v3, 1);
    }
    dword_B401FC = v1;
    if ( v1 )
      return InterlockedIncrement((volatile LONG *)(v1 + 4));
  }
  return result;
}
