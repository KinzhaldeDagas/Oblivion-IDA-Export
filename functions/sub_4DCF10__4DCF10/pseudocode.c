void __userpurge sub_4DCF10(TESObjectREFR *this@<ecx>, char bp0@<bpl>, char firstPerson)
{
  char *SkinInfoByPerspective; // eax
  PlayerCharacter *v8; // ecx

  if ( this->member.niNode ) /*0x4dcf13*/
  {
    SkinInfoByPerspective = (char *)((int (__thiscall *)(TESObjectREFR *))this->vtbl->GetActiveSkinInfo)(this); /*0x4dcf22*/
    v8 = reference; /*0x4dcf24*/
    if ( this == (TESObjectREFR *)reference ) /*0x4dcf30*/
    {
      if ( SkinInfoByPerspective ) /*0x4dcf34*/
      {
        ActorSkinInfo_ClearRingSlot(SkinInfoByPerspective, firstPerson); /*0x4dcf39*/
        v8 = reference; /*0x4dcf3e*/
      }
      SkinInfoByPerspective = (char *)Actor_GetSkinInfoByPerspective((Actor *)v8, v8->isThirdPerson); /*0x4dcf53*/
    }
    if ( SkinInfoByPerspective ) /*0x4dcf5a*/
      ActorSkinInfo_ClearRingSlot(SkinInfoByPerspective, firstPerson); /*0x4dcf5f*/
    if ( this->vtbl->IsActor(this) ) /*0x4dcf6e*/
      sub_5EA1A0((int)this, bp0, (_DWORD *)this->member.niNode); /*0x4dcf7b*/
  }
}
