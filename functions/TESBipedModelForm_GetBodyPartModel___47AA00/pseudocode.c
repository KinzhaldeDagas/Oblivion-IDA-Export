// ODismemberment: biped slot attach/replace path can rebuild loaded 3D; plugin state must be reapplied after equipment/body changes.
void __thiscall TESBipedModelForm_GetBodyPartModel____(ActorSkinInfo *this, TESForm *a2, UInt32 a3, int a4)
{
  unsigned __int16 *v8; // ebp
  void *v9; // eax
  unsigned int v10; // ebx
  ActorSkinInfoEquipmentSlot *p_unk04C; // edi
  TESForm *form; // eax
  int v13; // edi

  v8 = (unsigned __int16 *)OblivionDynamicCast( /*0x47aa2d*/
                             a2,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESBipedModelForm `RTTI Type Descriptor',
                             0);
  v9 = OblivionDynamicCast( /*0x47aa2f*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESRace `RTTI Type Descriptor',
         0);
  if ( !v8 ) /*0x47aa39*/
  {
    if ( !v9 ) /*0x47ab40*/
      return; /*0x47ab40*/
    goto LABEL_20; /*0x47ab40*/
  }
  if ( a4 != 0xFFFFFFFF && (TESBipedModelForm_CoversSlot(v8, 7, 0) || TESBipedModelForm_CoversSlot(v8, 6, 0)) ) /*0x47aa5d*/
  {
LABEL_20:
    ActorSkinInfo_ClearOrReplaceEquipmentSlot(this, (ActorSkinInfoEquipmentSlot *)(&this->unk04C + 4 * a4), 1, 0); /*0x47ab42*/
    *(&this->unk04C + 4 * a4) = (UInt32)a2; /*0x47ab69*/
    *(&this->unk050 + 4 * a4) = a3; /*0x47ab6b*/
    return; /*0x47ab6b*/
  }
  v10 = 0; /*0x47aa95*/
  p_unk04C = (ActorSkinInfoEquipmentSlot *)&this->unk04C; /*0x47aa97*/
  do /*0x47aaf6*/
  {
    if ( TESBipedModelForm_CoversSlot(v8, v10, 0) ) /*0x47aaa5*/
    {
      form = p_unk04C->form; /*0x47aaae*/
      if ( p_unk04C->form != a2 ) /*0x47aab4*/
      {
        if ( form /*0x47aac9*/
          && OblivionDynamicCast(
               form,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESRace `RTTI Type Descriptor',
               0) )
        {
          ActorSkinInfo_ClearOrReplaceEquipmentSlot(this, p_unk04C, 1, 0); /*0x47aadc*/
        }
        else
        {
          sub_479740(this, p_unk04C->form); /*0x47aae8*/
        }
      }
    }
    ++v10; /*0x47aaed*/
    p_unk04C = (ActorSkinInfoEquipmentSlot *)((char *)p_unk04C + 0x10); /*0x47aaf0*/
  }
  while ( v10 < 0x10 ); /*0x47aaf6*/
  v13 = 0; /*0x47aaf8*/
  while ( !TESBipedModelForm_CoversSlot(v8, v13, 1) ) /*0x47ab0c*/
  {
    if ( (unsigned int)++v13 >= 0x10 ) /*0x47ab14*/
      return; /*0x47ab14*/
  }
  *(&this->unk050 + 4 * v13) = a3; /*0x47ab30*/
  *(&this->unk04C + 4 * v13) = (UInt32)a2; /*0x47ab34*/
}
