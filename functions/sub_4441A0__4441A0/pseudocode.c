void __userpurge sub_4441A0(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        int a5,
        int a6,
        int ArgList,
        int a8)
{
  TESWorldSpace *v9; // ecx
  TESObjectCELL *v10; // esi
  int XCoordinate; // eax
  TESObjectLAND *v12; // ebx
  TESObjectLAND *v13; // eax
  GridEntry *GridEntry; // eax
  int *v15; // eax
  int YCoordinate; // [esp-14h] [ebp-130h]
  UInt32 refID; // [esp-10h] [ebp-12Ch]
  double v18; // [esp+4h] [ebp-118h]
  float v19[2]; // [esp+Ch] [ebp-110h] BYREF
  char v20[260]; // [esp+14h] [ebp-108h] BYREF

  v9 = (TESWorldSpace *)*(this + 0x1D); /*0x4441b7*/
  if ( v9 ) /*0x4441bc*/
  {
    v10 = (TESObjectCELL *)TESWorldSpace_LoadExteriorCellAtCoord(v9, st5_0, st6_0, a4, ArgList, a8); /*0x4441da*/
    if ( !v10 ) /*0x4441de*/
    {
      v10 = (TESObjectCELL *)sub_447740( /*0x4441f3*/
                               (TESWorldSpace **)g_TESDataHandler,
                               ArgList,
                               a8,
                               (TESWorldSpace *)*(this + 0x1D),
                               1);
      sub_4C9F90(v10, 1); /*0x4441f9*/
    }
    if ( sub_4821B0((_DWORD *)*(this + 2), a5, a6) ) /*0x444211*/
    {
      if ( v10 ) /*0x44421c*/
      {
        if ( TESObjectCELL_IsInterior(v10) ) /*0x444224*/
          sub_43FD70((TES *)this, st5_0, st6_0, a4, v10); /*0x444230*/
        else
          sub_43FED0(this, st5_0, st6_0, a4, v10); /*0x44423a*/
      }
    }
    else
    {
      refID = v10->members.super.refID; /*0x444247*/
      YCoordinate = TESObjectCELL_GetYCoordinate(v10); /*0x44424f*/
      XCoordinate = TESObjectCELL_GetXCoordinate(v10); /*0x444252*/
      _sprintf(v20, "Loading cell...%s (%i, %i) (%08X)", EmptyString, XCoordinate, YCoordinate, refID); /*0x444267*/
      sub_482170((_DWORD *)*(this + 2), a5, a6, v10); /*0x444275*/
      sub_482390((_DWORD *)*(this + 2), st5_0, st6_0, a4, *(this + 3), a5, a6); /*0x444283*/
      v12 = sub_4CE3C0(v10); /*0x44428f*/
      if ( !sub_4C79A0((int)v12, 1) ) /*0x444295*/
        sub_4C6730((int)v12, 0, 0); /*0x4442a4*/
      v13 = sub_4CE3C0(v10); /*0x4442b0*/
      sub_4C46B0(v13, v19); /*0x4442b7*/
      v18 = v19[0]; /*0x4442c2*/
      if ( TESObjectCELL_GetWaterHeight((ExtraDataList *)v10) <= v18 ) /*0x4442d4*/
        v10->members.flags0 &= ~2u; /*0x4442dc*/
      else
        v10->members.flags0 |= 2u; /*0x4442d6*/
      if ( (v10->members.flags0 & 2) == 0 ) /*0x4442e8*/
      {
        GridEntry = GetGridEntry((GridCellArray *)*(this + 2), a5, a6); /*0x4442f6*/
        sub_499FF0(&GridEntry->info->unk00); /*0x4442fe*/
      }
      sub_4C5BA0((int)v12, *((_BYTE *)this + 0x53)); /*0x44430a*/
      v15 = (int *)sub_4AF170(v10); /*0x444311*/
      if ( v15 ) /*0x444318*/
        TESPathGrid_LoadOrResolveGraph(v15);    // Verified exterior cell-loading path: after obtaining the cell's TESPathGrid, invokes TESPathGrid_LoadOrResolveGraph to load serialized chunks if absent, resolve deferred cross-cell links, and conditionally rebuild graph rendering. /*0x44431c*/
    }
  }
}
