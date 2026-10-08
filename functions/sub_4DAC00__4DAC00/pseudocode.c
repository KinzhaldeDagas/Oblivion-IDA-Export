char __cdecl sub_4DAC00(Atmosphere *a1, int a2)
{
  int v2; // edi
  NiRTTI *v3; // eax
  char *PointerAtOffset08; // eax
  char *v5; // ebx
  const char *v6; // esi
  _DWORD *v7; // ecx

  v2 = *(_DWORD *)(a2 + 0xC); /*0x4dac0e*/
  a2 = v2; /*0x4dac11*/
  if ( a1 ) /*0x4dac15*/
  {
    v3 = (NiRTTI *)((int (__thiscall *)(Atmosphere *))a1->__vftbl->Initialize)(a1); /*0x4dac1f*/
    if ( v3 ) /*0x4dac23*/
    {
      while ( v3 != &stru_B365AC ) /*0x4dac2a*/
      {
        v3 = v3->parent; /*0x4dac2c*/
        if ( !v3 ) /*0x4dac31*/
          goto LABEL_7; /*0x4dac31*/
      }
      *(_BYTE *)v2 |= 8u; /*0x4dac35*/
    }
  }
LABEL_7:
  PointerAtOffset08 = (char *)Shared_GetPointerAtOffset08(a1); /*0x4dac38*/
  v5 = PointerAtOffset08; /*0x4dac42*/
  if ( a1 != *(Atmosphere **)(v2 + 0x10) ) /*0x4dac44*/
  {
    if ( PointerAtOffset08 ) /*0x4dac48*/
    {
      v6 = *((const char **)PointerAtOffset08 + 2); /*0x4dac4a*/
      if ( v6 ) /*0x4dac4f*/
      {
        if ( !strcmp(v6, "Arrow") ) /*0x4dac5f*/
          return (char)PointerAtOffset08; /*0x4dac5f*/
        v2 = a2; /*0x4dac61*/
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 8) + 0x190))(*(_DWORD *)(v2 + 8)) /*0x4dac85*/
    && v5
    && (PointerAtOffset08 = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 4))(v5)) != 0 )
  {
    while ( PointerAtOffset08 != &MEMORY[0xB33E90][0x13F8] ) /*0x4dac8c*/
    {
      PointerAtOffset08 = *((char **)PointerAtOffset08 + 1); /*0x4dac8e*/
      if ( !PointerAtOffset08 ) /*0x4dac93*/
        goto LABEL_17; /*0x4dac93*/
    }
  }
  else
  {
LABEL_17:
    PointerAtOffset08 = (char *)a1->unk10; /*0x4dac95*/
    if ( PointerAtOffset08 ) /*0x4dac9a*/
    {
      PointerAtOffset08 = (char *)NiRTTI_Cast((BSStringT *)&stru_BA7D84, (NiObject *)a1->unk10); /*0x4daca2*/
      if ( PointerAtOffset08 ) /*0x4dacac*/
      {
        if ( a1 == *(Atmosphere **)(v2 + 0x10) ) /*0x4dacb1*/
          *(_BYTE *)v2 |= 2u; /*0x4dacb3*/
        v7 = *((_DWORD **)PointerAtOffset08 + 2); /*0x4dacb6*/
        if ( v7 && (LOBYTE(PointerAtOffset08) = *sub_8A63F0(v7, &a2) != 0, (_BYTE)PointerAtOffset08) ) /*0x4daccf*/
          ++*(_WORD *)(v2 + 2); /*0x4dacd1*/
        else
          ++*(_WORD *)(v2 + 4); /*0x4dacdb*/
      }
    }
  }
  return (char)PointerAtOffset08; /*0x4dacd6*/
}
