char __usercall sub_515D20@<al>(
        double st5_0@<st2>,
        double a2@<st1>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *a5,
        TESObjectREFR *a4,
        TESObjectREFR *a7,
        Script *a8,
        ScriptEventList *l,
        int a10,
        UInt32 *a3)
{
  TESObjectCELL *v11; // ebp
  TESObjectREFR *v12; // eax
  char *v13; // ebx
  TESWorldSpace *LinkedDoorWorldspace; // edi
  TeleportData *TeleportData; // eax
  TESObjectREFR **p_linkedDoor; // esi
  TESObjectCELL *v17; // eax
  int v18; // esi
  char v19; // bl
  UInt16 v21[2]; // [esp+14h] [ebp-24h] BYREF
  char *v22; // [esp+18h] [ebp-20h]
  unsigned int v23; // [esp+1Ch] [ebp-1Ch] BYREF
  unsigned int v24; // [esp+34h] [ebp-4h]

  v11 = 0; /*0x515d6e*/
  *(_DWORD *)v21 = 0; /*0x515d71*/
  if ( !Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v21) ) /*0x515d7f*/
    return 0; /*0x515d7f*/
  if ( !reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0) ) /*0x515d94*/
  {
    v12 = (TESObjectREFR *)sub_4D8E40(reference); /*0x515da4*/
    v13 = (char *)v12; /*0x515da9*/
    v22 = (char *)v12; /*0x515dad*/
    if ( v12 ) /*0x515db1*/
    {
      LinkedDoorWorldspace = 0; /*0x515db9*/
      TeleportData = TESObjectREFR_GetTeleportData(v12); /*0x515dbb*/
      p_linkedDoor = &TeleportData->linkedDoor; /*0x515dc0*/
      if ( TeleportData ) /*0x515dc4*/
      {
        LinkedDoorWorldspace = TeleportData_GetLinkedDoorWorldspace(&TeleportData->linkedDoor); /*0x515dcd*/
        if ( !LinkedDoorWorldspace ) /*0x515dd1*/
        {
          if ( sub_42B460(p_linkedDoor) ) /*0x515dd5*/
          {
            v17 = sub_42B460(p_linkedDoor); /*0x515de0*/
            if ( TESObjectCELL_IsInterior(v17) ) /*0x515de7*/
              v11 = sub_42B460(p_linkedDoor); /*0x515df7*/
          }
        }
      }
      sub_4B8420(&v23, 0x25u); /*0x515dff*/
      v24 = 0; /*0x515e06*/
      if ( LinkedDoorWorldspace ) /*0x515e0e*/
      {
        sub_4F2770(LinkedDoorWorldspace); /*0x515e12*/
      }
      else if ( v11 ) /*0x515e1b*/
      {
        sub_4CC070(v11, &v23); /*0x515e24*/
      }
      NiTMap_Clear(&v23); /*0x515e2d*/
      reference->vtbl->super.super.super.Unk_46((TESObjectREFR *)reference); /*0x515e40*/
      if ( !*(_DWORD *)v21 ) /*0x515e47*/
      {
        v18 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x515e58*/
        v19 = *(_BYTE *)(v18 + 0x185); /*0x515e5b*/
        *(_BYTE *)(v18 + 0x185) = 0; /*0x515e61*/
        if ( LinkedDoorWorldspace ) /*0x515e68*/
        {
          sub_4F2630((int)LinkedDoorWorldspace, st5_0, a2, st7_0); /*0x515e6c*/
        }
        else if ( v11 ) /*0x515e75*/
        {
          sub_4CBE50(v11, st5_0, a2, st7_0, &v23); /*0x515e7e*/
        }
        NiTMap_Clear(&v23); /*0x515e87*/
        *(_BYTE *)(v18 + 0x185) = v19; /*0x515e8c*/
        v13 = v22; /*0x515e92*/
      }
      sub_4B7DB0(st5_0, a2, st7_0, v13, 0); /*0x515e99*/
      ++reference->miscStats[0xD]; /*0x515ea3*/
      v24 = 0xFFFFFFFF; /*0x515eb1*/
      NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(&v23); /*0x515eb9*/
      return 0; /*0x515ed3*/
    }
  }
  return 1; /*0x515ec0*/
}
