char __usercall sub_515EF0@<al>(
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
  TESForm *v13; // eax
  _BYTE *v14; // eax
  TESWorldSpace *LinkedDoorWorldspace; // edi
  TeleportData *TeleportData; // eax
  TESObjectREFR **p_linkedDoor; // esi
  TESObjectCELL *v18; // eax
  char v19; // bl
  char v20; // al
  int v21; // esi
  char v22; // [esp+17h] [ebp-21h]
  UInt16 v23[2]; // [esp+18h] [ebp-20h] BYREF
  unsigned int v24; // [esp+1Ch] [ebp-1Ch] BYREF
  unsigned int v25; // [esp+34h] [ebp-4h]

  v11 = 0; /*0x515f1b*/
  if ( a4 ) /*0x515f1f*/
  {
    *(_DWORD *)v23 = 0; /*0x515f49*/
    if ( !Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v23) ) /*0x515f4d*/
      return 0; /*0x515f6e*/
    v13 = a4->vtbl->GetBaseForm(a4); /*0x515f85*/
    v14 = OblivionDynamicCast( /*0x515f88*/
            v13,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESObjectDOOR `RTTI Type Descriptor',
            0);
    if ( v14 ) /*0x515f92*/
    {
      if ( sub_4B6CF0(v14) ) /*0x515f9a*/
      {
        LinkedDoorWorldspace = 0; /*0x515fa9*/
        TeleportData = TESObjectREFR_GetTeleportData(a4); /*0x515fab*/
        p_linkedDoor = &TeleportData->linkedDoor; /*0x515fb0*/
        if ( TeleportData ) /*0x515fb4*/
        {
          LinkedDoorWorldspace = TeleportData_GetLinkedDoorWorldspace(&TeleportData->linkedDoor); /*0x515fbd*/
          if ( !LinkedDoorWorldspace ) /*0x515fc1*/
          {
            if ( sub_42B460(p_linkedDoor) ) /*0x515fc5*/
            {
              v18 = sub_42B460(p_linkedDoor); /*0x515fd0*/
              if ( TESObjectCELL_IsInterior(v18) ) /*0x515fd7*/
                v11 = sub_42B460(p_linkedDoor); /*0x515fe7*/
            }
          }
        }
        v19 = 0; /*0x515fef*/
        sub_4B8420(&v24, 0x25u); /*0x515ff1*/
        v25 = 0; /*0x515ff8*/
        if ( LinkedDoorWorldspace ) /*0x516000*/
        {
          v20 = sub_4F2770(LinkedDoorWorldspace); /*0x516004*/
        }
        else
        {
          if ( !v11 ) /*0x51600d*/
            goto LABEL_16; /*0x51600d*/
          v20 = sub_4CC070(v11, &v24); /*0x516016*/
        }
        v19 = v20; /*0x51601b*/
LABEL_16:
        NiTMap_Clear(&v24); /*0x51601d*/
        if ( !*(_DWORD *)v23 ) /*0x51602b*/
        {
          if ( v19 ) /*0x51602f*/
            reference->vtbl->super.super.super.Unk_46((TESObjectREFR *)reference); /*0x51603f*/
          v21 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x516050*/
          v22 = *(_BYTE *)(v21 + 0x185); /*0x516059*/
          *(_BYTE *)(v21 + 0x185) = 0; /*0x51605d*/
          if ( LinkedDoorWorldspace ) /*0x516064*/
          {
            sub_4F2630((int)LinkedDoorWorldspace, st5_0, a2, st7_0); /*0x516068*/
          }
          else if ( v11 ) /*0x516071*/
          {
            sub_4CBE50(v11, st5_0, a2, st7_0, &v24); /*0x51607a*/
          }
          NiTMap_Clear(&v24); /*0x516083*/
          *(_BYTE *)(v21 + 0x185) = v22; /*0x51608c*/
        }
        sub_4B7DB0(st5_0, a2, st7_0, (char *)a4, 0); /*0x516099*/
        v25 = 0xFFFFFFFF; /*0x5160a5*/
        NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(&v24); /*0x5160ad*/
        if ( v19 ) /*0x5160b4*/
          return 0; /*0x5160b4*/
      }
    }
  }
  return 1; /*0x515f5b*/
}
