void __cdecl sub_7B7F00(NiNode *a1, const char *a2)
{
  NiProperty *NiPropertyByID; // eax
  void **vtlb; // edi
  NiProperty *v4; // esi
  unsigned int i; // esi
  int v6; // eax

  if ( a1 )
  {
    if ( a1->vtbl->super.super.Unk_03((NiObject *)a1) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4);
      vtlb = a1->members.effects.vtlb;
      if ( NiPropertyByID )
        v4 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) != 0xFFFFFFFF
           ? NiPropertyByID
           : 0;
      else
        v4 = 0;
      if ( vtlb )
        (*((void (__thiscall **)(void **))*vtlb + 7))(vtlb);
      if ( v4 )
      {
        if ( vtlb )
          v4[4].members.m_pcName = a2;
      }
    }
    else if ( a1->vtbl->super.super.Unk_02((NiObject *)a1) )
    {
      for ( i = 0; a1->members.children.end > i; ++i )
      {
        v6 = *((_DWORD *)&a1->members.children.data->vtbl + i);
        if ( v6 )
          sub_7B7F00(v6, (int)a2);
      }
    }
  }
}
