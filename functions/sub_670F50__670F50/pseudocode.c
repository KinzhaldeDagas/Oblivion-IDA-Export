BSExtraData *__usercall PlayerCharacter_MoveToExtraTeleportTarget@<eax>(
        PlayerCharacter *a1@<ecx>,
        double a2@<st7>,
        double a3@<st4>,
        double a4@<st3>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st6>,
        double a8@<st5>)
{
  BSExtraData *result; // eax
  BSExtraData *v10; // esi
  NiPoint3 *LinkedTeleportMarkerPosition; // eax
  void (__thiscall *x_low)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool); // ebx
  float y; // ebp
  float *v14; // eax
  double v15; // st7
  TESWorldSpace *WorldSpace; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v18; // esi
  float v19; // [esp+10h] [ebp-2Ch]
  float v20; // [esp+14h] [ebp-28h]
  int v21; // [esp+18h] [ebp-24h]
  int v22; // [esp+1Ch] [ebp-20h]
  int v23; // [esp+20h] [ebp-1Ch]
  float x; // [esp+24h] [ebp-18h]
  float z; // [esp+2Ch] [ebp-10h]
  float v26[3]; // [esp+30h] [ebp-Ch] BYREF

  result = ExtraDataList_GetOblivionEntry(&a1->super.super.super.super.baseExtraList); /*0x670f5c*/
  v10 = result; /*0x670f61*/
  if ( result ) /*0x670f65*/
  {
    if ( result[2].vtbl ) /*0x670f6b*/
    {
      sub_675D50((ActorProcessManager *)&qword_B3BB2C[0x75], a1, 0); /*0x670f7d*/
      LinkedTeleportMarkerPosition = TESObjectREFR_GetLinkedTeleportMarkerPosition((TESObjectREFR *)v10[2].vtbl); /*0x670f85*/
      x_low = (void (__thiscall *)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))LODWORD(LinkedTeleportMarkerPosition->x); /*0x670f8a*/
      y = LinkedTeleportMarkerPosition->y; /*0x670f8c*/
      z = LinkedTeleportMarkerPosition->z; /*0x670f97*/
      x = LinkedTeleportMarkerPosition->x; /*0x670fa1*/
      v14 = (float *)(*((int (__thiscall **)(BSExtraDataVtbl *))v10[2].vtbl->Destructor + 0x5D))(v10[2].vtbl); /*0x670fa9*/
      v19 = v14[1] - y; /*0x670fb7*/
      v20 = v14[2] - z; /*0x670fc2*/
      v26[0] = *v14 - x; /*0x670fcc*/
      v26[1] = v19; /*0x670fd4*/
      v26[2] = v20; /*0x670fdc*/
      *(float *)&v21 = 0.0; /*0x670fe2*/
      *(float *)&v22 = 0.0; /*0x670fe6*/
      v15 = Vector3_CalculateHeadingRadiansXY(v26); /*0x670fea*/
      *(float *)&v23 = v15; /*0x670fef*/
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)v10[2].vtbl); /*0x670ff9*/
      if ( WorldSpace ) /*0x671000*/
      {
        PlayerCharacter_RelocateToFastTravelTarget( /*0x671031*/
          a3,
          a4,
          a5,
          a6,
          a7,
          v15,
          a8,
          x_low,
          (NiAVObject *(__thiscall *)(NiAVObject *, const char *))LODWORD(y),
          (void *(__thiscall *)(NiAVObject *))LODWORD(z),
          v21,
          v22,
          v23,
          WorldSpace,
          0);                                   // Direct relocation helper call through PlayerCharacter vtable method using an extra-data target reference. This bypasses PlayerCharacter_FastTravelCore/Sky fast-travel flag path.
        return (BSExtraData *)sub_4D8E60((int *)a1, 0); /*0x67103a*/
      }
      else
      {
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v10[2].vtbl); /*0x67104a*/
        v18 = DwordAtOffset40; /*0x67104f*/
        if ( DwordAtOffset40 ) /*0x671053*/
        {
          if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x671057*/
            PlayerCharacter_ChangeCellAndPosition( /*0x67108f*/
              (TESObjectREFR *)a1,
              v15,
              a4,
              a5,
              a6,
              a2,
              a3,
              a7,
              a8,
              x_low,
              (NiAVObject *(__thiscall *)(NiAVObject *, const char *))LODWORD(y),
              (void *(__thiscall *)(NiAVObject *))LODWORD(z),
              v21,
              v22,
              v23,
              v18,
              0);
        }
        return (BSExtraData *)sub_4D8E60((int *)a1, 0); /*0x671098*/
      }
    }
  }
  return result; /*0x67103f*/
}
