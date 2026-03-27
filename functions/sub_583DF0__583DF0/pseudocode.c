NiProperty *__cdecl sub_583DF0(signed int a1)
{
  NiProperty *result; // eax
  NiNode *v2; // ecx

  result = *((NiProperty **)InterfaceManagerPtr->cursor + 9);
  if ( result )
  {
    if ( HIWORD(result[7].members.m_controller) )
    {
      v2 = *(NiNode **)result[7].members.m_pcName;
      if ( v2 )
      {
        result = NiNode_GetNiPropertyByID(v2, 2);
        if ( result )
        {
          ++result[3].members.m_controller;
          *(float *)&result[3].members.m_pcName = (float)a1;
        }
      }
    }
  }
  return result;
}
