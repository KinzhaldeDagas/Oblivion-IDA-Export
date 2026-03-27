NiNode *__thiscall sub_447300(Sky **this)
{
  NiNode *result; // eax
  NiNode *i; // esi
  TESForm *v3; // eax

  result = TESHealthForm_GetHealth(*this);
  for ( i = result; result; i = result )
  {
    v3 = (TESForm *)OblivionDynamicCast(
                      i,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
                      &TESNPC `RTTI Type Descriptor',
                      0);
    if ( v3 )
    {
      if ( ((int)v3[1].member.modlist.data & 0x80) != 0 )
        sub_5222D0(v3, 0);
    }
    result = (NiNode *)TESObject_GetNextObject(i);
  }
  return result;
}
