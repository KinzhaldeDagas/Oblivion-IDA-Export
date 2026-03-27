char __userpurge Actor_DamageEquippedItem_@<al>(
        PlayerCharacter *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        void **a4,
        int a5,
        int a6)
{
  _BYTE *v9; // eax
  _BYTE *v10; // ebp
  int *v11; // ecx
  const char *v12; // ebx
  char *Name; // eax
  ExtraContainerChanges_Data *ContainerChanges; // eax
  _DWORD *v15; // eax
  LowProcess_vtbl *v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  TESForm *v21; // eax
  double Health; // [esp+10h] [ebp-30h]
  ExtraDataList *v24; // [esp+10h] [ebp-30h]
  int v27; // [esp+30h] [ebp-10h] BYREF
  int v28; // [esp+34h] [ebp-Ch] BYREF
  float v29[2]; // [esp+38h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+40h] [ebp+0h]
  int v31; // [esp+44h] [ebp+4h]
  float v32; // [esp+4Ch] [ebp+Ch]

  if ( !a4 )
    return Actor_DamageEquippedItem__::Done(0, a5, a6);
  if ( *(float *)&a5 <= 0.0 )
    return Actor_DamageEquippedItem__::Done_((int)a4, a5, a6);
  v9 = a4[2];
  v31 = a5;
  v10 = 0;
  if ( v9 )
  {
    if ( v9[4] == 0x14 )
    {
      v10 = v9;
      if ( !(_BYTE)a6 )
      {
        if ( TESObjectARMO_ISHeavyArmor(v9) == 1 )
        {
          if ( Actor_GetSkillMasteryLevel((int *)a1, a2, (int)a4, 0x12) < 2 )
          {
            if ( Actor_GetSkillMasteryLevel((int *)a1, a2, (int)a4, 0x12) )
              goto LABEL_17;
            v11 = (int *)&fPerkHeavyArmorNoviceDamageMult;
          }
          else
          {
            v11 = (int *)&fPerkHeavyArmorJourneymanDamageMult;
          }
        }
        else
        {
          if ( TESObjectARMO_ISHeavyArmor(v10) )
            goto LABEL_17;
          if ( Actor_GetSkillMasteryLevel((int *)a1, a2, (int)a4, 0x1B) < 2 )
          {
            if ( Actor_GetSkillMasteryLevel((int *)a1, a2, (int)a4, 0x1B) )
              goto LABEL_17;
            v11 = (int *)&fPerkLightArmorNoviceDamageMult;
          }
          else
          {
            v11 = (int *)&fPerkLightArmorJourneymanDamageMult;
          }
        }
        *(float *)&v31 = *(float *)GameSetting_GetSafeFloatPointer(v11) * *(float *)&a5;
      }
    }
  }
LABEL_17:
  v32 = ContainerEntryExtraData_GetHealth(a4, 0) - *(float *)&v31;
  if ( v32 < 1.0 )
    v32 = 0.0;
  if ( byte_B3B908 )
  {
    if ( v10 )
    {
      v12 = *((const char **)v10 + 0xA);
      if ( !v12 )
        v12 = EmptyString;
      Health = ContainerEntryExtraData_GetHealth(a4, 0);
      Name = TESObjectREFR_GetName((TESObjectREFR *)a1);
      Interface_ConsolePrint(
        "%.20s's %s takes %.2f points of damage (%.2f/%.2f)!",
        Name,
        v12,
        *(float *)&v31,
        v32,
        Health);
    }
  }
  v24 = *(ExtraDataList **)*a4;
  ContainerChanges = ExtraDataList_GetContainerChanges(&a1->super.super.super.super.baseExtraList);
  sub_488830(a4, (BSExtraDataVtbl *)LODWORD(v32), (int)ContainerChanges, v24, 1);
  if ( v10 )
    a1->vtbl->super.Unk_B0((Actor *)a1);
  if ( v32 > 0.0 )
    return 0;
  v15 = a4[2];
  if ( (!v15
     || *((_BYTE *)v15 + 4) != 0x21
     || !a1->super.super.super.process
     || !a1->super.super.super.process->GetWeaponOut(a1->super.super.super.process))
    && (!v10
     || !TESBipedModelForm_CoversSlot((unsigned __int16 *)v10 + 0x32, 0xD, 0)
     || !a1->super.super.super.process->GetEquippedShieldData(a1->super.super.super.process, 1)) )
  {
    return 1;
  }
  if ( a1 == TESDataHandler_g_PlayerRef || (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a4[2] + 0x78))(a4[2]) )
  {
    Actor_UnequipItem(a1, 0.0, *(float *)&a5, v32, (char)a4[2], 1, *(ExtraDataList **)*a4, 0, 1, 0);
    return 1;
  }
  v16 = a1->super.super.super.process->__vftable;
  v17 = ((int (__thiscall *)(PlayerCharacter *, int, int))a1->vtbl->super.super.super.Unk_5A)(a1, a2, a3);
  if ( v10 )
    v18 = v16->Unk_47(a1->super.super.super.process, v17);
  else
    v18 = v16->Unk_45(a1->super.super.super.process, v17);
  v19 = v18;
  if ( v18 )
    v20 = v18 + 0x88;
  else
    v20 = (int)a1->vtbl->super.super.super.GetPos((TESObjectREFR *)a1);
  v29[1] = *(float *)v20;
  retaddr = *(_UNKNOWN **)(v20 + 4);
  sub_711440((float *)(v19 + 0x64), v29, (float *)&v27, (float *)&v28);
  v21 = (TESForm *)((int (__thiscall *)(PlayerCharacter *, void *, _DWORD, int))a1->vtbl->super.Unk_B2)(
                     a1,
                     a4[2],
                     *(_DWORD *)*a4,
                     1);
  sub_4DC000((int)a1, v21);
  return 1;
}
