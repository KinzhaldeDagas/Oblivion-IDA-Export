// positive sp value has been detected, the output may be wrong!
int __usercall MagicCaster_FindTouchTarget_::CalcDistToPlayer__@<eax>(Actor *a1@<ebp>)
{
  Actor *ListHead; // eax
  Actor *v3; // ebx
  TESObjectREFR *vtbl; // esi
  double SurfaceDistance; // st7
  TESObjectREFR *v7; // [esp-28h] [ebp-28h]
  TESObjectREFR *v8; // [esp-18h] [ebp-18h]
  float v9; // [esp-14h] [ebp-14h]
  float v10; // [esp-10h] [ebp-10h]
  float v11; // [esp-Ch] [ebp-Ch] BYREF
  float v12[2]; // [esp-8h] [ebp-8h] BYREF

  v10 = flt_A32048; /*0x699581*/
  v7 = (TESObjectREFR *)reference; /*0x699587*/
  v11 = 0.0; /*0x699589*/
  if ( (double)v12[1] >= TESObjectREFR_GetSurfaceDistance((TESObjectREFR *)LODWORD(v9), v7, 0) ) /*0x6995a4*/
  {
    v12[0] = flt_A32048; /*0x6995ae*/
    if ( (!a1 || Actor_IsFacingReferenceWithinCombatAngle(a1, (TESObjectREFR *)reference, v12)) && v12[0] <= dbl_A3A5B0 ) /*0x6995dc*/
    {
      v10 = v12[0]; /*0x6995e4*/
      v11 = *(float *)&reference; /*0x6995e8*/
    }
  }
  ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x6995f7*/
  v3 = ActorList_ReturnHead((ActorList *)ListHead); /*0x699603*/
  while ( v3 ) /*0x699607*/
  {
    if ( !*(_DWORD *)&v3->members.super.super.super.type && !v3->vtbl ) /*0x699616*/
      break; /*0x699619*/
    vtbl = (TESObjectREFR *)v3->vtbl; /*0x69961f*/
    if ( !v3->vtbl || !vtbl->vtbl->IsActor((TESObjectREFR *)v3->vtbl) ) /*0x69962f*/
      vtbl = 0; /*0x699635*/
    v3 = *(Actor **)&v3->members.super.super.super.type; /*0x699637*/
    if ( vtbl ) /*0x69963e*/
    {
      if ( vtbl != (TESObjectREFR *)LODWORD(v9) && !vtbl->vtbl->IsDead(vtbl, 0) ) /*0x69965a*/
      {
        if ( vtbl->vtbl->GetNiNode(vtbl) ) /*0x69966a*/
        {
          SurfaceDistance = TESObjectREFR_GetSurfaceDistance(v8, vtbl, 0); /*0x699678*/
          if ( v12[0] >= SurfaceDistance ) /*0x69968b*/
          {
            v11 = flt_A32048; /*0x699695*/
            if ( (!a1 || Actor_IsFacingReferenceWithinCombatAngle(a1, vtbl, &v11)) && v9 >= (double)v11 ) /*0x6996bd*/
            {
              v9 = v11; /*0x6996bf*/
              v10 = *(float *)&vtbl; /*0x6996c3*/
            }
          }
        }
      }
    }
  }
  if ( v10 == 0.0 ) /*0x699743*/
    return 0; /*0x69974c*/
  else
    return LODWORD(v10) + 0x68; /*0x699745*/
}
