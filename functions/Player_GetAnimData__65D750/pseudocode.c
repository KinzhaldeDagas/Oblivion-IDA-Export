void *__thiscall Player_GetAnimData(Actor *this, char a2)
{
  if ( a2 )
    return *((void **)this + 0x173);
  else
    return TESObjectREFR_GetAnimData(this);
}
