char __usercall sub_4E26F0@<al>(int a1@<esi>, int a2)
{
  char result; // al
  char *v4; // esi
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
  _BYTE v16[4]; // [esp+20h] [ebp-4h] BYREF
  char v17; // [esp+28h] [ebp+4h]
  float v18; // [esp+28h] [ebp+4h]

  if ( !a2 )
    return 0;
  HIDWORD(v14) = a1;
  v4 = *(char **)(a2 + 8);
  v17 = 0;
  if ( v4 )
  {
    LODWORD(v14) = 9;
    if ( _strnicmp(v4, "FlameNode", v14) )
    {
      if ( !_strcmp(v4, "FlameCap") )
        *(_WORD *)(a2 + 0x18) &= ~1u;
      goto LABEL_26;
    }
    v5 = 0;
    if ( isdigit(v4[9]) )
    {
      v6 = TESForm_LookupByFormID(v4[9] - 0x12);
    }
    else
    {
      if ( !isalpha(v4[9]) )
      {
LABEL_10:
        for ( i = 0; i < *(unsigned __int16 *)(a2 + 0xB6); ++i )
        {
          if ( *(unsigned __int16 *)(a2 + 0xB6) > i )
          {
            v9 = *(const char ***)(*(_DWORD *)(a2 + 0xB0) + 4 * i);
            if ( v9 )
            {
              if ( (*((int (__thiscall **)(const char **))*v9 + 2))(v9) )
              {
                LODWORD(v15) = 4;
                if ( !strncmp(v9[2], "BASE", v15) )
                {
                  (*((void (__thiscall **)(const char **, _BYTE *, unsigned int))*v9 + 0x23))(v9, v16, i);
                  sub_7016A0((NiD3DVertexShader *)v16);
                }
              }
            }
          }
        }
        if ( v5 )
        {
          LOWORD(v10) = v5[1].member.modlist.next;
          if ( (_WORD)v10 == 0xFFFF )
            v10 = strlen((const char *)v5[1].member.modlist.data);
          else
            v10 = (unsigned __int16)v10;
          if ( v10 )
          {
            v11 = (NiNode *)((int (__thiscall *)(TESForm *, _DWORD))v5->vtbl[1].Unk_0E)(v5, 0);
            if ( v11 )
            {
              v18 = (double)(GetRandomLargeInteger_(0) % 0x3E8) / fCostant_100;
              sub_4DE3C0(v11, v18);
              (*(void (__thiscall **)(int, NiNode *, int))(*(_DWORD *)a2 + 0x84))(a2, v11, 1);
              v17 = 1;
            }
          }
        }
        goto LABEL_26;
      }
      v7 = tolower(v4[9]);
      v6 = TESForm_LookupByFormID(v7 - 0x39);
    }
    v5 = v6;
    goto LABEL_10;
  }
LABEL_26:
  for ( j = 0; j < *(unsigned __int16 *)(a2 + 0xB6); ++j )
  {
    if ( *(unsigned __int16 *)(a2 + 0xB6) > j )
    {
      v13 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * j);
      if ( v13 )
      {
        if ( (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 4))(v13) == dword_B3FAB0 )
        {
          if ( sub_4E26F0(v13) )
            v17 = 1;
        }
      }
    }
  }
  result = v17;
  if ( v17 )
    *(_WORD *)(a2 + 0x18) = *(_WORD *)(a2 + 0x18) & 0xFFED | 2;
  return result;
}
