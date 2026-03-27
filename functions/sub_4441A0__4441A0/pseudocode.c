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

  v9 = (TESWorldSpace *)*(this + 0x1D);
  if ( v9 )
  {
    v10 = (TESObjectCELL *)sub_4F1630(v9, st5_0, st6_0, a4, ArgList, a8);
    if ( !v10 )
    {
      v10 = (TESObjectCELL *)sub_447740((_DWORD *)TESDataHandler, ArgList, a8, (int **)*(this + 0x1D), 1);
      sub_4C9F90(v10, 1);
    }
    if ( sub_4821B0((_DWORD *)*(this + 2), a5, a6) )
    {
      if ( v10 )
      {
        if ( TESObjectCELL_IsInterior(v10) )
          sub_43FD70((TES *)this, st5_0, st6_0, a4, v10);
        else
          sub_43FED0(this, st5_0, st6_0, a4, v10);
      }
    }
    else
    {
      refID = v10->members.super.refID;
      YCoordinate = TESObjectCELL_GetYCoordinate(v10);
      XCoordinate = TESObjectCELL_GetXCoordinate(v10);
      _sprintf(v20, "Loading cell...%s (%i, %i) (%08X)", EmptyString, XCoordinate, YCoordinate, refID);
      sub_482170((_DWORD *)*(this + 2), a5, a6, v10);
      sub_482390((_DWORD *)*(this + 2), st5_0, st6_0, a4, *(this + 3), a5, a6);
      v12 = sub_4CE3C0(v10);
      if ( !sub_4C79A0((int)v12, a6, st5_0, st6_0, a4, 1) )
        sub_4C6730((int)v12, 0, 0);
      v13 = sub_4CE3C0(v10);
      sub_4C46B0(v13, v19);
      v18 = v19[0];
      if ( TESObjectCELL_GetWaterHeight(v10) <= v18 )
        v10->members.flags0 &= ~2u;
      else
        v10->members.flags0 |= 2u;
      if ( (v10->members.flags0 & 2) == 0 )
      {
        GridEntry = GetGridEntry((GridCellArray *)*(this + 2), a5, a6);
        sub_499FF0(&GridEntry->info->unk00);
      }
      sub_4C5BA0((int)v12, *((_BYTE *)this + 0x53));
      v15 = (int *)sub_4AF170(v10);
      if ( v15 )
        sub_4E7610(v15);
    }
  }
}
