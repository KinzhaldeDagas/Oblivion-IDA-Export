unsigned int __cdecl sub_4B1580(int a1)
{
  unsigned int result; // eax
  unsigned int i; // edi
  NiNode *v3; // esi
  NiProperty *NiPropertyByID; // eax
  float v5; // ecx

  result = *(unsigned __int16 *)(a1 + 0xB6); /*0x4b1585*/
  for ( i = 0; result > i; ++i ) /*0x4b1585*/
  {
    v3 = *(NiNode **)(*(_DWORD *)(a1 + 0xB0) + 4 * i); /*0x4b159e*/
    if ( v3 ) /*0x4b15a3*/
    {
      if ( v3->vtbl->super.super.Unk_02((NiObject *)v3) ) /*0x4b15ac*/
      {
        sub_4B1580((int)v3); /*0x4b15b3*/
      }
      else
      {
        NiPropertyByID = NiNode_GetNiPropertyByID(v3, 2); /*0x4b15c1*/
        if ( NiPropertyByID ) /*0x4b15c8*/
        {
          *(float *)&NiPropertyByID[2].members.m_extraDataList = MEMORY[0xB3F9B0][0x38]; /*0x4b15d0*/
          *(float *)&NiPropertyByID[2].members.m_extraDataListLen = MEMORY[0xB3F9B0][0x39]; /*0x4b15d9*/
          v5 = MEMORY[0xB3F9B0][0x3A]; /*0x4b15dc*/
          ++NiPropertyByID[3].members.m_controller; /*0x4b15e2*/
          *(float *)&NiPropertyByID[3].vtbl = v5; /*0x4b15e6*/
        }
      }
    }
    result = *(unsigned __int16 *)(a1 + 0xB6); /*0x4b15e9*/
  }
  return result; /*0x4b15f8*/
}
