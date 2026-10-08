// Refreshes equipped-AMMO/quiver 3D for a reference. For PlayerCharacter it updates both relevant animation perspectives; then refreshes quiver arrow visibility and actor 3D state.
void __thiscall TESObjectREFR_RefreshEquippedAmmo3D(TESObjectREFR *this, TESForm *ammo)
{
  double v2; // st7
  ActorSkinInfo *v4; // eax
  PlayerCharacter *v5; // ecx
  ActorSkinInfo *v6; // ebx
  const char *v7; // eax
  NiObjectNET *CloneAndAttachModel3D; // ebx
  char *m_data; // ebp
  const char *v10; // [esp-18h] [ebp-4Ch]
  UInt32 refID; // [esp-14h] [ebp-48h]
  int v12; // [esp+14h] [ebp-20h]
  ActorSkinInfo *SkinInfoByPerspective; // [esp+18h] [ebp-1Ch]
  BSStringT Src; // [esp+20h] [ebp-14h] BYREF
  unsigned int v15; // [esp+30h] [ebp-4h]

  if ( this->member.niNode ) /*0x4e1e19*/
  {
    v4 = this->vtbl->GetActiveSkinInfo(this); /*0x4e1e2e*/
    v5 = reference; /*0x4e1e30*/
    v6 = v4; /*0x4e1e38*/
    SkinInfoByPerspective = v4; /*0x4e1e3f*/
    v12 = 1; /*0x4e1e43*/
    if ( this != (TESObjectREFR *)reference ) /*0x4e1e47*/
      goto LABEL_8; /*0x4e1e47*/
    v12 = 2; /*0x4e1e49*/
    while ( 1 ) /*0x4e1e59*/
    {
      if ( this == (TESObjectREFR *)v5 && v12 == 1 ) /*0x4e1e61*/
      {
        SkinInfoByPerspective = Actor_GetSkinInfoByPerspective((Actor *)v5, v5->isThirdPerson); /*0x4e1e77*/
        v6 = SkinInfoByPerspective; /*0x4e1e7b*/
      }
LABEL_8:
      if ( v6 ) /*0x4e1e7f*/
      {
        ActorSkinInfo_SetEquippedAmmo3D(v6, ammo); /*0x4e1e88*/
      }
      else if ( ammo ) /*0x4e1e96*/
      {
        if ( ammo != (TESForm *)0xFFFFFFD0 ) /*0x4e1ea5*/
        {
          v7 = (const char *)((int (__thiscall *)(TESForm *))ammo[2].vtbl->Unk_05)(&ammo[2]); /*0x4e1eb0*/
          CloneAndAttachModel3D = (NiObjectNET *)Actor_LoadCloneAndAttachModel3D(v7, 0xC, this, 0); /*0x4e1eb8*/
          Src.m_data = 0; /*0x4e1eba*/
          Src.m_dataLen = 0; /*0x4e1ebe*/
          Src.m_bufLen = 0; /*0x4e1ec3*/
          refID = ammo->member.refID; /*0x4e1ed5*/
          v10 = *(const char **)off_B065B8; /*0x4e1ed6*/
          v15 = 0; /*0x4e1ee1*/
          BSStringT_Static_Format(&Src, "%s (%08X)", v10, refID); /*0x4e1ee5*/
          m_data = Src.m_data; /*0x4e1eea*/
          NiObjectNET_SetName(CloneAndAttachModel3D, Src.m_data); /*0x4e1ef4*/
          v15 = 0xFFFFFFFF; /*0x4e1efa*/
          FormHeapFree((unsigned int)m_data); /*0x4e1f02*/
          v6 = SkinInfoByPerspective; /*0x4e1f07*/
          Src.m_data = 0; /*0x4e1f0e*/
          Src.m_bufLen = 0; /*0x4e1f12*/
          Src.m_dataLen = 0; /*0x4e1f17*/
        }
      }
      if ( this->vtbl->IsActor(this) ) /*0x4e1f2b*/
        Actor_RefreshQuiverArrowVisibility((Actor *)this, (ActorAnimData *)v6, 0); /*0x4e1f35*/
      if ( !--v12 ) /*0x4e1f3e*/
        break; /*0x4e1f3e*/
      v5 = reference; /*0x4e1e53*/
    }
    if ( this->vtbl->IsActor(this) ) /*0x4e1f4e*/
    {
      sub_5EA1A0((int)this, 1, (_DWORD *)this->member.niNode); /*0x4e1f5a*/
      sub_5EE1B0((Actor *)this, v2); /*0x4e1f61*/
    }
  }
}
