void __thiscall sub_7D5320(_DWORD *this)
{
  _DWORD *v2; // edi
  NiNode *v3; // ecx
  NiProperty *NiPropertyByID; // esi
  BOOL v5; // eax
  NiProperty *v6; // eax

  v2 = (_DWORD *)*(this + 0x51);
  while ( v2 )
  {
    v3 = (NiNode *)v2[2];
    v2 = (_DWORD *)*v2;
    if ( v3 )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(v3, 4);
      if ( NiPropertyByID )
      {
        v5 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1
          && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
        v6 = v5 ? NiPropertyByID : 0;
        if ( v6 )
          v6[1].members.m_controller = 0;
      }
    }
  }
  *(this + 0x51) = 0;
}
