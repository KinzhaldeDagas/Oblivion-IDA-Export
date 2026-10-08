NiNode *__thiscall sub_447300(TESHealthForm **this)
{
  NiNode *result; // eax
  NiNode *i; // esi
  TESNPC *v3; // eax

  result = (NiNode *)TESHealthForm_GetHealth(*this); /*0x447303*/
  for ( i = result; result; i = result ) /*0x44730c*/
  {
    v3 = (TESNPC *)OblivionDynamicCast( /*0x44731f*/
                     i,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
                     &TESNPC `RTTI Type Descriptor',
                     0);
    if ( v3 ) /*0x447329*/
    {
      if ( (v3->member.super.actorBaseData.flags & 0x80) != 0 ) /*0x447334*/
        TESNPC_RecalculateAutoStats(v3, 0); /*0x44733a*/
    }
    result = (NiNode *)TESObject_GetNextObject(i); /*0x447341*/
  }
  return result; /*0x44734c*/
}
