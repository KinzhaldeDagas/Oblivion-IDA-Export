bool __thiscall sub_4DE880(TESObjectREFR *this, BSExtraDataVtbl *a2)
{
  BSExtraDataVtbl *Owner; // eax
  char CompareTo; // cl
  bool result; // al
  char v5; // al
  bool v6; // zf

  Owner = a2;
  if ( !a2 )
  {
    Owner = TESObjectREFR_GetOwner(this);
    if ( !Owner )
      return 0;
  }
  CompareTo = (char)Owner->CompareTo;
  if ( CompareTo == 6 )
    return ((int)Owner[6].CompareTo & 2) != 0;
  if ( CompareTo != 0x23 )
    return 0;
  TESActorBaseData_AllFactionsAreEvil(&Owner[4].CompareTo);
  v6 = v5 == 0;
  result = 1;
  if ( v6 )
    return 0;
  return result;
}
