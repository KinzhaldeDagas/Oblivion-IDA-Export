void __cdecl sub_4DE3C0(NiNode *a1, float a2)
{
  NiInterpController *i; // eax
  NiProperty *NiPropertyByID; // eax
  NiInterpController *j; // eax
  NiObject *v5; // eax
  NiObject *v6; // edi
  int m_uiRefCount_high; // eax
  int v8; // esi
  NiNode *k; // eax

  if ( a1 ) /*0x4de3c7*/
  {
    for ( i = a1->members.super.super.m_controller; i; i = (NiInterpController *)i->member.next ) /*0x4de3d6*/
      i->member.m_fPhase = a2; /*0x4de3d8*/
    NiPropertyByID = NiNode_GetNiPropertyByID(a1, 6); /*0x4de3e8*/
    if ( NiPropertyByID ) /*0x4de3ef*/
    {
      for ( j = NiPropertyByID->members.m_controller; j; j = (NiInterpController *)j->member.next ) /*0x4de3f6*/
        j->member.m_fPhase = a2; /*0x4de3fc*/
    }
    v5 = a1->vtbl->super.super.Unk_02(a1); /*0x4de410*/
    v6 = v5; /*0x4de412*/
    if ( v5 ) /*0x4de416*/
    {
      m_uiRefCount_high = HIWORD(v5[0x16].members.m_uiRefCount); /*0x4de418*/
      v8 = 0; /*0x4de41f*/
      if ( HIWORD(v6[0x16].members.m_uiRefCount) ) /*0x4de418*/
      {
        if ( m_uiRefCount_high ) /*0x4de427*/
          goto LABEL_11; /*0x4de427*/
        for ( k = 0; ; k = *((NiNode **)&v6[0x16].__vftable->super.Destructor + v8) ) /*0x4de429*/
        {
          sub_4DE3C0(k, a2); /*0x4de43f*/
          if ( HIWORD(v6[0x16].members.m_uiRefCount) <= (unsigned int)++v8 ) /*0x4de453*/
            break; /*0x4de453*/
LABEL_11:
          ; /*0x4de42d*/
        }
      }
    }
  }
}
