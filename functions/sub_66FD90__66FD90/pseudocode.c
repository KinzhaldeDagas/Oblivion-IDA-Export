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
        float a12)
{
  TESForm *v13; // esi
  char *v14; // edi
  int *v15; // ecx
  TESWorldSpace *v16; // eax
  TESWorldSpace *WorldSpace; // edi
  int XCoordinate; // eax
  int v19; // eax
  float v20; // ecx
  double v21; // st7
  TESObjectREFRVtbl *vtbl; // edx
  int YCoordinate; // [esp-4h] [ebp-28h]
  void (__thiscall *a2[2])(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool); // [esp+Ch] [ebp-18h] BYREF
  float v25; // [esp+14h] [ebp-10h]
  int v26; // [esp+18h] [ebp-Ch] BYREF
  int v27; // [esp+1Ch] [ebp-8h]
  int v28; // [esp+20h] [ebp-4h]

  sub_579870(a6, a7);
  v13 = (TESForm *)LODWORD(a12);
  v14 = ArgList;
  if ( a12 == 0.0 )
    v13 = sub_4476B0((_DWORD *)TESDataHandler, ArgList);
  if ( dword_B35B90 )
    sub_4BE5A0((_DWORD *)dword_B35B90);
  if ( dword_B35B8C )
    sub_4BD980((_DWORD *)dword_B35B8C);
  if ( v13 )
  {
    if ( !TESObjectCELL_IsInterior((TESObjectCELL *)v13) )
    {
      WorldSpace = TESObjectCELL_GetWorldSpace((TESObjectCELL *)v13);
      if ( WorldSpace )
      {
        YCoordinate = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v13);
        XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)v13);
        sub_4F1630(WorldSpace, a6, a7, a8, XCoordinate, YCoordinate);
      }
    }
  }
  else
  {
    v15 = (int *)TESDataHandler;
    ArgList = 0;
    a12 = 0.0;
    v16 = (TESWorldSpace *)sub_4478B0(v15, bp0, 0, v14, &ArgList, (int *)&a12);
    if ( !v16 )
      return;
    v13 = sub_4F1630(v16, a6, a7, a8, (int)ArgList, SLODWORD(a12));
  }
  if ( v13 )
  {
    v19 = *((_DWORD *)&Vector3_InitValue_ + 1);
    v20 = dword_B3F9B0;
    v26 = LODWORD(Vector3_InitValue_);
    v27 = v19;
    v28 = LODWORD(v20);
    sub_4D5D70((TESObjectCELL *)v13, a6, a7, (float *)a2, &v26);
    sub_66EAF0(
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
      v26,
      v27,
      v28,
      (TESObjectCELL *)v13,
      1);
    if ( !TESObjectCELL_IsInterior((TESObjectCELL *)v13) )
    {
      GetTerrainHeight(TES, (float *)a2, &a12);
      v21 = 0.0;
      if ( a12 >= 0.0 )
        v21 = a12;
      vtbl = a1->vtbl;
      v25 = v21;
      ((void (__thiscall *)(TESObjectREFR *, void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool)))vtbl[1].super.Unk_09)(
        a1,
        a2);
    }
  }
}
