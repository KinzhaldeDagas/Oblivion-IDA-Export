bool __thiscall sub_65FDA0(int *this)
{
  int *v1; // edi
  TESChildCELL *v2; // ebx
  TESObjectREFR *v3; // esi
  const NiPoint3 *v4; // eax
  char v5; // al
  TeleportData *TeleportData; // eax
  TESObjectREFR *LinkedDoor; // eax
  TESObjectCELL *v8; // eax
  TESObjectREFR *v9; // eax
  bool result; // al
  TESObjectCELL *DwordAtOffset40; // [esp-8h] [ebp-40h]
  TESWorldSpace *WorldSpace; // [esp-4h] [ebp-3Ch]
  float v13; // [esp+10h] [ebp-28h]
  float v14; // [esp+14h] [ebp-24h]
  TravelPath v15; // [esp+18h] [ebp-20h] BYREF
  unsigned int v16; // [esp+34h] [ebp-4h]

  v1 = this + 0x1C1; /*0x65fdcc*/
  v2 = 0; /*0x65fdd2*/
  v13 = flt_A32048; /*0x65fdd4*/
  if ( this != (int *)0xFFFFF8FC ) /*0x65fdda*/
  {
    do /*0x65fe97*/
    {
      if ( !v1[1] && !*v1 ) /*0x65fde6*/
        break; /*0x65fde9*/
      v3 = (TESObjectREFR *)*v1; /*0x65fdef*/
      if ( (*(_DWORD *)(*v1 + 8) & 0x800) == 0 && !sub_4FA560(*v1) ) /*0x65fe00*/
      {
        PathLow_ctor(&v15); /*0x65fe14*/
        v16 = 0; /*0x65fe1b*/
        WorldSpace = TESObjectREFR_GetWorldSpace(v3); /*0x65fe28*/
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v3); /*0x65fe32*/
        v4 = (const NiPoint3 *)v3->vtbl->GetPos(v3); /*0x65fe3b*/
        TravelPath_BuildToDestination(&v15, (TESObjectREFR *)reference, v4, DwordAtOffset40, WorldSpace); /*0x65fe49*/
        if ( v5 ) /*0x65fe50*/
        {
          v14 = TravelPath_ComputeDistance(&v15, (TESObjectREFR *)reference); /*0x65fe62*/
          if ( v13 > (double)v14 ) /*0x65fe75*/
          {
            v13 = v14; /*0x65fe77*/
            v2 = (TESChildCELL *)v3; /*0x65fe7b*/
          }
        }
        v16 = 0xFFFFFFFF; /*0x65fe85*/
        PathLow_dtor(&v15); /*0x65fe8d*/
      }
      v1 = (int *)v1[1]; /*0x65fe92*/
    }
    while ( v1 ); /*0x65fe97*/
  }
  MEMORY[0xB3BAD0] = v2; /*0x65fe9f*/
  result = 0; /*0x65fedd*/
  if ( v2 ) /*0x65fea5*/
  {
    TeleportData = TESObjectREFR_GetTeleportData((TESObjectREFR *)v2); /*0x65fea9*/
    LinkedDoor = TeleportData_GetLinkedDoor(TeleportData); /*0x65feb0*/
    if ( LinkedDoor ) /*0x65feb7*/
    {
      v8 = (TESObjectCELL *)Shared_GetDwordAtOffset40(LinkedDoor); /*0x65febb*/
      if ( v8 ) /*0x65fec2*/
      {
        v9 = sub_4CBA80(v8, (TESForm *)MEMORY[0xB33AAC], 1); /*0x65fecf*/
        MEMORY[0xB3BAD4] = (int)v9; /*0x65fed6*/
        if ( v9 ) /*0x65fedb*/
          return 1; /*0x65fea5*/
      }
    }
  }
  return result; /*0x65fedf*/
}
