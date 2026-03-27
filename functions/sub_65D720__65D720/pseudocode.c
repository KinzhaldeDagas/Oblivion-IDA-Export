BSExtraDataVtbl *__thiscall sub_65D720(TESObjectREFR *this)
{
  BSExtraDataVtbl *result; // eax

  result = *((BSExtraDataVtbl **)this + 0x177);
  if ( !result )
  {
    if ( *((_BYTE *)this + 0x588) )
      return TESObjectREFR_GetAnimData((Actor *)this);
    result = *((BSExtraDataVtbl **)this + 0x173);
    if ( !result )
      return TESObjectREFR_GetAnimData((Actor *)this);
  }
  return result;
}
