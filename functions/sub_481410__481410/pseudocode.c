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
      NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4); /*0x481433*/
      v3 = NiPropertyByID /*0x481455*/
        && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1
        && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
      v4 = v3 ? NiPropertyByID : 0;
      if ( v4 ) /*0x481464*/
        v4[6].members.m_pcName = a2; /*0x48146a*/
    }
    else
    {
      v5 = a1->vtbl->super.super.Unk_02(a1); /*0x481478*/
      v6 = v5; /*0x48147a*/
      if ( v5 ) /*0x48147e*/
      {
        m_uiRefCount_high = HIWORD(v5[0x16].members.m_uiRefCount); /*0x481480*/
        v8 = 0; /*0x481487*/
        if ( HIWORD(v6[0x16].members.m_uiRefCount) ) /*0x481480*/
        {
          if ( m_uiRefCount_high ) /*0x481494*/
            goto LABEL_14; /*0x481494*/
          for ( i = 0; ; i = *((NiNode **)&v6[0x16].__vftable->super.Destructor + v8) ) /*0x481496*/
          {
            sub_481410(i, a2); /*0x4814a5*/
            if ( HIWORD(v6[0x16].members.m_uiRefCount) <= (unsigned int)++v8 ) /*0x4814b9*/
              break; /*0x4814b9*/
LABEL_14:
            ; /*0x48149a*/
          }
        }
      }
    }
  }
}
