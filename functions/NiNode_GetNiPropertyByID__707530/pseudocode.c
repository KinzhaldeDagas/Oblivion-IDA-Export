NiProperty *__thiscall NiNode_GetNiPropertyByID(NiNode *this, signed int a2)
{
  NiTList_Entry_NiProperty *start; // esi
  NiProperty *data; // edi

  if ( a2 >= 0xA )
    return 0;
  start = this->members.super.m_propertyList.start;
  if ( !start )
    return 0;
  while ( 1 )
  {
    data = start->data;
    start = start->next;
    if ( data )
    {
      if ( (*((int (__thiscall **)(NiProperty *))data->vtbl + 0x13))(data) == a2 )
        break;
    }
    if ( !start )
      return 0;
  }
  return data;
}
