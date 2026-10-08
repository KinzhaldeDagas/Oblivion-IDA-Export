// Rebuilds the ClassMenu list from TESDataHandler classes, includes only playable classes, sorts/displays them by name, and optionally activates the current class row.
_BYTE **__userpurge ClassMenu_RebuildClassList@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  signed int v6; // ebx
  BSStringT *v7; // ebp
  _BYTE **result; // eax
  int v9; // esi
  char *v10; // eax
  BSStringT *v11; // eax
  int (__thiscall **v12)(int, int, BSStringT *); // esi
  double Float; // st7
  int v14; // eax
  _BYTE **v15; // [esp+Ch] [ebp-4h]

  sub_5893F0(*(_DWORD **)(a1 + 0x28)); /*0x597349*/
  v6 = 0; /*0x597353*/
  v7 = 0; /*0x597355*/
  result = (_BYTE **)(g_TESDataHandler + 0x54); /*0x597357*/
  v15 = result; /*0x59735a*/
  if ( g_TESDataHandler != 0xFFFFFFAC )
  {
    while ( 1 )
    {
      v9 = (int)*result; /*0x59736b*/
      if ( !*result ) /*0x59736b*/
        break; /*0x59736b*/
      if ( TESClass_IsPlayable(*result) )
      {
        v10 = *(char **)(v9 + 0x1C); /*0x59737c*/
        if ( !v10 ) /*0x597381*/
          v10 = EmptyString; /*0x597383*/
        v11 = sub_5971E0(a1, a2, a3, a4, v10, v9, v6++, v9 != *(_DWORD *)(a1 + 0x3C) ? 0 : 2);
        if ( !v7 || *(_DWORD *)(a1 + 0x3C) == v9 ) /*0x5973ab*/
          v7 = v11; /*0x5973ad*/
      }
      v15 = (_BYTE **)v15[1]; /*0x5973b8*/
      result = v15; /*0x5973b3*/
      if ( !v15 ) /*0x5973bc*/
        break; /*0x5973bc*/
      result = v15; /*0x597367*/
    }
    if ( v7 ) /*0x5973c0*/
    {
      if ( a5 ) /*0x5973c7*/
      {
        v12 = (int (__thiscall **)(int, int, BSStringT *))(*(_DWORD *)a1 + 0xC); /*0x5973d3*/
        Float = Tile_GetFloat(v7, 0xFA8); /*0x5973d6*/
        v14 = Double_To_SInt32(Float); /*0x5973db*/
        return (_BYTE **)(*v12)(a1, v14, v7); /*0x5973e5*/
      }
    }
  }
  return result; /*0x5973e8*/
}
