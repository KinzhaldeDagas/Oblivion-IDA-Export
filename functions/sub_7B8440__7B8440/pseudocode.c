unsigned int __cdecl sub_7B8440(NiNode *a1, float a2)
{
  NiProperty *NiPropertyByID; // esi
  BOOL v3; // eax
  NiProperty *v4; // eax
  unsigned int result; // eax
  unsigned int i; // esi
  int v7; // eax

  NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4);
  if ( NiPropertyByID )
  {
    v3 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1
      && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
    v4 = v3 ? NiPropertyByID : 0;
    if ( v4 )
      *(float *)&v4[6].members.super.m_uiRefCount = a2;
  }
  result = (unsigned int)a1->vtbl->super.super.Unk_02((NiObject *)a1);
  if ( result )
  {
    result = a1->members.children.end;
    for ( i = 0; result > i; ++i )
    {
      v7 = *((_DWORD *)&a1->members.children.data->vtbl + i);
      if ( v7 )
        sub_7B8440(v7, a2);
      result = a1->members.children.end;
    }
  }
  return result;
}
