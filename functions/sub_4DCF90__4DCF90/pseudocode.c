void __userpurge sub_4DCF90(
        TESObjectREFR *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5@<ebp>,
        int a6)
{
  ActorSkinInfo *SkinInfoByPerspective; // eax

  if ( this->member.niNode ) /*0x4dcf93*/
  {
    SkinInfoByPerspective = this->vtbl->GetActiveSkinInfo(this); /*0x4dcfa1*/
    if ( this == (TESObjectREFR *)reference ) /*0x4dcfab*/
      SkinInfoByPerspective = Actor_GetSkinInfoByPerspective((Actor *)reference, 0); /*0x4dcfaf*/
    if ( SkinInfoByPerspective ) /*0x4dcfb6*/
      sub_47B9A0((unsigned int)SkinInfoByPerspective, st5_0, a3, a4, a6); /*0x4dcfbf*/
    else
      PrintError("Creatures are not allowed to wear amulets."); /*0x4dcfcb*/
    if ( this->vtbl->IsActor(this) ) /*0x4dcfdd*/
      sub_5EA1A0((int)this, a5, (_DWORD *)this->member.niNode); /*0x4dcfe9*/
  }
}
