void __cdecl sub_7B7F00(NiNode *a1, const char *a2)
{
  NiProperty *NiPropertyByID; // eax
  void **vtlb; // edi
  NiProperty *v4; // esi
  unsigned int i; // esi
  NiNode *v6; // eax

  if ( a1 )
  {
    if ( a1->vtbl->super.super.Unk_03((NiObject *)a1) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4); /*0x7b7f20*/
      vtlb = a1->members.effects.vtlb; /*0x7b7f25*/
      if ( NiPropertyByID )
        v4 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) != 0xFFFFFFFF
           ? NiPropertyByID
           : 0;
      else
        v4 = 0; /*0x7b7f31*/
      if ( vtlb ) /*0x7b7f4b*/
        (*((void (__thiscall **)(void **))*vtlb + 7))(vtlb); /*0x7b7f54*/
      if ( v4 ) /*0x7b7f58*/
      {
        if ( vtlb ) /*0x7b7f5c*/
          v4[4].members.m_pcName = a2; /*0x7b7f62*/
      }
    }
    else if ( a1->vtbl->super.super.Unk_02(a1) ) /*0x7b7f6e*/
    {
      for ( i = 0; a1->members.children.end > i; ++i ) /*0x7b7f74*/
      {
        v6 = (NiNode *)a1->members.children.data[i]; /*0x7b7f8f*/
        if ( v6 ) /*0x7b7f94*/
          sub_7B7F00(v6, a2); /*0x7b7f98*/
      }
    }
  }
}
