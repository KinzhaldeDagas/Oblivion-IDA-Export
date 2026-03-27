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

  if ( !a2 )
    return 0.0;
  v3 = 0;
  Actor_GetActorBaseForm(a1, 0);
  ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)a1);
  if ( ContainerExtraDataForRef )
  {
    v12 = 0;
    v5 = (void *)sub_486240(ContainerExtraDataForRef, 0x28, &v12);
    v6 = OblivionDynamicCast(
           v5,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &AlchemyItem `RTTI Type Descriptor',
           0);
    v7 = v6;
    if ( v6 )
    {
      if ( v12 > 0 )
      {
        if ( (unsigned __int8)EffectItemList_AllEffectsHostile(v6 + 0xC) )
          v3 = (int)(v7 + 9);
      }
    }
  }
  v8 = (char *)OblivionDynamicCast(
                 a2[2],
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                 &TESObjectWEAP `RTTI Type Descriptor',
                 0);
  v13 = ContainerEntryExtraData_GetHealth(a2, 1) / fCostant_100;
  if ( !v8 || v8 == (char *)0xFFFFFFA0 )
    v9 = 0;
  else
    v9 = *((_DWORD *)v8 + 0x19);
  if ( v9 )
  {
    v14 = sub_4849C0(a2);
    v10 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(v9 + 0x24))(v9 + 0x24, 0);
    if ( v10 <= v14 )
    {
      if ( !v3
        || (v14 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(v3 + 0xC))(v3 + 0xC, 0),
            v11 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(v9 + 0x24))(v9 + 0x24, 0),
            v11 >= v14) )
      {
        v3 = v9 + 0x18;
      }
    }
  }
  return sub_612560(a1, v8, v13, v3);
}
