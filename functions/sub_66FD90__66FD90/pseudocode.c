void __userpurge sub_66FD90(
        TESObjectREFR *a1@<ecx>,
        char *bp0@<ebp>,
        double a3@<st7>,
        double a4@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>,
        double a8@<st0>,
        double a9@<st6>,
        double a10@<st5>,
        char *ArgList,
        int a12)
{
  TESForm *ExteriorCellAtCoord; // esi
  char *v14; // edi
  int *v15; // ecx
  TESWorldSpace *v16; // eax
  TESWorldSpace *WorldSpace; // edi
  int XCoordinate; // eax
  float y; // eax
  float z; // ecx
  double v21; // st7
  TESObjectREFRVtbl *vtbl; // edx
  int YCoordinate; // [esp-4h] [ebp-28h]
  void (__thiscall *a2[2])(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool); // [esp+Ch] [ebp-18h] BYREF
  float v25; // [esp+14h] [ebp-10h]
  int x_low; // [esp+18h] [ebp-Ch] BYREF
  int v27; // [esp+1Ch] [ebp-8h]
  int v28; // [esp+20h] [ebp-4h]

  sub_579870(a7); /*0x66fd98*/
  ExteriorCellAtCoord = (TESForm *)a12; /*0x66fd9d*/
  v14 = ArgList; /*0x66fda3*/
  if ( *(float *)&a12 == 0.0 ) /*0x66fda7*/
    ExteriorCellAtCoord = sub_4476B0(g_TESDataHandler, ArgList); /*0x66fdb5*/
  if ( unk_B35B90 ) /*0x66fdb7*/
    sub_4BE5A0((_DWORD *)unk_B35B90); /*0x66fdc1*/
  if ( g_DistantLODLoaderTasksByCell ) /*0x66fdc6*/
    sub_4BD980(g_DistantLODLoaderTasksByCell); /*0x66fdd0*/
  if ( ExteriorCellAtCoord ) /*0x66fdd7*/
  {
    if ( !TESObjectCELL_IsInterior((TESObjectCELL *)ExteriorCellAtCoord) ) /*0x66fe16*/
    {
      WorldSpace = TESObjectCELL_GetWorldSpace((TESObjectCELL *)ExteriorCellAtCoord); /*0x66fe26*/
      if ( WorldSpace ) /*0x66fe2a*/
      {
        YCoordinate = TESObjectCELL_GetYCoordinate((TESObjectCELL *)ExteriorCellAtCoord); /*0x66fe33*/
        XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)ExteriorCellAtCoord); /*0x66fe36*/
        TESWorldSpace_LoadExteriorCellAtCoord(WorldSpace, a6, a7, a8, XCoordinate, YCoordinate); /*0x66fe3e*/
      }
    }
  }
  else
  {
    v15 = (int *)g_TESDataHandler; /*0x66fde3*/
    ArgList = 0; /*0x66fdea*/
    *(float *)&a12 = 0.0; /*0x66fdee*/
    v16 = (TESWorldSpace *)sub_4478B0(v15, bp0, 0, v14, &ArgList, &a12); /*0x66fdf2*/
    if ( !v16 ) /*0x66fdf9*/
      return; /*0x66fdf9*/
    ExteriorCellAtCoord = TESWorldSpace_LoadExteriorCellAtCoord(v16, a6, a7, a8, (int)ArgList, a12); /*0x66fe10*/
  }
  if ( ExteriorCellAtCoord ) /*0x66fe45*/
  {
    y = g_zeroNiPoint3.y; /*0x66fe51*/
    z = g_zeroNiPoint3.z; /*0x66fe56*/
    x_low = LODWORD(g_zeroNiPoint3.x); /*0x66fe5c*/
    v27 = LODWORD(y); /*0x66fe64*/
    v28 = LODWORD(z); /*0x66fe6d*/
    sub_4D5D70((TESObjectCELL *)ExteriorCellAtCoord, (float *)a2, &x_low); /*0x66fe74*/
    PlayerCharacter_ChangeCellAndPosition( /*0x66feb0*/
      a1,
      a8,
      a5,
      a6,
      a7,
      a3,
      a4,
      a9,
      a10,
      a2[0],
      (NiAVObject *(__thiscall *)(NiAVObject *, const char *))a2[1],
      (void *(__thiscall *)(NiAVObject *))LODWORD(v25),
      x_low,
      v27,
      v28,
      (TESObjectCELL *)ExteriorCellAtCoord,
      1);
    if ( !TESObjectCELL_IsInterior((TESObjectCELL *)ExteriorCellAtCoord) ) /*0x66feb7*/
    {
      GetTerrainHeight(MEMORY[0xB333A0], (float *)a2, (float *)&a12); /*0x66fed0*/
      v21 = 0.0; /*0x66fed5*/
      if ( *(float *)&a12 >= 0.0 ) /*0x66fee2*/
        v21 = *(float *)&a12; /*0x66fee4*/
      vtbl = a1->vtbl; /*0x66feea*/
      v25 = v21; /*0x66feec*/
      ((void (__thiscall *)(TESObjectREFR *, void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool)))vtbl[1].super.Unk_09)( /*0x66fefd*/
        a1,
        a2);
    }
  }
}
