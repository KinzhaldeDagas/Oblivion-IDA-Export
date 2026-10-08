// Recursively set/clear native refraction state on shader-property subtypes 5..10. useRefractF selects passInfo 0x10000 instead of 0x8000; stores power and optional period and invalidates pass caches.
void __cdecl NiAVObject_SetShaderRefractionStateRecursive(
        NiNode *root,
        int enabled,
        float power,
        int useRefractF,
        float period)
{
  NiProperty *NiPropertyByID; // esi
  int v6; // eax
  NiObject *v7; // eax
  NiObject *v8; // edi
  unsigned int m_uiRefCount_high; // ebp
  unsigned int i; // esi
  NiNode *v11; // eax

  if ( root )
  {
    if ( root->vtbl->super.super.Unk_04((NiObject *)root) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(root, 4); /*0x7d92e7*/
      if ( NiPropertyByID )
      {
        if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
          && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA )
        {
          LOBYTE(NiPropertyByID[9].members.m_controller) = 0; /*0x7d931d*/
          v6 = (_BYTE)useRefractF != 0 ? 0x10000 : 0x8000;
          if ( (_BYTE)enabled ) /*0x7d9335*/
            NiPropertyByID[1].members.super.m_uiRefCount |= v6; /*0x7d9337*/
          else
            NiPropertyByID[1].members.super.m_uiRefCount &= ~v6; /*0x7d933e*/
          *(float *)&NiPropertyByID[9].members.m_extraDataList = power; /*0x7d9347*/
          NiPropertyByID[1].members.m_controller = 0; /*0x7d934d*/
          if ( (_BYTE)useRefractF ) /*0x7d9354*/
            *(_DWORD *)&NiPropertyByID[9].members.m_extraDataListLen = Double_To_SInt32(period); /*0x7d935f*/
        }
      }
    }
    else
    {
      v7 = root->vtbl->super.super.Unk_02(root); /*0x7d936d*/
      v8 = v7; /*0x7d936f*/
      if ( v7 ) /*0x7d9373*/
      {
        m_uiRefCount_high = HIWORD(v7[0x16].members.m_uiRefCount); /*0x7d9376*/
        for ( i = 0; i < m_uiRefCount_high; ++i ) /*0x7d9376*/
        {
          if ( HIWORD(v8[0x16].members.m_uiRefCount) > i ) /*0x7d9399*/
          {
            v11 = *((NiNode **)&v8[0x16].__vftable->super.Destructor + i); /*0x7d93a1*/
            if ( v11 ) /*0x7d93a6*/
              NiAVObject_SetShaderRefractionStateRecursive(v11, enabled, power, useRefractF, period); /*0x7d93bf*/
          }
        }
      }
    }
  }
}
