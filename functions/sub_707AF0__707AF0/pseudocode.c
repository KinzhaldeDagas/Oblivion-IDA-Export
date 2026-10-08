char __thiscall sub_707AF0(NiNode *this, int a2)
{
  char result; // al
  NiTList_Entry_NiProperty *start; // esi
  NiProperty *data; // ecx
  void *m_spCollision; // ecx

  result = sub_7000F0((NiRenderTargetGroup *)this, a2); /*0x707af9*/
  if ( result ) /*0x707b00*/
  {
    start = this->members.super.m_propertyList.start; /*0x707b08*/
    while ( start ) /*0x707b10*/
    {
      data = start->data; /*0x707b12*/
      start = start->next; /*0x707b1a*/
      if ( data ) /*0x707b1c*/
        (*((void (__thiscall **)(NiProperty *, int))data->vtbl + 9))(data, a2); /*0x707b24*/
    }
    m_spCollision = this->members.super.m_spCollision; /*0x707b2a*/
    if ( m_spCollision ) /*0x707b33*/
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)m_spCollision + 0x24))(m_spCollision, a2); /*0x707b3b*/
    return 1; /*0x707b3e*/
  }
  return result; /*0x707b02*/
}
