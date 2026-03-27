unsigned __int8 __thiscall sub_642D90(_DWORD *this, int a2, _DWORD *a3, int *a4, char a5)
{
  unsigned __int8 result; // al
  LPVOID (__stdcall *v7)(DWORD); // ebx
  ThreadSpecificInterfaceManager *v8; // edi
  int ***v9; // eax
  _DWORD *v10; // eax

  if ( (*(_BYTE *)(a2 + 0xC) & 2) != 0 )
    return 0;
  v7 = TlsGetValue;
  while ( 1 )
  {
    v8 = (ThreadSpecificInterfaceManager *)*(this + 5);
    if ( (*(_BYTE *)(a2 + 0xC) & 1) != 0 )
    {
      v10 = v7(v8->tlsStorage);
      if ( !v10 )
        v10 = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(
                          v8,
                          (int (__thiscall ***)(_DWORD, unsigned int))this);
      result = sub_642BF0(v10, *(_DWORD *)(a2 + 4), (int *)(a2 + 8), a4);
    }
    else
    {
      v9 = (int ***)v7(v8->tlsStorage);
      if ( !v9 )
        v9 = (int ***)ThreadSpecificInterfaceManager_AddInterface(v8, (int (__thiscall ***)(_DWORD, unsigned int))this);
      result = (unsigned __int8)sub_435D50(v9, *(_DWORD *)(a2 + 4), (_DWORD *)(a2 + 8), a4);
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
