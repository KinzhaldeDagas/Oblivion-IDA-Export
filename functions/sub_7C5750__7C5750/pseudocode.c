char __thiscall sub_7C5750(unsigned __int8 *this, NiNode *a2)
{
  NiProperty *NiPropertyByID; // edi
  BOOL v4; // esi
  NiProperty *v5; // esi
  unsigned __int8 v6; // al
  unsigned int m_uiRefCount; // edi
  unsigned __int16 v8; // ax
  int v9; // edi
  _DWORD *v10; // eax
  int v11; // edi
  int v12; // eax
  char v14; // [esp+Fh] [ebp-1h]

  v14 = 1;
  NiPropertyByID = NiNode_GetNiPropertyByID(a2, 4);
  if ( !NiPropertyByID )
    return 1;
  v4 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1
    && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
  v5 = v4 ? NiPropertyByID : 0;
  if ( v5 )
  {
    v6 = *(this + 0x11C);
    if ( v5[1].members.super.m_uiRefCount >> 0x1C != v6 )
    {
      HIBYTE(v5[1].members.super.m_uiRefCount) = 0;
      v5[1].members.super.m_uiRefCount |= v6 << 0x1C;
      v5[1].members.m_controller = (NiInterpController *)0xFFFFFFFF;
    }
    m_uiRefCount = a2->members.super.super.super.m_uiRefCount;
    if ( m_uiRefCount <= (unsigned __int16)sub_7ED5C0(v5) )
      v14 = 0;
    v8 = sub_7ED5C0(v5);
    v9 = v8;
    if ( v8 )
    {
      v10 = sub_7ED160(v5);
      if ( !*((_BYTE *)v10 + 0xF4) )
        sub_7D6940(v10, (int)a2);
      if ( v9 > 1 )
      {
        v11 = v9 - 1;
        do
        {
          v12 = sub_7ED180(v5);
          if ( v12 )
          {
            if ( !*(_BYTE *)(v12 + 0xF4) )
              sub_7D6940((_DWORD *)v12, (int)a2);
          }
          --v11;
        }
        while ( v11 );
      }
    }
  }
  return v14;
}
