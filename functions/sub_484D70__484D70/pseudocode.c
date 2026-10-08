int __thiscall sub_484D70(ExtraDataList ***this)
{
  ExtraDataList **v2; // eax
  int v3; // ebx
  ExtraDataList *v4; // esi
  int ExtraSoul; // eax
  int result; // eax
  _BYTE *v7; // eax
  unsigned __int8 v8; // al

  v2 = *this; /*0x484d75*/
  v3 = 0xFFFFFFFF; /*0x484d77*/
  if ( !*this /*0x484da4*/
    || (v4 = *v2) == 0
    || !ExtraDataList_GetExtraSoul(*v2)
    || (ExtraSoul = ExtraDataList_GetExtraSoul(v4),
        result = Actor::GetSoulValueFromLevel(ExtraSoul),
        v3 = result,
        result == 0xFFFFFFFF) )
  {
    v7 = OblivionDynamicCast( /*0x484db8*/
           *(this + 2),
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESSoulGem `RTTI Type Descriptor',
           0);
    if ( v7 && (v8 = v7[0x70]) != 0 ) /*0x484dc9*/
      return Actor::GetSoulValueFromLevel(v8); /*0x484dcf*/
    else
      return v3; /*0x484ddb*/
  }
  return result; /*0x484dd7*/
}
