void __cdecl sub_4DE3C0(NiNode *a1, float a2)
{
  NiInterpController *i; // eax
  NiProperty *NiPropertyByID; // eax
  NiInterpController *j; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int k; // eax

  if ( a1 )
  {
    for ( i = a1->members.super.super.m_controller; i; i = (NiInterpController *)i->member.next )
      i->member.m_fPhase = a2;
    NiPropertyByID = NiNode_GetNiPropertyByID(a1, 6);
    if ( NiPropertyByID )
    {
      for ( j = NiPropertyByID->members.m_controller; j; j = (NiInterpController *)j->member.next )
        j->member.m_fPhase = a2;
    }
    v5 = (int)a1->vtbl->super.super.Unk_02((NiObject *)a1);
    v6 = v5;
    if ( v5 )
    {
      v7 = *(unsigned __int16 *)(v5 + 0xB6);
      v8 = 0;
      if ( *(_WORD *)(v6 + 0xB6) )
      {
        if ( v7 )
          goto LABEL_11;
        for ( k = 0; ; k = *(_DWORD *)(*(_DWORD *)(v6 + 0xB0) + 4 * v8) )
        {
          sub_4DE3C0(k, a2);
          if ( *(unsigned __int16 *)(v6 + 0xB6) <= (unsigned int)++v8 )
            break;
LABEL_11:
          ;
        }
      }
    }
  }
}
