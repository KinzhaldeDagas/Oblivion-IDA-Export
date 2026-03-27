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
  char *name; // edi
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

  v11 = (_DWORD *)TESDataHandler;
  v34 = a1;
  v30 = 0;
  v31 = 0;
  v29 = sub_446B10(v11);
  v12 = a10[0xC];
  if ( v12 == 0xFFFFFFFF )
    v12 = a10[0x52];
  v13 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a10[1];
  v14 = (_BYTE *)(a1 + 0x48);
  v35 = v12;
  v33 = 1;
  v13(a10, a1 + 0x48, 1, &v33, 1);
  if ( *(_DWORD *)(a1 + 0x4C) )
    FormHeapFree(*(_DWORD *)(a1 + 0x4C));
  v15 = FormHeapAlloc((unsigned __int8)*v14);
  v16 = *v14 == 0;
  *(_DWORD *)(a1 + 0x4C) = v15;
  v28 = 0;
  if ( v16 )
    goto LABEL_17;
  do
  {
    v17 = (void (__cdecl *)(_DWORD *, unsigned __int8 *, int, int *, int))a10[1];
    v33 = 1;
    v17(a10, &v32, 1, &v33, 1);
    a9 = _memset(ArgList, 0, sizeof(ArgList));
    v18 = (void (__cdecl *)(_DWORD *, char *, _DWORD, int *, int))a10[1];
    v33 = 1;
    v18(a10, ArgList, v32, &v33, 1);
    v19 = 0;
    if ( !v29 )
    {
LABEL_15:
      v31 = 1;
      *(_BYTE *)(v28 + *(_DWORD *)(a1 + 0x4C)) = 0xFF;
      PrintError("Cannot find file %s referenced in the save game.  Errors may result.", ArgList);
      goto LABEL_16;
    }
    while ( 1 )
    {
      v20 = (Data *)sub_446B20((_DWORD *)TESDataHandler, v19);
      name = v20->name;
      if ( !_strcmp(ArgList, v20->name) )
        break;
      if ( !_strcmp(ArgList, "Oblivion.esm") )
      {
        v22 = _strcmp("OblivionSE.esm", name);
      }
      else
      {
        if ( _strcmp(ArgList, "OblivionSE.esm") )
          goto LABEL_13;
        v22 = _strcmp("Oblivion.esm", name);
      }
      if ( !v22 )
        break;
LABEL_13:
      if ( ++v19 >= v29 )
      {
        a1 = v34;
        goto LABEL_15;
      }
    }
    if ( TESFile_GetIsMaster(v20) )
      v30 = 1;
    v25 = v34;
    *(_BYTE *)(v28 + *(_DWORD *)(v34 + 0x4C)) = v19;
    a1 = v25;
LABEL_16:
    ++v28;
  }
  while ( v28 < *(_BYTE *)(a1 + 0x48) );
LABEL_17:
  v23 = *(_DWORD **)(a1 + 0x40);
  if ( v23 )
  {
    if ( a10[0xC] == 0xFFFFFFFF )
      v24 = a10[0x52];
    else
      v24 = a10[0xC];
    sub_4531B0(v23, 1, v24 - v35, "Plugin List");
  }
  if ( !v30 )
  {
    ShowUIMessageBox(dword_B38738, 1, a7, a8, a9, (const char *)dword_B38738, 0, 0, EmptyString, 0);
    return 0;
  }
  if ( v31
    && byte_B05BBC
    && sub_578FE0() != 3
    && GetOpenedMenuCode(1, a7, a8, a9) != 3
    && !*(_BYTE *)(a1 + 0xAB)
    && (SaveLoad_CurrentSavegame->flags |= 0x10000u,
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
                (const char *)dword_B386C0,
                1,
                (const char *)MessageButtonTextYes,
                MessageButtonTextNo),
        SaveLoad_CurrentSavegame->flags &= ~0x10000u,
        v27 == 2) )
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
