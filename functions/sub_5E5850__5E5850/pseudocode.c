double __thiscall sub_5E5850(TESObjectREFR *this, unsigned int groupID)
{
  int v3; // eax
  ActorAnimData *v4; // eax
  CAS_TESAnimGroup_Decoded *AnimGroupForKey; // eax
  int v7; // [esp-8h] [ebp-10h]
  float v8; // [esp+4h] [ebp-4h]

  v8 = 0.0; /*0x5e5856*/
  if ( this->vtbl->GetAnimData(this) ) /*0x5e5862*/
  {
    if ( Actor_LoadAnimGroup_((Actor *)this, groupID, 0, 0) ) /*0x5e5874*/
    {
      LOWORD(v3) = Actor_LoadAnimGroup_((Actor *)this, groupID, 0, 0); /*0x5e5885*/
      v7 = v3; /*0x5e588c*/
      v4 = this->vtbl->GetAnimData(this); /*0x5e5895*/
      AnimGroupForKey = (CAS_TESAnimGroup_Decoded *)ActorAnimData_GetAnimGroupForKey(v4, v7); /*0x5e5899*/
      if ( AnimGroupForKey ) /*0x5e58a0*/
        return TESAnimGroup_GetRequiredNoteTime(AnimGroupForKey, 1); /*0x5e58ab*/
    }
  }
  return v8; /*0x5e58b4*/
}
