unsigned __int8 __thiscall sub_642D90(_DWORD *this, int a2, _DWORD *a3, int *a4, char a5)
{
  unsigned __int8 result; // al
  LPVOID (__stdcall *v7)(DWORD); // ebx
  ThreadSpecificInterfaceManager *v8; // edi
  int ***v9; // eax
  _DWORD *v10; // eax

  if ( (*(_BYTE *)(a2 + 0xC) & 2) != 0 ) /*0x642d9c*/
    return 0; /*0x642d9f*/
  v7 = TlsGetValue; /*0x642da6*/
  while ( 1 ) /*0x642db4*/
  {
    v8 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x642db4*/
    if ( (*(_BYTE *)(a2 + 0xC) & 1) != 0 ) /*0x642db7*/
    {
      v10 = v7(v8->tlsStorage); /*0x642de9*/
      if ( !v10 ) /*0x642ded*/
        v10 = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface( /*0x642df2*/
                          v8,
                          (int (__thiscall ***)(_DWORD, unsigned int))this);
      result = sub_642BF0(v10, *(_DWORD *)(a2 + 4), (int *)(a2 + 8), a4); /*0x642e06*/
    }
    else
    {
      v9 = (int ***)v7(v8->tlsStorage); /*0x642dbd*/
      if ( !v9 ) /*0x642dc1*/
        v9 = (int ***)ThreadSpecificInterfaceManager_AddInterface(v8, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x642dc6*/
      result = (unsigned __int8)sub_435D50(v9, *(_DWORD *)(a2 + 4), (_DWORD *)(a2 + 8), a4); /*0x642dda*/
      *(_BYTE *)(a2 + 0xC) |= 1u; /*0x642ddf*/
    }
    if ( result ) /*0x642e0d*/
      break; /*0x642e0d*/
    if ( ++*(_DWORD *)(a2 + 4) >= *(this + 2) ) /*0x642e19*/
    {
      *(_BYTE *)(a2 + 0xC) |= 2u; /*0x642e27*/
      return result; /*0x642e2f*/
    }
    if ( !a5 ) /*0x642e1f*/
      return result; /*0x642e1f*/
    *(_BYTE *)(a2 + 0xC) &= ~1u; /*0x642e21*/
  }
  *a3 = *(_DWORD *)(a2 + 8); /*0x642e39*/
  return result; /*0x642d9e*/
}
