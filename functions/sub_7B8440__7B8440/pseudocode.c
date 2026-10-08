NiObject *__cdecl sub_7B8440(NiNode *a1, float a2)
{
  NiProperty *NiPropertyByID; // esi
  BOOL v3; // eax
  NiProperty *v4; // eax
  NiObject *result; // eax
  unsigned int v6; // esi
  NiNode *v7; // eax

  NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4); /*0x7b844f*/
  if ( NiPropertyByID )
  {
    v3 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1 /*0x7b8478*/
      && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
    v4 = v3 ? NiPropertyByID : 0;
    if ( v4 ) /*0x7b8480*/
      *(float *)&v4[6].members.super.m_uiRefCount = a2; /*0x7b8486*/
  }
  result = a1->vtbl->super.super.Unk_02(a1); /*0x7b8493*/
  if ( result ) /*0x7b8497*/
  {
    result = (NiObject *)a1->members.children.end; /*0x7b8499*/
    v6 = 0; /*0x7b84a0*/
    if ( a1->members.children.end ) /*0x7b8499*/
    {
      do /*0x7b84d4*/
      {
        v7 = (NiNode *)a1->members.children.data[v6]; /*0x7b84b0*/
        if ( v7 ) /*0x7b84b5*/
          sub_7B8440(v7, a2); /*0x7b84c0*/
        result = (NiObject *)a1->members.children.end; /*0x7b84c8*/
        ++v6; /*0x7b84cf*/
      }
      while ( (unsigned int)result > v6 ); /*0x7b84d4*/
    }
  }
  return result; /*0x7b84d6*/
}
