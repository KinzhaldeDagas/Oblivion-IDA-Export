void __cdecl sub_7D92C0(NiNode *a1, int a2, float a3, int a4, float a5)
{
  NiProperty *NiPropertyByID; // esi
  int v6; // eax
  NiObject *v7; // eax
  NiObject *v8; // edi
  unsigned int m_uiRefCount_high; // ebp
  unsigned int i; // esi
  NiNode *v11; // eax

  if ( a1 )
  {
    if ( a1->vtbl->super.super.Unk_04((NiObject *)a1) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4);
      if ( NiPropertyByID )
      {
        if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
          && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA )
        {
          LOBYTE(NiPropertyByID[9].members.m_controller) = 0;
          v6 = (_BYTE)a4 != 0 ? 0x10000 : 0x8000;
          if ( (_BYTE)a2 )
            NiPropertyByID[1].members.super.m_uiRefCount |= v6;
          else
            NiPropertyByID[1].members.super.m_uiRefCount &= ~v6;
          *(float *)&NiPropertyByID[9].members.m_extraDataList = a3;
          NiPropertyByID[1].members.m_controller = 0;
          if ( (_BYTE)a4 )
            *(_DWORD *)&NiPropertyByID[9].members.m_extraDataListLen = Double_To_SInt32(a5);
        }
      }
    }
    else
    {
      v7 = a1->vtbl->super.super.Unk_02(a1);
      v8 = v7;
      if ( v7 )
      {
        m_uiRefCount_high = HIWORD(v7[0x16].members.m_uiRefCount);
        for ( i = 0; i < m_uiRefCount_high; ++i )
        {
          if ( HIWORD(v8[0x16].members.m_uiRefCount) > i )
          {
            v11 = *((NiNode **)&v8[0x16].__vftable->super.Destructor + i);
            if ( v11 )
              sub_7D92C0(v11, a2, a3, a4, a5);
          }
        }
      }
    }
  }
}
