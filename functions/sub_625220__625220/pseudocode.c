double __thiscall sub_625220(Actor *this)
{
  TESForm *ActorBaseForm; // eax
  _BYTE *v3; // eax
  float v6; // [esp+4h] [ebp-4h]

  ActorBaseForm = Actor_GetActorBaseForm(this, 0); /*0x625234*/
  v3 = OblivionDynamicCast( /*0x62523a*/
         ActorBaseForm,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
         &TESCreature `RTTI Type Descriptor',
         0);
  if ( v3 ) /*0x625244*/
  {
    v6 = (float)(unsigned __int8)v3[0x10A]; /*0x62526e*/
    if ( v3[0x104] == 5 ) /*0x625272*/
      return (float)(g_GameSettingStringPointers_B36CD8[0x164] * v6); /*0x62527e*/
    return v6; /*0x625282*/
  }
  else
  {
    return Actor_GetHandReachDistance(this); /*0x625251*/
  }
}
