unsigned __int8 __thiscall sub_433760(_DWORD *this, int a2, _DWORD *a3, int *a4, char a5)
{
  unsigned __int8 result; // al
  ThreadSpecificInterfaceManager *v7; // edi
  int ***v8; // eax
  LONG *Value; // eax

  if ( (*(_BYTE *)(a2 + 0x18) & 2) != 0 )
    return 0;
  while ( 1 )
  {
    v7 = (ThreadSpecificInterfaceManager *)*(this + 5);
    if ( (*(_BYTE *)(a2 + 0x18) & 1) != 0 )
    {
      Value = (LONG *)TlsGetValue(v7->tlsStorage);
      if ( !Value )
        Value = (LONG *)ThreadSpecificInterfaceManager_AddInterface(
                          v7,
                          (int (__thiscall ***)(_DWORD, unsigned int))this);
      result = sub_432ED0(Value, *(_DWORD *)(a2 + 8), (int *)(a2 + 0x10), a4);
    }
    else
    {
      v8 = (int ***)TlsGetValue(v7->tlsStorage);
      if ( !v8 )
        v8 = (int ***)ThreadSpecificInterfaceManager_AddInterface(v7, (int (__thiscall ***)(_DWORD, unsigned int))this);
      result = (unsigned __int8)sub_431E10(v8, *(_DWORD *)(a2 + 8), (_DWORD *)(a2 + 0x10), a4);
      *(_BYTE *)(a2 + 0x18) |= 1u;
    }
    if ( result )
      break;
    if ( ++*(_DWORD *)(a2 + 8) >= *(this + 2) )
    {
      *(_BYTE *)(a2 + 0x18) |= 2u;
      return result;
    }
    if ( !a5 )
      return result;
    *(_BYTE *)(a2 + 0x18) &= ~1u;
  }
  *a3 = *(_DWORD *)(a2 + 0x10);
  a3[1] = *(_DWORD *)(a2 + 0x14);
  return result;
}
