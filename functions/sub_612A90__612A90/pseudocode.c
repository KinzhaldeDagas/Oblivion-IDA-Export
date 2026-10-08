double __cdecl sub_612A90(Actor *a1, void **a2)
{
  int v3; // ebp
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax
  void *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  char *v8; // ebx
  int v9; // edi
  double v10; // st7
  double v11; // st7
  int v12; // [esp+24h] [ebp-10h] BYREF
  float v13; // [esp+28h] [ebp-Ch]
  double v14; // [esp+2Ch] [ebp-8h]

  if ( !a2 ) /*0x612a9a*/
    return 0.0; /*0x612a9c*/
  v3 = 0; /*0x612aaa*/
  Actor_GetActorBaseForm(a1, 0); /*0x612aaf*/
  ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)a1); /*0x612ac1*/
  if ( ContainerExtraDataForRef ) /*0x612acb*/
  {
    v12 = 0; /*0x612ad6*/
    v5 = (void *)sub_486240(ContainerExtraDataForRef, 0x28, &v12); /*0x612ada*/
    v6 = OblivionDynamicCast( /*0x612aee*/
           v5,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &AlchemyItem `RTTI Type Descriptor',
           0);
    v7 = v6; /*0x612af3*/
    if ( v6 ) /*0x612afa*/
    {
      if ( v12 > 0 ) /*0x612b00*/
      {
        if ( (unsigned __int8)EffectItemList_AllEffectsHostile(v6 + 0xC) ) /*0x612b05*/
          v3 = (int)(v7 + 9); /*0x612b0e*/
      }
    }
  }
  v8 = (char *)OblivionDynamicCast( /*0x612b2f*/
                 a2[2],
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                 &TESObjectWEAP `RTTI Type Descriptor',
                 0);
  v13 = ContainerEntryExtraData_GetHealth(a2, 1) / fCostant_100; /*0x612b3e*/
  if ( !v8 || v8 == (char *)0xFFFFFFA0 ) /*0x612b49*/
    v9 = 0; /*0x612b50*/
  else
    v9 = *((_DWORD *)v8 + 0x19); /*0x612b4b*/
  if ( v9 ) /*0x612b54*/
  {
    v14 = EquippedEntryData_GetCharge(a2); /*0x612b5f*/
    v10 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(v9 + 0x24))(v9 + 0x24, 0); /*0x612b6f*/
    if ( v10 <= v14 ) /*0x612b7a*/
    {
      if ( !v3 /*0x612ba3*/
        || (v14 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(v3 + 0xC))(v3 + 0xC, 0),
            v11 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(v9 + 0x24))(v9 + 0x24, 0),
            v11 >= v14) )
      {
        v3 = v9 + 0x18; /*0x612ba5*/
      }
    }
  }
  return sub_612560(a1, v8, v13, v3); /*0x612a9e*/
}
