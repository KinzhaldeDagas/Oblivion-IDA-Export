int __thiscall sub_4796F0(ActorSkinInfo *this)
{
  ActorSkinInfoEquipmentSlot *p_unk04C; // esi
  int v7; // ebx

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&unk_B33E00, (int)&unk_A2F830); /*0x4796ff*/
  p_unk04C = (ActorSkinInfoEquipmentSlot *)&this->unk04C; /*0x479704*/
  v7 = 0x10; /*0x479707*/
  do /*0x479722*/
  {
    ActorSkinInfo_ClearOrReplaceEquipmentSlot(this, p_unk04C, 1, 0); /*0x479717*/
    p_unk04C = (ActorSkinInfoEquipmentSlot *)((char *)p_unk04C + 0x10); /*0x47971c*/
    --v7; /*0x47971f*/
  }
  while ( v7 ); /*0x479722*/
  return NiLeaveCriticalSection_0(&unk_B33E00); /*0x479724*/
}
