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
  TESObjectCELL *currentInteriorCell; // ecx
  TESForm *v15; // ebx
  int v16; // edi
  NiPoint3 *p_rot; // esi
  float *v18; // eax
  TESObjectREFR *v19; // eax
  TESObjectREFR *v20; // esi
  float *v21; // eax
  int v22; // ecx
  TESObjectCELL *DwordAtOffset40; // [esp-Ch] [ebp-130h]
  TESWorldSpace *WorldSpace; // [esp-8h] [ebp-12Ch]
  float v25; // [esp+18h] [ebp-10Ch]
  float Str; // [esp+1Ch] [ebp-108h] BYREF

  if ( a10 != 4 ) /*0x466c04*/
  {
    if ( a10 != 5 ) /*0x466c0d*/
      return; /*0x466c0d*/
    v11 = sub_43FD20(); /*0x466c1e*/
    v12 = MEMORY[0xB333A0]; /*0x466c20*/
    if ( MEMORY[0xB333A0]->currentInteriorCell ) /*0x466c25*/
      v11 = 1; /*0x466c2b*/
    for ( i = 0; i < v11; ++i ) /*0x466c34*/
    {
      currentInteriorCell = v12->currentInteriorCell; /*0x466c36*/
      if ( !currentInteriorCell ) /*0x466c3b*/
      {
        currentInteriorCell = v12->exteriorCellBufferArray[i]; /*0x466c40*/
        if ( !currentInteriorCell ) /*0x466c45*/
          continue; /*0x466c45*/
      }
      sub_4D5A90(currentInteriorCell, a7, a8, a9); /*0x466c47*/
      v12 = MEMORY[0xB333A0]; /*0x466c4c*/
    }
    v15 = (TESForm *)MEMORY[0xB35ED0]; /*0x466c58*/
    v16 = 5; /*0x466c5e*/
    do /*0x466ce1*/
    {
      p_rot = &reference->super.super.super.super.rot; /*0x466c6b*/
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)reference); /*0x466c79*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x466c87*/
      v18 = reference->vtbl->super.super.super.GetPos(reference); /*0x466c8f*/
      TESDataHandler_PlaceObjectRef(a7, a8, a9, v15, (int)v18, (int)p_rot, DwordAtOffset40, WorldSpace, 0); /*0x466c99*/
      v20 = v19; /*0x466c9e*/
      v21 = v19->vtbl->GetPos(v19); /*0x466caa*/
      a9 = v21[2] + dbl_A2FC70; /*0x466cbc*/
      v25 = a9; /*0x466cc9*/
      TESObjectREFR_SetPosition(v20, *v21, v21[1], v25); /*0x466cd9*/
      --v16; /*0x466cde*/
    }
    while ( v16 ); /*0x466ce1*/
  }
  v22 = unk_B33C00; /*0x466ce3*/
  if ( !(unk_B33C00 % 0x32) ) /*0x466cff*/
  {
    _sprintf((char *)&Str, "Test All Cells %i.ess", unk_B33C00); /*0x466d0e*/
    TESSaveLoadGame_SaveGame_(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0, (char *)&Str, 1); /*0x466d21*/
    v22 = unk_B33C00; /*0x466d26*/
  }
  unk_B33C00 = v22 + 1; /*0x466d2f*/
}
