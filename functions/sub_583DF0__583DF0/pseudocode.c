NiProperty *__cdecl sub_583DF0(signed int a1)
{
  NiProperty *result; // eax
  NiNode *v2; // ecx

  result = *((NiProperty **)MEMORY[0xB3A6E0]->cursor + 9); /*0x583df8*/
  if ( result ) /*0x583dfd*/
  {
    if ( HIWORD(result[7].members.m_controller) ) /*0x583dff*/
    {
      v2 = *(NiNode **)result[7].members.m_pcName; /*0x583e0f*/
      if ( v2 ) /*0x583e13*/
      {
        result = NiNode_GetNiPropertyByID(v2, 2); /*0x583e17*/
        if ( result ) /*0x583e1e*/
        {
          ++result[3].members.m_controller; /*0x583e24*/
          *(float *)&result[3].members.m_pcName = (float)a1; /*0x583e28*/
        }
      }
    }
  }
  return result; /*0x583e2b*/
}
