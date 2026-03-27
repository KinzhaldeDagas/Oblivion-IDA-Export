char __usercall sub_4DE1C0@<al>(int a1@<esi>, int a2)
{
  char *v3; // esi
  char v4; // bl
  TESForm *v5; // eax
  int v6; // eax
  TESForm *v7; // esi
  unsigned int i; // ebp
  int v9; // esi
  size_t v10; // [esp-10h] [ebp-14h]

  if ( !a2 )
    return 0;
  HIDWORD(v10) = a1;
  v3 = *(char **)(a2 + 8);
  v4 = 0;
  if ( v3 )
  {
    LODWORD(v10) = 9;
    if ( _strnicmp(v3, "FlameNode", v10) )
    {
      if ( !_strcmp(v3, "FlameCap") )
        *(_WORD *)(a2 + 0x18) |= 1u;
      goto LABEL_15;
    }
    sub_88CD50((_WORD *)a2, 1, 1);
    if ( isdigit(v3[9]) )
    {
      v5 = TESForm_LookupByFormID(v3[9] - 0x12);
      goto LABEL_9;
    }
    if ( isalpha(v3[9]) )
    {
      v6 = tolower(v3[9]);
      v5 = TESForm_LookupByFormID(v6 - 0x39);
LABEL_9:
      v7 = v5;
      if ( v5 )
      {
        if ( sub_449190((int)&v5[1].member.refID) )
        {
          if ( *(_WORD *)(a2 + 0xB8) )
          {
            nullsub_returnTrue_0arg();
            ((void (__thiscall *)(TESForm *, _DWORD))v7->vtbl[1].Unk_05)(v7, 0);
            sub_477EF0((_WORD *)(a2 + 0xAC));
            nullsub_returnTrue_0arg();
            v4 = 1;
          }
        }
      }
    }
  }
LABEL_15:
  for ( i = 0; i < *(unsigned __int16 *)(a2 + 0xB6); ++i )
  {
    if ( *(unsigned __int16 *)(a2 + 0xB6) > i )
    {
      v9 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * i);
      if ( v9 )
      {
        if ( (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9) == dword_B3FAB0 )
        {
          if ( sub_4DE1C0(v9) )
            v4 = 1;
        }
      }
    }
  }
  return v4;
}
