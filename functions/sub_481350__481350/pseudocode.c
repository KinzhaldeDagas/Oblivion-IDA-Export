void __cdecl sub_481350(NiNode *a1)
{
  NiProperty *NiPropertyByID; // esi
  BOOL v2; // eax
  int v3; // edi
  NiObject *v4; // eax
  NiObject *v5; // edi
  int m_uiRefCount_high; // eax
  int v7; // esi
  NiNode *i; // eax

  if ( a1 )
  {
    if ( a1->vtbl->super.super.Unk_04((NiObject *)a1) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4); /*0x481374*/
      if ( NiPropertyByID )
      {
        v2 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1 /*0x4813a1*/
          && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
        v3 = v2 ? (unsigned int)NiPropertyByID : 0;
        if ( v3 ) /*0x4813ab*/
        {
          (*((void (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID); /*0x4813b4*/
          sub_67AB40((int *)&qword_B3BB2C[0x75], v3); /*0x4813bc*/
        }
      }
    }
    else
    {
      v4 = a1->vtbl->super.super.Unk_02(a1); /*0x4813c9*/
      v5 = v4; /*0x4813cb*/
      if ( v4 ) /*0x4813cf*/
      {
        m_uiRefCount_high = HIWORD(v4[0x16].members.m_uiRefCount); /*0x4813d1*/
        v7 = 0; /*0x4813d8*/
        if ( HIWORD(v5[0x16].members.m_uiRefCount) ) /*0x4813d1*/
        {
          if ( m_uiRefCount_high ) /*0x4813e0*/
            goto LABEL_14; /*0x4813e0*/
          for ( i = 0; ; i = *((NiNode **)&v5[0x16].__vftable->super.Destructor + v7) ) /*0x4813e2*/
          {
            sub_481350(i); /*0x4813f0*/
            if ( HIWORD(v5[0x16].members.m_uiRefCount) <= (unsigned int)++v7 ) /*0x481404*/
              break; /*0x481404*/
LABEL_14:
            ; /*0x4813e6*/
          }
        }
      }
    }
  }
}
