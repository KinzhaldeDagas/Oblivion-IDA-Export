char __thiscall sub_43AB80(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4, char a5)
{
  char result; // al
  ThreadSpecificInterfaceManager *v7; // edi
  _DWORD *v8; // eax
  _DWORD *Value; // eax

  if ( (*(_BYTE *)(a2 + 0xC) & 2) != 0 ) /*0x43ab8c*/
    return 0; /*0x43ab8f*/
  while ( 1 ) /*0x43aba4*/
  {
    v7 = (ThreadSpecificInterfaceManager *)*(this + 5); /*0x43aba4*/
    if ( (*(_BYTE *)(a2 + 0xC) & 1) != 0 ) /*0x43aba7*/
    {
      Value = TlsGetValue(v7->tlsStorage); /*0x43abd9*/
      if ( !Value ) /*0x43abdd*/
        Value = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface( /*0x43abe2*/
                            v7,
                            (int (__thiscall ***)(_DWORD, unsigned int))this);
      result = sub_43A4E0(Value, *(_DWORD *)(a2 + 4), (int *)(a2 + 8), a4); /*0x43abf6*/
    }
    else
    {
      v8 = TlsGetValue(v7->tlsStorage); /*0x43abad*/
      if ( !v8 ) /*0x43abb1*/
        v8 = (_DWORD *)ThreadSpecificInterfaceManager_AddInterface(v7, (int (__thiscall ***)(_DWORD, unsigned int))this); /*0x43abb6*/
      result = sub_435F10(v8, *(_DWORD *)(a2 + 4), (_DWORD *)(a2 + 8), a4); /*0x43abca*/
      *(_BYTE *)(a2 + 0xC) |= 1u; /*0x43abcf*/
    }
    if ( result ) /*0x43abfd*/
      break; /*0x43abfd*/
    if ( ++*(_DWORD *)(a2 + 4) >= *(this + 2) ) /*0x43ac09*/
    {
      *(_BYTE *)(a2 + 0xC) |= 2u; /*0x43ac17*/
      return result; /*0x43ac1f*/
    }
    if ( !a5 ) /*0x43ac0f*/
      return result; /*0x43ac0f*/
    *(_BYTE *)(a2 + 0xC) &= ~1u; /*0x43ac11*/
  }
  *a3 = *(_DWORD *)(a2 + 8); /*0x43ac29*/
  return result; /*0x43ab8e*/
}
