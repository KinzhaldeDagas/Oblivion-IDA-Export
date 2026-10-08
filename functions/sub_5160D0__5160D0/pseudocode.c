char __usercall sub_5160D0@<al>(
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

  v11 = 0; /*0x5160fb*/
  if ( a4 ) /*0x5160ff*/
  {
    *(_DWORD *)v23 = 0; /*0x516129*/
    if ( !Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v23) ) /*0x51612d*/
      return 0; /*0x51614e*/
    v13 = a4->vtbl->GetBaseForm(a4); /*0x516165*/
    v14 = OblivionDynamicCast( /*0x516168*/
            v13,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESObjectDOOR `RTTI Type Descriptor',
            0);
    if ( v14 ) /*0x516172*/
    {
      if ( sub_4B6CF0(v14) ) /*0x51617a*/
      {
        LinkedDoorWorldspace = 0; /*0x516189*/
        TeleportData = TESObjectREFR_GetTeleportData(a4); /*0x51618b*/
        p_linkedDoor = &TeleportData->linkedDoor; /*0x516190*/
        if ( TeleportData ) /*0x516194*/
        {
          LinkedDoorWorldspace = TeleportData_GetLinkedDoorWorldspace(&TeleportData->linkedDoor); /*0x51619d*/
          if ( !LinkedDoorWorldspace ) /*0x5161a1*/
          {
            if ( sub_42B460(p_linkedDoor) ) /*0x5161a5*/
            {
              v18 = sub_42B460(p_linkedDoor); /*0x5161b0*/
              if ( TESObjectCELL_IsInterior(v18) ) /*0x5161b7*/
                v11 = sub_42B460(p_linkedDoor); /*0x5161c7*/
            }
          }
        }
        v19 = 0; /*0x5161cf*/
        sub_4B8420(&v24, 0x25u); /*0x5161d1*/
        v25 = 0; /*0x5161d8*/
        if ( LinkedDoorWorldspace ) /*0x5161e0*/
        {
          v20 = sub_4F2770(LinkedDoorWorldspace); /*0x5161e4*/
        }
        else
        {
          if ( !v11 ) /*0x5161ed*/
            goto LABEL_16; /*0x5161ed*/
          v20 = sub_4CC070(v11, &v24); /*0x5161f6*/
        }
        v19 = v20; /*0x5161fb*/
LABEL_16:
        NiTMap_Clear(&v24); /*0x5161fd*/
        if ( !*(_DWORD *)v23 ) /*0x51620b*/
        {
          if ( v19 ) /*0x51620f*/
            reference->vtbl->super.super.super.Unk_46((TESObjectREFR *)reference); /*0x51621f*/
          v21 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x516230*/
          v22 = *(_BYTE *)(v21 + 0x185); /*0x516239*/
          *(_BYTE *)(v21 + 0x185) = 0; /*0x51623d*/
          if ( LinkedDoorWorldspace ) /*0x516244*/
          {
            sub_4F2630((int)LinkedDoorWorldspace, st5_0, a2, st7_0); /*0x516248*/
          }
          else if ( v11 ) /*0x516251*/
          {
            sub_4CBE50(v11, st5_0, a2, st7_0, &v24); /*0x51625a*/
          }
          NiTMap_Clear(&v24); /*0x516263*/
          *(_BYTE *)(v21 + 0x185) = v22; /*0x51626c*/
        }
        sub_4B7DB0(st5_0, a2, st7_0, (char *)a4, 1); /*0x516279*/
        v25 = 0xFFFFFFFF; /*0x516285*/
        NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(&v24); /*0x51628d*/
        if ( v19 ) /*0x516294*/
          return 0; /*0x516294*/
      }
    }
  }
  return 1; /*0x51613b*/
}
