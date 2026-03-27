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

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESFaction `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3 )
    return 1;
  if ( TESForm_CompareAllComponentsTo(this, v3) )
    return 1;
  v6 = *((unsigned __int8 *)this + 0x34) - (unsigned __int8)v4[2].member.type;
  if ( v6 )
  {
    v7 = 1;
    if ( v6 <= 0 )
      v7 = 0xFFFFFFFF;
  }
  else
  {
    v7 = 0;
  }
  if ( v7 || *(float *)&v4[2].member.flags != *((float *)this + 0xE) )
    return 1;
  next = (BSSimpleList_VoidPtr *)((char *)this + 0x3C);
  p_refID = (BSSimpleList_VoidPtr *)&v4[2].member.refID;
  v14 = next;
  for ( i = p_refID; next; p_refID = i )
  {
    if ( BSSimpleList_IsEmpty(next) )
      break;
    if ( !p_refID )
      return 1;
    data = (BSStringT *)p_refID->firstNode.data;
    if ( !data )
      return 1;
    v11 = (BSStringT *)next->firstNode.data;
    if ( BSStringT_GetLen((BSStringT *)next->firstNode.data) || BSStringT_GetLen(data) )
    {
      Len = BSStringT_GetLen(data);
      if ( BSStringT_GetLen(v11) != Len || BSStringT_StrCmp__(&v11->m_data, data->m_data, 0) )
        return 1;
    }
    if ( BSStringT_GetLen(v11 + 1) || BSStringT_GetLen(data + 1) )
    {
      v13 = BSStringT_GetLen(data + 1);
      if ( BSStringT_GetLen(v11 + 1) != v13 || BSStringT_StrCmp__(&v11[1].m_data, data[1].m_data, 0) )
        return 1;
      next = v14;
    }
    if ( (*((unsigned __int8 (__thiscall **)(BSStringT *, BSStringT *))v11[2].m_data + 3))(v11 + 2, data + 2) )
      return 1;
    next = (BSSimpleList_VoidPtr *)next->firstNode.next;
    v14 = next;
    i = (BSSimpleList_VoidPtr *)i->firstNode.next;
  }
  return p_refID && !BSSimpleList_IsEmpty(p_refID);
}
