double __userpurge Actor_UnequipItem@<st0>(
        PlayerCharacter *a1@<ecx>,
        double result@<st0>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        char a5,
        int a6,
        ExtraDataList *a7,
        char a8,
        int a9,
        char a10)
{
  TESObjectARMO *v11; // edi
  int v12; // ebx
  _DWORD *v13; // eax
  unsigned int v14; // ebx
  int v15; // [esp-8h] [ebp-28h]
  TESObjectARMO *retaddr; // [esp+20h] [ebp+0h]

  if ( a7 && sub_41DF40(a7) && !a1->vtbl->super.super.super.IsDead((TESObjectREFR *)a1, 0) )
  {
    if ( a1 == TESDataHandler_g_PlayerRef )
      GameUI_QueueMessage((const char *)TESObjectREFR, 0, 1u, flt_A30634);
  }
  else
  {
    if ( a7 )
      ExtraDataList_HasWorn(a7, 1);
    v11 = retaddr;
    if ( retaddr )
    {
      switch ( *((_BYTE *)retaddr + 4) )
      {
        case 0x14:
          a1->vtbl->super.Unk_B0((Actor *)a1);
          goto LABEL_12;
        case 0x16:
LABEL_12:
          MagicTarget_RemoveBoundObj(retaddr, 1);
          if ( a1 == TESDataHandler_g_PlayerRef )
          {
            if ( InterfaceManager_IsMenuMode() )
            {
              if ( !PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) )
                MagicTarget_ProcessEffects(&TESDataHandler_g_PlayerRef->super.super.magicTarget, COERCE_INT(0.0));
            }
            sub_662C70(TESDataHandler_g_PlayerRef, retaddr, (int)a7);
            sub_5E99C0((TESObjectREFR *)a1, retaddr, 0, 0);
          }
          sub_5E4260((TESObjectREFR *)a1, st5_0, st6_0, result, retaddr, (__int16)retaddr, (int)a7, a5, (int)a7);
          goto Actor_UnequipItem___def_5F2F0D;
        case 0x1A:
          retaddr = *((TESObjectARMO **)retaddr + 0x1C);
          if ( a7 )
          {
            if ( (double)(int)retaddr == ExtraDataList_GetTimeLeft(a7) )
              sub_41F630(a7);
          }
          v12 = sub_447490("ITMTorchHeldUnequip");
          if ( !v12 )
            goto LABEL_31;
          if ( a1 == TESDataHandler_g_PlayerRef && InterfaceManager_IsMenuMode() )
          {
            if ( !a1->super.super.super.process->GetEquippedLightData(a1->super.super.super.process, 0) )
              goto LABEL_31;
            v13 = (_DWORD *)sub_65AC50(a1, *(_DWORD *)(v12 + 0xC), 0, 0x101, 1);
          }
          else
          {
            v13 = (_DWORD *)sub_65AC50(a1, *(_DWORD *)(v12 + 0xC), 0, v15, 2);
          }
          v14 = (unsigned int)v13;
          if ( v13 )
          {
            sub_6B73E0(v13);
            FormHeapFree(v14);
          }
LABEL_31:
          sub_5E4260((TESObjectREFR *)a1, st5_0, st6_0, result, v11, (__int16)retaddr, (int)a7, a5, (int)a7);
          if ( a1 == TESDataHandler_g_PlayerRef )
            sub_5E99C0((TESObjectREFR *)a1, v11, 0, 0);
Actor_UnequipItem___def_5F2F0D:
          if ( !a8 )
            HideEquipment((TESObjectREFR *)a1, st5_0, st6_0, result, 0, 0);
          break;
        case 0x21:
          JUMPOUT(0x5F2F99);
        case 0x22:
          goto LABEL_31;
        default:
          goto Actor_UnequipItem___def_5F2F0D;
      }
    }
  }
  return result;
}
