char __userpurge sub_45C9C0@<al>(
        int a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        _DWORD *a10)
{
  _DWORD *v11; // ecx
  int v12; // eax
  void (__cdecl *v13)(_DWORD *, int, int, int *, int); // edx
  _BYTE *v14; // ebx
  int v15; // eax
  bool v16; // zf
  void (__cdecl *v17)(_DWORD *, unsigned __int8 *, int, int *, int); // eax
  void (__cdecl *v18)(_DWORD *, char *, _DWORD, int *, int); // edx
  unsigned __int8 v19; // bl
  Data *v20; // ebp
  unsigned __int8 *name; // edi
  int v22; // eax
  _DWORD *v23; // ecx
  int v24; // esi
  int v25; // edx
  char v27; // al
  unsigned __int8 v28; // [esp+13h] [ebp-119h]
  unsigned __int8 v29; // [esp+14h] [ebp-118h]
  char v30; // [esp+15h] [ebp-117h]
  char v31; // [esp+16h] [ebp-116h]
  unsigned __int8 v32; // [esp+17h] [ebp-115h] BYREF
  int v33; // [esp+18h] [ebp-114h] BYREF
  int v34; // [esp+1Ch] [ebp-110h]
  int v35; // [esp+20h] [ebp-10Ch]
  char ArgList[260]; // [esp+24h] [ebp-108h] BYREF

  v11 = (_DWORD *)g_TESDataHandler; /*0x45c9e1*/
  v34 = a1; /*0x45c9e7*/
  v30 = 0; /*0x45c9eb*/
  v31 = 0; /*0x45c9f0*/
  v29 = sub_446B10(v11); /*0x45c9fa*/
  v12 = a10[0xC]; /*0x45c9fe*/
  if ( v12 == 0xFFFFFFFF ) /*0x45ca04*/
    v12 = a10[0x52]; /*0x45ca06*/
  v13 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a10[1]; /*0x45ca0c*/
  v14 = (_BYTE *)(a1 + 0x48); /*0x45ca1b*/
  v35 = v12; /*0x45ca20*/
  v33 = 1; /*0x45ca24*/
  v13(a10, a1 + 0x48, 1, &v33, 1); /*0x45ca28*/
  if ( *(_DWORD *)(a1 + 0x4C) ) /*0x45ca2a*/
    FormHeapFree(*(_DWORD *)(a1 + 0x4C)); /*0x45ca35*/
  v15 = FormHeapAlloc((unsigned __int8)*v14); /*0x45ca41*/
  v16 = *v14 == 0; /*0x45ca49*/
  *(_DWORD *)(a1 + 0x4C) = v15; /*0x45ca4c*/
  v28 = 0; /*0x45ca4f*/
  if ( v16 ) /*0x45ca54*/
    goto LABEL_17; /*0x45ca54*/
  do /*0x45cb63*/
  {
    v17 = (void (__cdecl *)(_DWORD *, unsigned __int8 *, int, int *, int))a10[1]; /*0x45ca60*/
    v33 = 1; /*0x45ca70*/
    v17(a10, &v32, 1, &v33, 1); /*0x45ca74*/
    _memset((int)ArgList, 0, sizeof(ArgList)); /*0x45ca82*/
    v18 = (void (__cdecl *)(_DWORD *, char *, _DWORD, int *, int))a10[1]; /*0x45ca92*/
    v33 = 1; /*0x45ca9c*/
    v18(a10, ArgList, v32, &v33, 1); /*0x45caa0*/
    v19 = 0; /*0x45caa2*/
    if ( !v29 ) /*0x45caab*/
    {
LABEL_15:
      v31 = 1; /*0x45cb2e*/
      *(_BYTE *)(v28 + *(_DWORD *)(a1 + 0x4C)) = 0xFF; /*0x45cb45*/
      PrintError("Cannot find file %s referenced in the save game.  Errors may result.", ArgList); /*0x45cb49*/
      goto LABEL_16; /*0x45cb49*/
    }
    while ( 1 ) /*0x45cac0*/
    {
      v20 = (Data *)sub_446B20((_DWORD *)g_TESDataHandler, v19); /*0x45cac0*/
      name = (unsigned __int8 *)v20->name; /*0x45cac2*/
      if ( !CRT_StricmpLocaleDispatch((unsigned __int8 *)ArgList, (unsigned __int8 *)v20->name) ) /*0x45cacb*/
        break; /*0x45cacb*/
      if ( !CRT_StricmpLocaleDispatch((unsigned __int8 *)ArgList, "Oblivion.esm") ) /*0x45cae5*/
      {
        v22 = CRT_StricmpLocaleDispatch("OblivionSE.esm", name); /*0x45caf7*/
      }
      else
      {
        if ( CRT_StricmpLocaleDispatch((unsigned __int8 *)ArgList, "OblivionSE.esm") ) /*0x45cb03*/
          goto LABEL_13; /*0x45cb0d*/
        v22 = CRT_StricmpLocaleDispatch("Oblivion.esm", name); /*0x45cb15*/
      }
      if ( !v22 ) /*0x45cb1f*/
        break; /*0x45cb1f*/
LABEL_13:
      if ( ++v19 >= v29 ) /*0x45cb28*/
      {
        a1 = v34; /*0x45cb2a*/
        goto LABEL_15; /*0x45cb2a*/
      }
    }
    if ( TESFile_GetIsMaster(v20) ) /*0x45cb7e*/
      v30 = 1; /*0x45cb87*/
    v25 = v34; /*0x45cb8c*/
    *(_BYTE *)(v28 + *(_DWORD *)(v34 + 0x4C)) = v19; /*0x45cb98*/
    a1 = v25; /*0x45cb9b*/
LABEL_16:
    ++v28; /*0x45cb51*/
  }
  while ( v28 < *(_BYTE *)(a1 + 0x48) ); /*0x45cb63*/
LABEL_17:
  v23 = *(_DWORD **)(a1 + 0x40); /*0x45cb69*/
  if ( v23 ) /*0x45cb6e*/
  {
    if ( a10[0xC] == 0xFFFFFFFF ) /*0x45cb76*/
      v24 = a10[0x52]; /*0x45cb9f*/
    else
      v24 = a10[0xC]; /*0x45cb78*/
    sub_4531B0(v23, 1, v24 - v35, "Plugin List"); /*0x45cbaf*/
  }
  if ( !v30 ) /*0x45cbb9*/
  {
    ShowUIMessageBox((char *)stru_B38738, 1, a7, a8, a9, (const char *)stru_B38738, 0, 0, EmptyString, 0); /*0x45cbcd*/
    return 0; /*0x45cbcd*/
  }
  if ( v31 /*0x45cc40*/
    && byte_B05BBC
    && sub_578FE0() != 3
    && GetOpenedMenuCode() != 3
    && !*(_BYTE *)(a1 + 0xAB)
    && (g_TESSaveLoadGame->flags |= 0x10000u,
        v27 = sub_579CF0(
                1,
                a9,
                a6,
                a7,
                a8,
                a5,
                a2,
                a3,
                a4,
                (const char *)stru_B386C0,
                1,
                (const char *)MEMORY[0xB38CF8],
                MEMORY[0xB38D00]),
        g_TESSaveLoadGame->flags &= ~0x10000u,
        v27 == 2) )
  {
    return 0; /*0x45cbd5*/
  }
  else
  {
    return 1; /*0x45cc42*/
  }
}
