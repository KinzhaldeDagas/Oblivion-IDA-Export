void __thiscall sub_479740(ActorSkinInfo *this, TESForm *a2)
{
  ActorSkinInfoEquipmentSlot *p_unk04C; // esi
  int v4; // ebx

  if ( a2 ) /*0x47974a*/
  {
    p_unk04C = (ActorSkinInfoEquipmentSlot *)&this->unk04C; /*0x47974e*/
    v4 = 0x10; /*0x479751*/
    do /*0x47976c*/
    {
      if ( p_unk04C->form == a2 ) /*0x479758*/
        ActorSkinInfo_ClearOrReplaceEquipmentSlot(this, p_unk04C, 1, 0); /*0x479761*/
      p_unk04C = (ActorSkinInfoEquipmentSlot *)((char *)p_unk04C + 0x10); /*0x479766*/
      --v4; /*0x479769*/
    }
    while ( v4 ); /*0x47976c*/
  }
}
