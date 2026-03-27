BSStringT *__userpurge Menu_LoadXML@<eax>(
        BSStringT *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char *Str)
{
  char v5; // al
  int v7; // ecx
  int *v8; // eax
  unsigned int v9; // esi
  unsigned int *v11; // eax
  BSStringT *v12; // ebp
  int v13; // eax
  int ParentMenu; // edi
  int *v15; // ebp
  bool v16; // zf
  char v17; // [esp+Fh] [ebp-9h]
  BSStringT *v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v5 = bDisableWarning_MESSAGES;
  v7 = dword_B34D88;
  byte_B3B0A0 = 0;
  v17 = v5;
  v19 = v7;
  bDisableWarning_MESSAGES = 1;
  v8 = sub_58DBD0(Str, 0, 0);
  v9 = (unsigned int)v8;
  if ( byte_B3B0A0 )
    return 0;
  v11 = (unsigned int *)v8[3];
  if ( !v11 )
    v11 = *(unsigned int **)v9;
  v12 = sub_590330(a1, (int)v11);
  v18 = v12;
  if ( byte_B3B0A0 )
    return 0;
  v13 = *(_DWORD *)(v9 + 0xC);
  if ( !v13 )
    v13 = *(_DWORD *)v9;
  sub_58CF40(a4, v13);
  if ( byte_B3B0A0 )
    return 0;
  if ( byte_B3B0A1 )
  {
    PrintError("A tile descriptor was not terminated... Check XML file.");
    byte_B3B0A1 = 0;
  }
  ParentMenu = Tile_GetParentMenu(v12);
  if ( ParentMenu )
  {
    v15 = (int *)(v9 + 4);
    if ( v9 != 0xFFFFFFFC )
    {
      do
      {
        if ( !*v15 )
          break;
        sub_584960((_DWORD *)ParentMenu, *v15);
        *(_BYTE *)(ParentMenu + 0x1C) = 1;
        *(_BYTE *)(v9 + 0x10) = 0;
        if ( byte_B3B0A0 )
          return 0;
        v15 = (int *)v15[1];
      }
      while ( v15 );
    }
    v12 = v18;
  }
  sub_58CDB0((unsigned int **)v9);
  FormHeapFree(v9);
  sub_58FBA0((int)v12, a2, a3, a4, 0);
  v16 = dword_B34D88 == v19;
  bDisableWarning_MESSAGES = v17;
  if ( !v16 )
  {
    if ( Str )
      PrintError("Warnings were encountered in Tile::ReadFile for file '%s'.", Str);
    else
      PrintError("Warnings were encountered in Tile::ReadFile for file NULL.");
  }
  sub_584670(Str, 0);
  byte_B3B0A0 = 0;
  return v12;
}
