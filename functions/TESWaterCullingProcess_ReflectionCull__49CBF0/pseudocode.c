void __thiscall TESWaterCullingProcess_ReflectionCull(TESWaterCulling *this, NiAVObject *a2)
{
  int m_extraDataListLen; // edi
  NiExtraData **m_extraDataList; // ecx
  NiExtraData *v5; // esi
  int v6; // eax
  char v7; // al
  NiExtraData *v8; // eax
  NiExtraDataVtbl *vftable; // ecx

  m_extraDataListLen = a2->members.super.m_extraDataListLen;
  if ( !a2->members.super.m_extraDataListLen )
    goto NiRenderer_ReflectionCull___def_49CC69;
  while ( 1 )
  {
    m_extraDataList = a2->members.super.m_extraDataList;
    v5 = m_extraDataList[(unsigned __int16)--m_extraDataListLen];
    if ( v5 )
    {
      v6 = (int)v5->__vftable->super.GetType((NiObject *)m_extraDataList[(unsigned __int16)m_extraDataListLen]);
      if ( v6 )
      {
        while ( (char *)v6 != dword_B35ACC )
        {
          v6 = *(_DWORD *)(v6 + 4);
          if ( !v6 )
            goto LABEL_6;
        }
        v7 = 1;
      }
      else
      {
LABEL_6:
        v7 = 0;
      }
      v8 = v7 != 0 ? v5 : 0;
      if ( v8 )
        break;
    }
    if ( !m_extraDataListLen )
      goto NiRenderer_ReflectionCull___def_49CC69;
  }
  vftable = v8[1].__vftable;
  if ( vftable )
  {
    switch ( *(_BYTE *)((*((int (__thiscall **)(NiExtraDataVtbl *))vftable->super.super.Destructor + 0x5C))(vftable) + 4) )
    {
      case 0x12:
      case 0x17:
      case 0x18:
      case 0x1C:
        if ( UseWaterReflectionStatics )
          goto NiRenderer_ReflectionCull___def_49CC69;
        break;
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x19:
      case 0x1B:
      case 0x21:
      case 0x22:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x2A:
        if ( UseWaterReflectionMisc )
          goto NiRenderer_ReflectionCull___def_49CC69;
        break;
      case 0x1E:
      case 0x1F:
        if ( byte_B07070 )
          goto NiRenderer_ReflectionCull___def_49CC69;
        break;
      case 0x23:
      case 0x24:
        if ( UseWaterReflectionActors )
          goto NiRenderer_ReflectionCull___def_49CC69;
        break;
      default:
        goto NiRenderer_ReflectionCull___def_49CC69;
    }
  }
  else
  {
NiRenderer_ReflectionCull___def_49CC69:
    if ( IsRenderWaterUnderWaterSurface || sub_47DA70(&a2->members.m_kWorldBound, &this->unk) != 2 )
      NiCullingProcess_Culling_((BSCullingProcess *)this, a2);
  }
}
