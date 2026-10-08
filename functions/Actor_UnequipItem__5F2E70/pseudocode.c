double __userpurge Actor_UnequipItem@<st0>(
        Actor *a1@<ecx>,
        double result@<st0>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        __int16 a5,
        int a6,
        ExtraDataList *a7,
        int a8,
        char a9,
        char a10)
{
  TESObjectARMO *v11; // edi
  int v12; // ebx
  _DWORD *v13; // eax
  unsigned int v14; // ebx
  int v15; // [esp-8h] [ebp-28h]
  TESBoundObject *retaddr; // [esp+20h] [ebp+0h]
  char HasWorn; // [esp+28h] [ebp+8h]

  if ( a7 && sub_41DF40(a7) && !a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0) ) /*0x5f2e99*/
  {
    if ( a1 == (Actor *)reference ) /*0x5f2ea5*/
      GameUI_QueueMessage(MEMORY[0xB38A40].value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x5f2ebb*/
  }
  else
  {
    HasWorn = 0; /*0x5f2ed0*/
    if ( a7 ) /*0x5f2ed5*/
      HasWorn = ExtraDataList_HasWorn(a7, 1); /*0x5f2ee4*/
    v11 = (TESObjectARMO *)retaddr; /*0x5f2eea*/
    if ( retaddr ) /*0x5f2ef0*/
    {
      switch ( retaddr->member.super.type ) /*0x5f2f0d*/
      {
        case kFormType_Armor: /*0x5f2f0d*/
          a1->vtbl->Unk_B0(a1); /*0x5f2f1e*/
          goto LABEL_12; /*0x5f2f1e*/
        case kFormType_Clothing: /*0x5f2f0d*/
LABEL_12:
          st5_0 = MagicTarget_RemoveBoundObj((int)&a1->members.magicTarget, (char)a7, result, retaddr, 1); /*0x5f2f20*/
          if ( a1 == (Actor *)reference ) /*0x5f2f31*/
          {
            if ( InterfaceManager_IsMenuMode() ) /*0x5f2f33*/
            {
              if ( !PlayerCharacter::IsSleeping_(reference) ) /*0x5f2f42*/
                MagicTarget_ProcessEffects(&reference->super.super.magicTarget, 0.0); /*0x5f2f5a*/
            }
            sub_662C70((unsigned int *)reference, (char)a7, result, retaddr, (int)a7); /*0x5f2f67*/
            sub_5E99C0((TESObjectREFR *)a1, (TESKey *)retaddr, 0, 0); /*0x5f2f73*/
          }
          sub_5E4260((TESObjectREFR *)a1, st5_0, st6_0, result, (TESObjectARMO *)retaddr, a5, (int)a7, HasWorn, a8); /*0x5f2f8b*/
          goto Actor_UnequipItem___def_5F2F0D; /*0x5f2f92*/
        case kFormType_Light: /*0x5f2f0d*/
          retaddr = *(TESBoundObject **)&retaddr[3].member.super.type; /*0x5f302e*/
          if ( a7 ) /*0x5f3032*/
          {
            if ( (double)(int)retaddr == ExtraDataList_GetTimeLeft(a7) ) /*0x5f304e*/
              sub_41F630(a7); /*0x5f3052*/
          }
          v12 = SoundMap_ResolveAnimSoundNote("ITMTorchHeldUnequip"); /*0x5f3067*/
          if ( !v12 ) /*0x5f306b*/
            goto LABEL_31; /*0x5f306b*/
          if ( a1 == (Actor *)reference && InterfaceManager_IsMenuMode() ) /*0x5f3075*/
          {
            if ( !a1->members.super.process->GetEquippedLightData(a1->members.super.process, 0) ) /*0x5f308f*/
              goto LABEL_31; /*0x5f308f*/
            v13 = (_DWORD *)sub_65AC50(a1, *(_DWORD *)(v12 + 0xC), 0, 0x101, 1); /*0x5f3098*/
          }
          else
          {
            v13 = (_DWORD *)sub_65AC50(a1, *(_DWORD *)(v12 + 0xC), 0, v15, 2); /*0x5f30a9*/
          }
          v14 = (unsigned int)v13; /*0x5f30ae*/
          if ( v13 ) /*0x5f30b2*/
          {
            sub_6B73E0(v13); /*0x5f30b6*/
            FormHeapFree(v14); /*0x5f30bc*/
          }
LABEL_31:
          sub_5E4260((TESObjectREFR *)a1, st5_0, st6_0, result, v11, (__int16)retaddr, (int)a7, a5, (int)a7); /*0x5f30c4*/
          if ( a1 == (Actor *)reference ) /*0x5f30e4*/
            sub_5E99C0((TESObjectREFR *)a1, v11, 0, 0); /*0x5f30ed*/
Actor_UnequipItem___def_5F2F0D:
          if ( !a9 ) /*0x5f30f7*/
            HideEquipment((TESObjectREFR *)a1, st5_0, st6_0, result, 0, 0); /*0x5f30ff*/
          break; /*0x5f30ff*/
        case kFormType_Weapon: /*0x5f2f0d*/
          JUMPOUT(0x5F2F99); /*0x5f2f99*/
        case kFormType_Ammo: /*0x5f2f0d*/
          goto LABEL_31;
        default:
          goto Actor_UnequipItem___def_5F2F0D;
      }
    }
  }
  return result; /*0x5f2ec3*/
}
