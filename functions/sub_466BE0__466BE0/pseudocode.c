void __userpurge sub_466BE0(
        NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        int a10)
{
  unsigned int v11; // edi
  TES *v12; // eax
  unsigned int i; // esi
  int currentInteriorCell; // ecx
  int v15; // ebx
  int v16; // edi
  NiPoint3 *p_rot; // esi
  float *v18; // eax
  TESObjectREFR *v19; // eax
  TESObjectREFR *v20; // esi
  float *v21; // eax
  int v22; // ecx
  TESObjectCELL *ParentCell; // [esp-Ch] [ebp-130h]
  int WorldSpace; // [esp-8h] [ebp-12Ch]
  float v25; // [esp+18h] [ebp-10Ch]
  float Str; // [esp+1Ch] [ebp-108h] BYREF

  if ( a10 != 4 )
  {
    if ( a10 != 5 )
      return;
    v11 = sub_43FD20();
    v12 = TES;
    if ( TES->currentInteriorCell )
      v11 = 1;
    for ( i = 0; i < v11; ++i )
    {
      currentInteriorCell = (int)v12->currentInteriorCell;
      if ( !currentInteriorCell )
      {
        currentInteriorCell = (int)v12->exteriorCellBufferArray[i];
        if ( !currentInteriorCell )
          continue;
      }
      sub_4D5A90(currentInteriorCell, a7, a8, a9);
      v12 = TES;
    }
    v15 = TESDataHandler_g_RepairHammer;
    v16 = 5;
    do
    {
      p_rot = &TESDataHandler_g_PlayerRef->super.super.super.super.rot;
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      v18 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
      TESDataHandler_PlaceObjectRef(a7, a8, v15, (int)v18, (int)p_rot, ParentCell, WorldSpace, 0);
      v20 = v19;
      v21 = v19->vtbl->GetPos(v19);
      a9 = v21[2] + dbl_A2FC70;
      v25 = a9;
      TESObjectREFR_SetPosition(v20, *v21, v21[1], v25);
      --v16;
    }
    while ( v16 );
  }
  v22 = dword_B33C00;
  if ( !(dword_B33C00 % 0x32) )
  {
    _sprintf((char *)&Str, "Test All Cells %i.ess", dword_B33C00);
    TESSaveLoadGame_SaveGame_(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0, (char *)&Str, 1);
    v22 = dword_B33C00;
  }
  dword_B33C00 = v22 + 1;
}
