int __thiscall sub_484D70(ExtraDataList ***this)
{
  ExtraDataList **v2; // eax
  int v3; // ebx
  ExtraDataList *v4; // esi
  int ExtraSoul; // eax
  int result; // eax
  _BYTE *v7; // eax
  unsigned __int8 v8; // al

  v2 = *this;
  v3 = 0xFFFFFFFF;
  if ( !*this
    || (v4 = *v2) == 0
    || !ExtraDataList_GetExtraSoul(*v2)
    || (ExtraSoul = ExtraDataList_GetExtraSoul(v4),
        result = Actor::GetSoulValueFromLevel(ExtraSoul),
        v3 = result,
        result == 0xFFFFFFFF) )
  {
    v7 = OblivionDynamicCast(
           *(this + 2),
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESSoulGem `RTTI Type Descriptor',
           0);
    if ( v7 && (v8 = v7[0x70]) != 0 )
      return Actor::GetSoulValueFromLevel(v8);
    else
      return v3;
  }
  return result;
}
