int __thiscall sub_5E2670(PlayerCharacter *this, int a2, int a3)
{
  float *ContainerChanges; // eax

  if ( (unsigned int)(a2 - 0xC) <= 0x14 )
  {
    if ( a2 == 0x12 || a2 == 0x1B )
    {
      ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&this->super.super.super.super.baseExtraList);
      if ( ContainerChanges )
        sub_484310(ContainerChanges);
      this->vtbl->super.Unk_B0((Actor *)this);
    }
    if ( this == TESDataHandler_g_PlayerRef )
    {
      if ( (_BYTE)a3 )
        sub_6670C0((int *)TESDataHandler_g_PlayerRef);
    }
  }
  return sub_5E26BE(a2, a3);
}
