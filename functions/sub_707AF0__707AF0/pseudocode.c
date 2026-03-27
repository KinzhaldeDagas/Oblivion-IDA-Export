char __thiscall sub_707AF0(NiNode *this, int a2)
{
  char result; // al
  NiTList_Entry_NiProperty *start; // esi
  NiProperty *data; // ecx
  void *m_spCollision; // ecx

  result = sub_7000F0((NiRenderTargetGroup *)this, a2);
  if ( result )
  {
    start = this->members.super.m_propertyList.start;
    while ( start )
    {
      data = start->data;
      start = start->next;
      if ( data )
        (*((void (__thiscall **)(NiProperty *, int))data->vtbl + 9))(data, a2);
    }
    m_spCollision = this->members.super.m_spCollision;
    if ( m_spCollision )
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)m_spCollision + 0x24))(m_spCollision, a2);
    return 1;
  }
  return result;
}
