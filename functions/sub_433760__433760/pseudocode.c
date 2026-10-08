unsigned __int8 __thiscall sub_433760(_DWORD *this, int a2, _DWORD *a3, int *a4, char a5)
{
  unsigned __int8 result; // al
  ThreadSpecificInterfaceManager *v7; // edi
  int ***v8; // eax
  LONG *Value; // eax

  if ( (*(_BYTE *)(a2 + 0x18) & 2) != 0 ) /*0x43376c*/
    return 0; /*0x43376f*/
  while ( 1 ) /*0x433784*/
  {
    v7 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x433784*/
    if ( (*(_BYTE *)(a2 + 0x18) & 1) != 0 ) /*0x433787*/
    {
      Value = (LONG *)TlsGetValue(v7->tlsStorage); /*0x4337b9*/
      if ( !Value ) /*0x4337bd*/
        Value = (LONG *)ThreadSpecificInterfaceManager_AddInterface( /*0x4337c2*/
                          v7,
                          (int (__thiscall ***)(_DWORD, unsigned int))this);
      result = sub_432ED0(Value, *(_DWORD *)(a2 + 8), (int *)(a2 + 0x10), a4); /*0x4337d6*/
    }
    else
    {
      v8 = (int ***)TlsGetValue(v7->tlsStorage); /*0x43378d*/
      if ( !v8 ) /*0x433791*/
        v8 = (int ***)ThreadSpecificInterfaceManager_AddInterface(v7, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x433796*/
      result = (unsigned __int8)sub_431E10(v8, *(_DWORD *)(a2 + 8), (_DWORD *)(a2 + 0x10), a4); /*0x4337aa*/
      *(_BYTE *)(a2 + 0x18) |= 1u; /*0x4337af*/
    }
    if ( result ) /*0x4337dd*/
      break; /*0x4337dd*/
    if ( ++*(_DWORD *)(a2 + 8) >= *(this + 2) ) /*0x4337e9*/
    {
      *(_BYTE *)(a2 + 0x18) |= 2u; /*0x4337f7*/
      return result; /*0x4337ff*/
    }
    if ( !a5 ) /*0x4337ef*/
      return result; /*0x4337ef*/
    *(_BYTE *)(a2 + 0x18) &= ~1u; /*0x4337f1*/
  }
  *a3 = *(_DWORD *)(a2 + 0x10); /*0x433809*/
  a3[1] = *(_DWORD *)(a2 + 0x14); /*0x43380e*/
  return result; /*0x43376e*/
}
