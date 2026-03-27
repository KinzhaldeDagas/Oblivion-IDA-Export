unsigned int __cdecl sub_4B1580(int a1)
{
  unsigned int result; // eax
  unsigned int i; // edi
  NiNode *v3; // esi
  NiProperty *NiPropertyByID; // eax
  int v5; // ecx

  result = *(unsigned __int16 *)(a1 + 0xB6);
  for ( i = 0; result > i; ++i )
  {
    v3 = *(NiNode **)(*(_DWORD *)(a1 + 0xB0) + 4 * i);
    if ( v3 )
    {
      if ( v3->vtbl->super.super.Unk_02((NiObject *)v3) )
      {
        sub_4B1580((int)v3);
      }
      else
      {
        NiPropertyByID = NiNode_GetNiPropertyByID(v3, 2);
        if ( NiPropertyByID )
        {
          NiPropertyByID[2].members.m_extraDataList = (NiExtraData **)dword_B3FA90;
          *(_DWORD *)&NiPropertyByID[2].members.m_extraDataListLen = dword_B3FA94;
          v5 = dword_B3FA98;
          ++NiPropertyByID[3].members.m_controller;
          NiPropertyByID[3].vtbl = (void **)v5;
        }
      }
    }
    result = *(unsigned __int16 *)(a1 + 0xB6);
  }
  return result;
}
