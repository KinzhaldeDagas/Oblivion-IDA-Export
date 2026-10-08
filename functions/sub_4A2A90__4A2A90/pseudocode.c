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

  v2 = a1; /*0x4a2a90*/
  if ( a1 )
  {
    v3 = 0; /*0x4a2aa4*/
    if ( *(_WORD *)(a1 + 0xB6) )
    {
      do
      {
        v4 = *(NiNode **)(*(_DWORD *)(v2 + 0xB0) + 4 * v3); /*0x4a2abf*/
        if ( v4 )
        {
          NiPropertyByID = NiNode_GetNiPropertyByID(v4, 2); /*0x4a2ace*/
          if ( NiPropertyByID ) /*0x4a2ad7*/
          {
            if ( a2 != *(float *)&NiPropertyByID[3].members.m_pcName ) /*0x4a2aeb*/
            {
              ++NiPropertyByID[3].members.m_controller; /*0x4a2aed*/
              *(float *)&NiPropertyByID[3].members.m_pcName = a2; /*0x4a2af1*/
            }
          }
          v6 = NiNode_GetNiPropertyByID(v4, 4); /*0x4a2afc*/
          v7 = v6; /*0x4a2b01*/
          if ( v6 )
          {
            v9 = (*((int (__thiscall **)(NiProperty *))v6->vtbl + 0x15))(v6); /*0x4a2b12*/
            v8 = v9 != 0xFFFFFFFF ? v7 : 0;
            if ( v8 )
              sub_7E2430(v9 != 0xFFFFFFFF ? (unsigned int)v7 : 0, a2);
          }
          else
          {
            v8 = 0; /*0x4a2b07*/
          }
          v10 = NiNode_GetNiPropertyByID(v4, 0); /*0x4a2b34*/
          if ( a2 >= 1.0 ) /*0x4a2b4a*/
          {
            if ( v8 ) /*0x4a2b59*/
            {
              if ( (v8[1].members.super.m_uiRefCount & 0x40) == 0 ) /*0x4a2b5f*/
              {
                if ( v10 ) /*0x4a2b63*/
                  LOWORD(v10[1].vtbl) &= ~1u; /*0x4a2b65*/
              }
            }
          }
          else if ( v10 ) /*0x4a2b4e*/
          {
            LOWORD(v10[1].vtbl) |= 1u; /*0x4a2b50*/
          }
          v11 = (int)v4->vtbl->super.super.Unk_02((NiObject *)v4); /*0x4a2b77*/
          sub_4A2A90(v11, a2); /*0x4a2b7a*/
          v2 = a1; /*0x4a2b7f*/
        }
        ++v3; /*0x4a2b8d*/
      }
      while ( *(unsigned __int16 *)(v2 + 0xB6) > v3 );
    }
  }
}
