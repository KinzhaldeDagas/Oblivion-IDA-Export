void __thiscall Actor_UpdateAnimationAndFirstPerson(PlayerCharacter *this)
{
  char v1; // bp
  double v2; // st4
  double v3; // st5
  double v4; // st6
  double v5; // st7
  ActorAnimData *defaultAnimData; // ecx
  unsigned int AnimGroup; // edi
  unsigned __int16 v9; // ax
  unsigned int v10; // edi
  NiAVObject *v11; // ecx

  sub_578CF0(v1, v3, v4, v5, v2, 0); /*0x664c45*/
  defaultAnimData = this->defaultAnimData; /*0x664c4a*/
  if ( defaultAnimData ) /*0x664c55*/
  {
    if ( ActorAnimData_IsIdleInactive(defaultAnimData) ) /*0x664c5b*/
    {
      AnimGroup = Actor_LoadAnimGroup_((Actor *)this, 0, 0, 0); /*0x664c7e*/
      if ( ActorAnimData_GetAnimGroupFromField8Value(this->defaultAnimData, 5) != (_WORD)AnimGroup || sub_578FA0() ) /*0x664c8b*/
        ActorAnimData_PlayAnimGroup(this->defaultAnimData, AnimGroup, 1u, 0xFFFFFFFF); /*0x664c9f*/
      if ( this->super.super.super.process->GetEquippedLightData(this->super.super.super.process, 1) ) /*0x664cb1*/
      {
        v9 = Actor_LoadAnimGroup_((Actor *)this, 0x21u, 0, 0); /*0x664cbf*/
        v10 = v9; /*0x664cc4*/
        if ( AnimKey_GetGroupID(v9) == 0x21 /*0x664ce7*/
          && (ActorAnimData_GetAnimGroupFromField8Value(this->defaultAnimData, 2) != (_WORD)v10 || sub_578FA0()) )
        {
          ActorAnimData_PlayAnimGroup(this->defaultAnimData, v10, 1u, 0xFFFFFFFF); /*0x664cfb*/
        }
      }
    }
    ActorAnimData_Update( /*0x664d1e*/
      this->defaultAnimData,
      (Actor *)this,
      *(float *)&MEMORY[0xB33E90][0xC],
      kTerrainLODQuadRayDirectionZ);
    ActorAnimData_ApplyToActor(this->defaultAnimData, (TESObjectREFR *)this); /*0x664d2a*/
    if ( this->unk5E0 ) /*0x664d2f*/
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->unk5E0 + 0x50))(*(float *)&MEMORY[0xB33E90][0xC]); /*0x664d4d*/
      v11 = *(NiAVObject **)(this->unk5E0 + 0x40); /*0x664d55*/
      if ( v11 ) /*0x664d5a*/
        NiAVObject_UpdateNiAVObject(v11, *(float *)&MEMORY[0xB33E90][0xC], 0); /*0x664d68*/
    }
  }
}
