char __thiscall sub_43AB80(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4, char a5)
{
  char result; // al
  ThreadSpecificInterfaceManager *v7; // edi
  _DWORD *v8; // eax
  _DWORD *Value; // eax

  if ( (*(_BYTE *)(a2 + 0xC) & 2) != 0 )
    return 0;
  while ( 1 )
  {
    v7 = (ThreadSpecificInterfaceManager *)*(this + 5);
    if ( (*(_BYTE *)(a2 + 0xC) & 1) != 0 )
    {
      Value = TlsGetValue(v7->tlsStorage);
      if ( !Value )
        Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(
                            v7,
                            (int (__thiscall ***)(_DWORD, unsigned int))this);
      result = sub_43A4E0(Value, *(_DWORD *)(a2 + 4), (int *)(a2 + 8), a4);
    }
    else
    {
      v8 = TlsGetValue(v7->tlsStorage);
      if ( !v8 )
        v8 = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v7, (int (__thiscall ***)(_DWORD, unsigned int))this);
      result = sub_435F10(v8, *(_DWORD *)(a2 + 4), (_DWORD *)(a2 + 8), a4);
      *(_BYTE *)(a2 + 0xC) |= 1u;
    }
    if ( result )
      break;
    if ( ++*(_DWORD *)(a2 + 4) >= *(this + 2) )
    {
      *(_BYTE *)(a2 + 0xC) |= 2u;
      return result;
    }
    if ( !a5 )
      return result;
    *(_BYTE *)(a2 + 0xC) &= ~1u;
  }
  *a3 = *(_DWORD *)(a2 + 8);
  return result;
}
