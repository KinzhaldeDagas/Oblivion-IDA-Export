//
// DX11 generic-bank audit 2026-10-01: local first-match property lookup. Reads object+9C list head; next=node+0, data=node+8; skips null data and compares virtual+4C to requested ID. Does not read the stored list count or search ancestors. Returns first matching property even if its shader subtype later fails caller7A9820 type1..10 admission.
NiProperty *__thiscall NiNode_GetNiPropertyByID(NiNode *this, signed int a2)
{
  NiTList_Entry_NiProperty *start; // esi
  NiProperty *data; // edi

  if ( a2 >= 0xA ) /*0x707538*/
    return 0; /*0x70753a*/
  start = this->members.super.m_propertyList.start; /*0x707541*/
  if ( !start ) /*0x70754a*/
    return 0; /*0x70756d*/
  while ( 1 ) /*0x707550*/
  {
    data = start->data; /*0x707550*/
    start = start->next; /*0x707558*/
    if ( data ) /*0x70755a*/
    {
      if ( (*((int (__thiscall **)(NiProperty *))data->vtbl + 0x13))(data) == a2 ) /*0x707567*/
        break; /*0x707567*/
    }
    if ( !start ) /*0x70756b*/
      return 0; /*0x70756b*/
  }
  return data; /*0x70753c*/
}
