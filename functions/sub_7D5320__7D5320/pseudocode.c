// Walk unfinished receiver cursor +0x144, invalidate accepted subtype-1..10 shader properties, then clear the cursor.
void __thiscall sub_7D5320(_DWORD *this)
{
  _DWORD *v2; // edi
  NiNode *v3; // ecx
  NiProperty *NiPropertyByID; // esi
  BOOL v5; // eax
  NiProperty *v6; // eax

  v2 = (_DWORD *)*(this + 0x51); /*0x7d5325*/
  while ( v2 )
  {
    v3 = (NiNode *)v2[2]; /*0x7d5332*/
    v2 = (_DWORD *)*v2; /*0x7d533a*/
    if ( v3 )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(v3, 4); /*0x7d5345*/
      if ( NiPropertyByID )
      {
        v5 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1 /*0x7d536e*/
          && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
        v6 = v5 ? NiPropertyByID : 0;
        if ( v6 ) /*0x7d5376*/
          v6[1].members.m_controller = 0; /*0x7d5378*/
      }
    }
  }
  *(this + 0x51) = 0; /*0x7d5381*/
}
