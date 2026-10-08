char __thiscall sub_7C5750(unsigned __int8 *this, NiNode *a2)
{
  NiProperty *NiPropertyByID; // edi
  BOOL v4; // esi
  NiProperty *v5; // esi
  unsigned __int8 v6; // al
  UInt32 m_uiRefCount; // edi
  unsigned __int16 v8; // ax
  int v9; // edi
  int **v10; // eax
  int v11; // edi
  int v12; // eax
  char v14; // [esp+Fh] [ebp-1h]

  v14 = 1; /*0x7c575e*/
  NiPropertyByID = NiNode_GetNiPropertyByID(a2, 4); /*0x7c5768*/
  if ( !NiPropertyByID ) /*0x7c576c*/
    return 1; /*0x7c583d*/
  v4 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1 /*0x7c5796*/
    && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
  v5 = v4 ? NiPropertyByID : 0;
  if ( v5 ) /*0x7c579e*/
  {
    v6 = *(this + 0x11C); /*0x7c57a7*/
    if ( v5[1].members.super.m_uiRefCount >> 0x1C != v6 ) /*0x7c57b2*/
    {
      HIBYTE(v5[1].members.super.m_uiRefCount) = 0; /*0x7c57ba*/
      v5[1].members.super.m_uiRefCount |= v6 << 0x1C; /*0x7c57be*/
      v5[1].members.m_controller = (NiInterpController *)0xFFFFFFFF; /*0x7c57c1*/
    }
    m_uiRefCount = a2->members.super.super.super.m_uiRefCount; /*0x7c57c8*/
    if ( m_uiRefCount <= (unsigned __int16)BSShaderProperty_GetShadowLightCount(v5) ) /*0x7c57d7*/
      v14 = 0; /*0x7c57d9*/
    v8 = BSShaderProperty_GetShadowLightCount(v5); /*0x7c57e0*/
    v9 = v8; /*0x7c57e5*/
    if ( v8 ) /*0x7c57ea*/
    {
      v10 = (int **)sub_7ED160(v5); /*0x7c57ee*/
      if ( !*((_BYTE *)v10 + 0xF4) ) /*0x7c57f3*/
        ShadowSceneLight_RemoveReceiverGeometry(v10, a2); /*0x7c57ff*/
      if ( v9 > 1 ) /*0x7c5807*/
      {
        v11 = v9 - 1; /*0x7c5809*/
        do /*0x7c582f*/
        {
          v12 = sub_7ED180(v5); /*0x7c5812*/
          if ( v12 ) /*0x7c5819*/
          {
            if ( !*(_BYTE *)(v12 + 0xF4) ) /*0x7c581b*/
              ShadowSceneLight_RemoveReceiverGeometry((int **)v12, a2); /*0x7c5827*/
          }
          --v11; /*0x7c582c*/
        }
        while ( v11 ); /*0x7c582f*/
      }
    }
  }
  return v14; /*0x7c5836*/
}
