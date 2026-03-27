char __userpurge sub_6B92C0@<al>(UnkBohBoh *a1@<ecx>, double a2@<st1>, double a3@<st0>, char a4, char a5)
{
  int *unk00; // eax
  int v7; // edi
  bool v8; // bl
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  tListTopic **p_unk5E4; // eax
  char v14; // [esp+Eh] [ebp-2h]
  char v15; // [esp+Fh] [ebp-1h]

  unk00 = (int *)a1->unk00;
  v7 = 0;
  v8 = 0;
  v14 = 0;
  v15 = 0;
  if ( a1->unk00 )
  {
    v9 = *unk00;
    if ( *unk00 )
    {
      if ( *(_BYTE *)(v9 + 0x20) )
        v8 = (*(_BYTE *)(*(_DWORD *)(v9 + 0x18) + 0x25) & 0x40) == 0;
    }
  }
  if ( a4 )
  {
    if ( !unk00 )
      goto LABEL_13;
    v10 = *unk00;
    if ( *unk00 )
    {
      v7 = *(_DWORD *)(v10 + 0x18);
      v14 = *(_BYTE *)(v10 + 8);
    }
  }
  if ( unk00 )
  {
    v11 = *unk00;
    if ( v11 )
    {
      if ( *(_BYTE *)(v11 + 0x20) )
        v15 = 1;
    }
  }
LABEL_13:
  sub_6B9250((BSSimpleList_VoidPtr **)a1, a5 != 0);
  if ( v7 )
  {
    sub_5308D0(v7);
    if ( !v8 )
    {
      if ( (*(_BYTE *)(v7 + 0x25) & 1) != 0 )
        return 1;
      sub_531470((TESForm *)v7, a2, a3, a1->unk10);
      if ( (*(_BYTE *)(v7 + 0x25) & 1) != 0 )
        return 1;
    }
  }
  if ( !v14 || v15 )
    p_unk5E4 = &TESDataHandler_g_PlayerRef->unk5E4;
  else
    p_unk5E4 = (tListTopic **)(*(_DWORD *)(v7 + 0x30) + 8);
  sub_6B9010(a1, (tListTopic *)p_unk5E4);
  a1->unk00 = (UInt32)&a1->unk04;
  if ( a1 != (UnkBohBoh *)0xFFFFFFFC )
    a1->unk00 = a1->unk08;
  return 0;
}
