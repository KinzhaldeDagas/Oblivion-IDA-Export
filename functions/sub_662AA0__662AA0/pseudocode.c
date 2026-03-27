char __thiscall sub_662AA0(Actor *this, void *a2, float *a3, float *a4)
{
  void *v5; // eax
  ExtraDataList *****ContainerExtraDataForRef; // ebp
  int v7; // esi
  void **EquippedInstance; // eax
  void **v9; // ebx
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  double (__thiscall ***v12)(_DWORD, _DWORD); // eax
  double (__thiscall ***v14)(_DWORD, Actor *); // esi
  double v15; // st6
  float v16; // [esp+8h] [ebp-20h]
  float v18; // [esp+20h] [ebp-8h]
  float v19; // [esp+24h] [ebp-4h]
  void *v20; // [esp+2Ch] [ebp+4h]
  float v21; // [esp+2Ch] [ebp+4h]
  float v22; // [esp+2Ch] [ebp+4h]

  v5 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &EnchantmentItem `RTTI Type Descriptor',
         0);
  v20 = v5;
  if ( !v5 || *((_DWORD *)v5 + 0xD) != 3 )
    return 0;
  Actor_GetActorBaseForm(this, 0);
  ContainerExtraDataForRef = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)this);
  v7 = 0;
  while ( 1 )
  {
    EquippedInstance = (void **)ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, dword_B14E60[v7], 0);
    v9 = EquippedInstance;
    if ( EquippedInstance )
    {
      v10 = OblivionDynamicCast(
              EquippedInstance[2],
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESEnchantableForm `RTTI Type Descriptor',
              0);
      v11 = v10;
      v12 = v10 ? (double (__thiscall ***)(_DWORD, _DWORD))v10[1] : 0;
      if ( v12 == v20 )
        break;
    }
    if ( (unsigned int)++v7 >= 0xA )
      return 0;
  }
  v14 = (double (__thiscall ***)(_DWORD, Actor *))(v12 + 9);
  (*v12[9])(v12 + 9, 0);
  v19 = sub_4849C0(v9);
  v18 = (float)*((unsigned __int16 *)v11 + 4);
  v16 = (**v14)(v14, this);
  v21 = Calc_EnchantmentDrain_(v16);
  v15 = v21;
  if ( v21 == 0.0 )
    v15 = v18;
  v22 = v18 / v15;
  *a4 = v22;
  if ( v19 < 0.0 )
    *a3 = v22;
  else
    *a3 = v19 / v15;
  return 1;
}
