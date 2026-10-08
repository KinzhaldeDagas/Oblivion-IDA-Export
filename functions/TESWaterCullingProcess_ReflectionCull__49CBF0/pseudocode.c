// CULLING audit 2026-09-27 (observed Oblivion behavior): Reflection override applies native reflection-category filtering, optional additional plane test, then base NiCullingProcess culling. CULLING leaves this ProcessCull slot native and uses the water Process hook only to suspend an outer suppression scope. Do not apply main-camera geometry decisions globally to reflected contributions.
void __thiscall TESWaterCullingProcess_ReflectionCull(TESWaterCulling *this, NiAVObject *a2)
{
  int m_extraDataListLen; // edi
  NiExtraData **m_extraDataList; // ecx
  NiExtraData *v5; // esi
  NiRTTI *v6; // eax
  char v7; // al
  NiExtraData *v8; // eax
  NiExtraDataVtbl *vftable; // ecx

  m_extraDataListLen = a2->members.super.m_extraDataListLen; /*0x49cbf8*/
  if ( !a2->members.super.m_extraDataListLen ) /*0x49cbf8*/
    goto NiRenderer_ReflectionCull___def_49CC69; /*0x49cbf8*/
  while ( 1 )
  {
    m_extraDataList = a2->members.super.m_extraDataList; /*0x49cc06*/
    v5 = m_extraDataList[(unsigned __int16)--m_extraDataListLen]; /*0x49cc0f*/
    if ( v5 )
    {
      v6 = v5->__vftable->super.GetType((NiObject *)m_extraDataList[(unsigned __int16)m_extraDataListLen]); /*0x49cc1d*/
      if ( v6 ) /*0x49cc21*/
      {
        while ( v6 != &stru_B35ACC ) /*0x49cc28*/
        {
          v6 = v6->parent; /*0x49cc2a*/
          if ( !v6 ) /*0x49cc2f*/
            goto LABEL_6; /*0x49cc2f*/
        }
        v7 = 1; /*0x49cc41*/
      }
      else
      {
LABEL_6:
        v7 = 0; /*0x49cc31*/
      }
      v8 = v7 != 0 ? v5 : 0;
      if ( v8 ) /*0x49cc39*/
        break; /*0x49cc39*/
    }
    if ( !m_extraDataListLen ) /*0x49cc3d*/
      goto NiRenderer_ReflectionCull___def_49CC69; /*0x49cc3d*/
  }
  vftable = v8[1].__vftable; /*0x49cc45*/
  if ( vftable ) /*0x49cc4a*/
  {
    switch ( *(_BYTE *)((*((int (__thiscall **)(NiExtraDataVtbl *))vftable->super.super.Destructor + 0x5C))(vftable) + 4) ) /*0x49cc69*/
    {
      case 0x12: /*0x49cc69*/
      case 0x17: /*0x49cc69*/
      case 0x18: /*0x49cc69*/
      case 0x1C: /*0x49cc69*/
        if ( UseWaterReflectionStatics ) /*0x49cc90*/
          goto NiRenderer_ReflectionCull___def_49CC69; /*0x49cc97*/
        break; /*0x49cc97*/
      case 0x13: /*0x49cc69*/
      case 0x14: /*0x49cc69*/
      case 0x15: /*0x49cc69*/
      case 0x16: /*0x49cc69*/
      case 0x19: /*0x49cc69*/
      case 0x1B: /*0x49cc69*/
      case 0x21: /*0x49cc69*/
      case 0x22: /*0x49cc69*/
      case 0x26: /*0x49cc69*/
      case 0x27: /*0x49cc69*/
      case 0x28: /*0x49cc69*/
      case 0x2A: /*0x49cc69*/
        if ( UseWaterReflectionMisc ) /*0x49cca0*/
          goto NiRenderer_ReflectionCull___def_49CC69; /*0x49cca7*/
        break; /*0x49cca7*/
      case 0x1E: /*0x49cc69*/
      case 0x1F: /*0x49cc69*/
        if ( byte_B07070 ) /*0x49cc80*/
          goto NiRenderer_ReflectionCull___def_49CC69; /*0x49cc87*/
        break; /*0x49cc87*/
      case 0x23: /*0x49cc69*/
      case 0x24: /*0x49cc69*/
        if ( UseWaterReflectionActors ) /*0x49cc70*/
          goto NiRenderer_ReflectionCull___def_49CC69; /*0x49cc77*/
        break; /*0x49cc77*/
      default:
        goto NiRenderer_ReflectionCull___def_49CC69;
    }
  }
  else
  {
NiRenderer_ReflectionCull___def_49CC69:
    if ( MEMORY[0xB33E90][0x138C] /*0x49ccc4*/
      || NiBound_ClassifyAgainstPlane(&a2->members.m_kWorldBound, this->unk.CullingPlanes) != 2 )
    {
      NiCullingProcess_CullBoundAndDispatch(&this->super, a2); /*0x49ccc9*/
    }
  }
}
