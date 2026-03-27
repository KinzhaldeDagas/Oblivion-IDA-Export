bool __thiscall sub_5EC180(MobileObject *this)
{
  ActorAnimData *v2; // eax
  ActorAnimData *v3; // esi
  PowerListEntry *v4; // eax
  bool result; // al
  bhkCharacterProxy *CharProxy; // eax

  v2 = this->vtbl->super.GetAnimData((TESObjectREFR *)this);
  v3 = v2;
  result = 1;
  if ( !v2
    || !sub_4706E0(v2, 0)
    || (v4 = sub_4706E0(v3, 0), (unsigned int)(TESAnimGroup_GetAnimationGroup((TESAnimGroup *)v4[0xD].data) - 0x28) > 2) )
  {
    if ( !MobileObject_GetCharProxy(this) )
      return 0;
    CharProxy = MobileObject_GetCharProxy(this);
    if ( sub_88D370((_DWORD *)CharProxy + 0x78) != 2 )
      return 0;
  }
  return result;
}
