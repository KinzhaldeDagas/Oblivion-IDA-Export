void __cdecl sub_4A2A90(int a1, float a2)
{
  int v2; // ecx
  unsigned int v3; // ebx
  NiNode *v4; // ebp
  NiProperty *NiPropertyByID; // eax
  NiProperty *v6; // eax
  NiProperty *v7; // edi
  NiProperty *v8; // esi
  int v9; // eax
  NiProperty *v10; // eax
  int v11; // eax

  v2 = a1;
  if ( a1 )
  {
    v3 = 0;
    if ( *(_WORD *)(a1 + 0xB6) )
    {
      do
      {
        v4 = *(NiNode **)(*(_DWORD *)(v2 + 0xB0) + 4 * v3);
        if ( v4 )
        {
          NiPropertyByID = NiNode_GetNiPropertyByID(v4, 2);
          if ( NiPropertyByID )
          {
            if ( a2 != *(float *)&NiPropertyByID[3].members.m_pcName )
            {
              ++NiPropertyByID[3].members.m_controller;
              *(float *)&NiPropertyByID[3].members.m_pcName = a2;
            }
          }
          v6 = NiNode_GetNiPropertyByID(v4, 4);
          v7 = v6;
          if ( v6 )
          {
            v9 = (*((int (__thiscall **)(NiProperty *))v6->vtbl + 0x15))(v6);
            v8 = v9 != 0xFFFFFFFF ? v7 : 0;
            if ( v8 )
              sub_7E2430(v9 != 0xFFFFFFFF ? (unsigned int)v7 : 0, a2);
          }
          else
          {
            v8 = 0;
          }
          v10 = NiNode_GetNiPropertyByID(v4, 0);
          if ( a2 >= 1.0 )
          {
            if ( v8 )
            {
              if ( (v8[1].members.super.m_uiRefCount & 0x40) == 0 )
              {
                if ( v10 )
                  LOWORD(v10[1].vtbl) &= ~1u;
              }
            }
          }
          else if ( v10 )
          {
            LOWORD(v10[1].vtbl) |= 1u;
          }
          v11 = (int)v4->vtbl->super.super.Unk_02((NiObject *)v4);
          sub_4A2A90(v11, a2);
          v2 = a1;
        }
        ++v3;
      }
      while ( *(unsigned __int16 *)(v2 + 0xB6) > v3 );
    }
  }
}
