char __usercall sub_4E26F0@<al>(int a1@<esi>, int a2)
{
  char result; // al
  int v4; // esi
  TESForm *v5; // ebx
  TESForm *v6; // eax
  int v7; // eax
  unsigned int i; // ebp
  const char **v9; // esi
  unsigned int v10; // eax
  NiNode *v11; // esi
  unsigned int j; // ebp
  int v13; // esi
  size_t v14; // [esp+Ch] [ebp-18h]
  size_t v15; // [esp+Ch] [ebp-18h]
  void *slot; // [esp+20h] [ebp-4h] BYREF
  char v17; // [esp+28h] [ebp+4h]
  float v18; // [esp+28h] [ebp+4h]

  if ( !a2 ) /*0x4e26f8*/
    return 0; /*0x4e26fe*/
  HIDWORD(v14) = a1; /*0x4e2701*/
  v4 = *(_DWORD *)(a2 + 8); /*0x4e2702*/
  v17 = 0; /*0x4e2707*/
  if ( v4 ) /*0x4e270c*/
  {
    LODWORD(v14) = 9; /*0x4e2712*/
    if ( _strnicmp((const char *)v4, "FlameNode", v14) ) /*0x4e271a*/
    {
      if ( !CRT_StricmpLocaleDispatch((const char *)v4, "FlameCap") ) /*0x4e2875*/
        *(_WORD *)(a2 + 0x18) &= ~1u; /*0x4e2881*/
      goto LABEL_26; /*0x4e2881*/
    }
    v5 = 0; /*0x4e272f*/
    if ( isdigit(*(char *)(v4 + 9)) ) /*0x4e2731*/
    {
      v6 = TESForm_LookupByFormID(*(char *)(v4 + 9) - 0x12); /*0x4e2745*/
    }
    else
    {
      if ( !isalpha(*(char *)(v4 + 9)) ) /*0x4e275e*/
      {
LABEL_10:
        for ( i = 0; i < *(unsigned __int16 *)(a2 + 0xB6); ++i ) /*0x4e277a*/
        {
          if ( *(unsigned __int16 *)(a2 + 0xB6) > i ) /*0x4e278c*/
          {
            v9 = *(const char ***)(*(_DWORD *)(a2 + 0xB0) + 4 * i); /*0x4e2794*/
            if ( v9 ) /*0x4e2799*/
            {
              if ( (*((int (__thiscall **)(const char **))*v9 + 2))(v9) ) /*0x4e27a2*/
              {
                LODWORD(v15) = 4; /*0x4e27ab*/
                if ( !strncmp(v9[2], "BASE", v15) ) /*0x4e27b3*/
                {
                  (*((void (__thiscall **)(const char **, void **, unsigned int))*v9 + 0x23))(v9, &slot, i); /*0x4e27cf*/
                  NiPointerSlot_Release(&slot); /*0x4e27d5*/
                }
              }
            }
          }
        }
        if ( v5 ) /*0x4e27ea*/
        {
          LOWORD(v10) = v5[1].member.modlist.next; /*0x4e27f0*/
          if ( (_WORD)v10 == 0xFFFF ) /*0x4e27f8*/
            v10 = strlen((const char *)v5[1].member.modlist.data); /*0x4e27fd*/
          else
            v10 = (unsigned __int16)v10; /*0x4e280d*/
          if ( v10 ) /*0x4e2812*/
          {
            v11 = (NiNode *)((int (__thiscall *)(TESForm *, _DWORD))v5->vtbl[1].Unk_0E)(v5, 0); /*0x4e2822*/
            if ( v11 ) /*0x4e2826*/
            {
              v18 = (double)(Game_RandomLargeInteger(0) % 0x3E8) / fCostant_100; /*0x4e2845*/
              sub_4DE3C0(v11, v18); /*0x4e2851*/
              (*(void (__thiscall **)(int, NiNode *, int))(*(_DWORD *)a2 + 0x84))(a2, v11, 1); /*0x4e2866*/
              v17 = 1; /*0x4e2868*/
            }
          }
        }
        goto LABEL_26; /*0x4e286d*/
      }
      v7 = tolower(*(char *)(v4 + 9)); /*0x4e2765*/
      v6 = TESForm_LookupByFormID(v7 - 0x39); /*0x4e276e*/
    }
    v5 = v6; /*0x4e2776*/
    goto LABEL_10; /*0x4e2776*/
  }
LABEL_26:
  for ( j = 0; j < *(unsigned __int16 *)(a2 + 0xB6); ++j ) /*0x4e2889*/
  {
    if ( *(unsigned __int16 *)(a2 + 0xB6) > j ) /*0x4e289b*/
    {
      v13 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * j); /*0x4e28a3*/
      if ( v13 ) /*0x4e28a8*/
      {
        if ( (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 4))(v13) == &parent ) /*0x4e28bd*/
        {
          if ( sub_4E26F0(v13, v13) ) /*0x4e28c0*/
            v17 = 1; /*0x4e28cc*/
        }
      }
    }
  }
  result = v17; /*0x4e28df*/
  if ( v17 ) /*0x4e28e8*/
    *(_WORD *)(a2 + 0x18) = *(_WORD *)(a2 + 0x18) & 0xFFED | 2; /*0x4e28f7*/
  return result; /*0x4e26fc*/
}
