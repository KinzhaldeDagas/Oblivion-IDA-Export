void __usercall sub_4DD000(TESObjectREFR *this@<ecx>, char a2@<bpl>)
{
  char *SkinInfoByPerspective; // eax
  PlayerCharacter *v7; // ecx

  if ( this->member.niNode ) /*0x4dd004*/
  {
    SkinInfoByPerspective = (char *)((int (__thiscall *)(TESObjectREFR *))this->vtbl->GetActiveSkinInfo)(this); /*0x4dd012*/
    v7 = reference; /*0x4dd014*/
    if ( this == (TESObjectREFR *)reference ) /*0x4dd01c*/
    {
      if ( SkinInfoByPerspective ) /*0x4dd020*/
      {
        ActorSkinInfo_ClearAmuletSlot(SkinInfoByPerspective); /*0x4dd024*/
        v7 = reference; /*0x4dd029*/
      }
      SkinInfoByPerspective = (char *)Actor_GetSkinInfoByPerspective((Actor *)v7, v7->isThirdPerson); /*0x4dd03e*/
    }
    if ( SkinInfoByPerspective ) /*0x4dd045*/
      ActorSkinInfo_ClearAmuletSlot(SkinInfoByPerspective); /*0x4dd049*/
    if ( this->vtbl->IsActor(this) ) /*0x4dd058*/
      sub_5EA1A0((int)this, a2, (_DWORD *)this->member.niNode); /*0x4dd064*/
  }
}
