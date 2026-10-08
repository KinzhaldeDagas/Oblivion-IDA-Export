char __thiscall sub_662AA0(Actor *this, void *a2, float *a3, float *a4)
{
  void *v5; // eax
  ExtraDataList *****ContainerExtraDataForRef; // ebp
  int v7; // esi
  EntryData *EquippedInstance; // eax
  EntryData *v9; // ebx
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  double (__thiscall ***v12)(_DWORD, _DWORD); // eax
  double (__thiscall ***v14)(_DWORD, Actor *); // esi
  double v15; // st6
  float v16; // [esp+8h] [ebp-20h]
  float v18; // [esp+20h] [ebp-8h]
  float Charge; // [esp+24h] [ebp-4h]
  void *v20; // [esp+2Ch] [ebp+4h]
  float v21; // [esp+2Ch] [ebp+4h]
  float v22; // [esp+2Ch] [ebp+4h]

  v5 = OblivionDynamicCast( /*0x662ac0*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &EnchantmentItem `RTTI Type Descriptor',
         0);
  v20 = v5; /*0x662aca*/
  if ( !v5 || *((_DWORD *)v5 + 0xD) != 3 ) /*0x662ad4*/
    return 0; /*0x662b4b*/
  Actor_GetActorBaseForm(this, 0); /*0x662ada*/
  ContainerExtraDataForRef = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)this); /*0x662af4*/
  v7 = 0; /*0x662af6*/
  while ( 1 )
  {
    EquippedInstance = (EntryData *)ContainerExtraData_GetEquippedInstance( /*0x662b0b*/
                                      ContainerExtraDataForRef,
                                      dword_B14E60[v7],
                                      0);
    v9 = EquippedInstance; /*0x662b10*/
    if ( EquippedInstance )
    {
      v10 = OblivionDynamicCast( /*0x662b28*/
              EquippedInstance->type,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESEnchantableForm `RTTI Type Descriptor',
              0);
      v11 = v10; /*0x662b2d*/
      v12 = v10 ? (double (__thiscall ***)(_DWORD, _DWORD))v10[1] : 0;
      if ( v12 == v20 ) /*0x662b41*/
        break; /*0x662b41*/
    }
    if ( (unsigned int)++v7 >= 0xA ) /*0x662b49*/
      return 0; /*0x662b49*/
  }
  v14 = (double (__thiscall ***)(_DWORD, Actor *))(v12 + 9); /*0x662b5a*/
  (*v12[9])(v12 + 9, 0); /*0x662b63*/
  Charge = EquippedEntryData_GetCharge(v9); /*0x662b6e*/
  v18 = (float)*((unsigned __int16 *)v11 + 4); /*0x662b89*/
  v16 = (**v14)(v14, this); /*0x662b90*/
  v21 = Calc_EnchantmentDrain_(v16); /*0x662b98*/
  v15 = v21; /*0x662bab*/
  if ( v21 == 0.0 ) /*0x662bb4*/
    v15 = v18; /*0x662bc0*/
  v22 = v18 / v15; /*0x662bc8*/
  *a4 = v22; /*0x662bd0*/
  if ( Charge < 0.0 ) /*0x662bdf*/
    *a3 = v22; /*0x662c01*/
  else
    *a3 = Charge / v15; /*0x662bef*/
  return 1; /*0x662b4b*/
}
