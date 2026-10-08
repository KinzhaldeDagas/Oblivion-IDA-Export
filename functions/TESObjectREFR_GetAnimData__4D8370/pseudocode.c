// Return active ActorAnimData for an actor reference. For actor/creature refs with process level 0 or 1, return process+0x17C; otherwise tail-call the ExtraAnim lookup on the reference extra list. Exact return type is ActorAnimData*.
ActorAnimData *__thiscall TESObjectREFR_GetAnimData(TESObjectREFR *this)
{
  int v2; // ecx

  if ( (unsigned int)this->member.super.type - 0x32 <= 1 /*0x4d8390*/
    && (v2 = *((_DWORD *)this + 0x16)) != 0
    && (unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2) <= 1 )
  {
    return *(ActorAnimData **)(*((_DWORD *)this + 0x16) + 0x17C); /*0x4d8395*/
  }
  else
  {
    return (ActorAnimData *)BaseExtraList_GetAnimExtraData_(&this->member.baseExtraList); /*0x4d83a1*/
  }
}
