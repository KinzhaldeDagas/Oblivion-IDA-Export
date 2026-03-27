void __cdecl sub_481410(NiNode *a1, const char *a2)
{
  NiProperty *NiPropertyByID; // esi
  BOOL v3; // eax
  NiProperty *v4; // eax
  NiObject *v5; // eax
  NiObject *v6; // edi
  int m_uiRefCount_high; // eax
  int v8; // esi
  NiNode *i; // eax

  if ( a1 )
  {
    if ( a1->vtbl->super.super.Unk_03((NiObject *)a1) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4);
      v3 = NiPropertyByID
        && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1
        && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
      v4 = v3 ? NiPropertyByID : 0;
      if ( v4 )
        v4[6].members.m_pcName = a2;
    }
    else
    {
      v5 = a1->vtbl->super.super.Unk_02(a1);
      v6 = v5;
      if ( v5 )
      {
        m_uiRefCount_high = HIWORD(v5[0x16].members.m_uiRefCount);
        v8 = 0;
        if ( HIWORD(v6[0x16].members.m_uiRefCount) )
        {
          if ( m_uiRefCount_high )
            goto LABEL_14;
          for ( i = 0; ; i = *((NiNode **)&v6[0x16].__vftable->super.Destructor + v8) )
          {
            sub_481410(i, a2);
            if ( HIWORD(v6[0x16].members.m_uiRefCount) <= (unsigned int)++v8 )
              break;
LABEL_14:
            ;
          }
        }
      }
    }
  }
}
