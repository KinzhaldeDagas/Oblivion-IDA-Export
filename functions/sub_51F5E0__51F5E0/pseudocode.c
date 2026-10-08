bool __thiscall sub_51F5E0(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  int v6; // eax
  int v7; // ecx
  BSSimpleList_VoidPtr *next; // ebp
  BSSimpleList_VoidPtr *p_refID; // esi
  BSStringT *data; // esi
  BSStringT *v11; // ebx
  unsigned int Len; // edi
  unsigned int v13; // ebp
  BSSimpleList_VoidPtr *v14; // [esp+8h] [ebp-4h]
  BSSimpleList_VoidPtr *i; // [esp+10h] [ebp+4h]

  v3 = (TESForm *)OblivionDynamicCast( /*0x51f5f8*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESFaction `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x51f5fd*/
  if ( !v3 ) /*0x51f604*/
    return 1; /*0x51f604*/
  if ( TESForm_CompareAllComponentsTo(this, v3) ) /*0x51f611*/
    return 1; /*0x51f611*/
  v6 = *((unsigned __int8 *)this + 0x34) - (unsigned __int8)v4[2].member.type; /*0x51f622*/
  if ( v6 ) /*0x51f624*/
  {
    v7 = 1; /*0x51f628*/
    if ( v6 <= 0 ) /*0x51f62d*/
      v7 = 0xFFFFFFFF; /*0x51f62f*/
  }
  else
  {
    v7 = 0; /*0x51f634*/
  }
  if ( v7 || *(float *)&v4[2].member.flags != *((float *)this + 0xE) ) /*0x51f647*/
    return 1; /*0x51f607*/
  next = (BSSimpleList_VoidPtr *)((char *)this + 0x3C); /*0x51f649*/
  p_refID = (BSSimpleList_VoidPtr *)&v4[2].member.refID; /*0x51f64c*/
  v14 = next; /*0x51f653*/
  for ( i = p_refID; next; p_refID = i ) /*0x51f65b*/
  {
    if ( BSSimpleList_IsEmpty(next) ) /*0x51f663*/
      break; /*0x51f66a*/
    if ( !p_refID ) /*0x51f672*/
      return 1; /*0x51f672*/
    data = (BSStringT *)p_refID->firstNode.data; /*0x51f678*/
    if ( !data ) /*0x51f67c*/
      return 1; /*0x51f67c*/
    v11 = (BSStringT *)next->firstNode.data; /*0x51f682*/
    if ( BSStringT_GetLen((BSStringT *)next->firstNode.data) || BSStringT_GetLen(data) ) /*0x51f692*/
    {
      Len = BSStringT_GetLen(data); /*0x51f6a4*/
      if ( BSStringT_GetLen(v11) != Len || BSStringT_StrCmp__((const char **)&v11->m_data, data->m_data, 0) ) /*0x51f6ba*/
        return 1; /*0x51f6c1*/
    }
    if ( BSStringT_GetLen(v11 + 1) || BSStringT_GetLen(data + 1) ) /*0x51f6d8*/
    {
      v13 = BSStringT_GetLen(data + 1); /*0x51f6eb*/
      if ( BSStringT_GetLen(v11 + 1) != v13 || BSStringT_StrCmp__((const char **)&v11[1].m_data, data[1].m_data, 0) ) /*0x51f6fe*/
        return 1; /*0x51f705*/
      next = v14; /*0x51f707*/
    }
    if ( (*((unsigned __int8 (__thiscall **)(BSStringT *, BSStringT *))v11[2].m_data + 3))(v11 + 2, data + 2) ) /*0x51f718*/
      return 1; /*0x51f71c*/
    next = (BSSimpleList_VoidPtr *)next->firstNode.next; /*0x51f722*/
    v14 = next; /*0x51f72a*/
    i = (BSSimpleList_VoidPtr *)i->firstNode.next; /*0x51f72e*/
  }
  return p_refID && !BSSimpleList_IsEmpty(p_refID); /*0x51f756*/
}
