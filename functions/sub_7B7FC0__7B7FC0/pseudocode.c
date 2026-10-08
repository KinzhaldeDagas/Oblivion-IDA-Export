// Recursively assigns/infers a BSShader for an NiAVObject tree. Geometry nodes resolve a shader definition, install it through NiGeometry_SetShader, and initialize shader variables; NiNode children are traversed recursively.
char __cdecl BSShaderManager_AssignShaderToObjectRecursive(
        NiAVObject *object,
        unsigned int shaderId,
        char normalMapBypass,
        char arg3,
        const char *materialName)
{
  char v5; // bl
  char result; // al
  NiProperty *NiPropertyByID; // eax
  NiExtraData **m_extraDataList; // ebp
  NiProperty *v9; // edi
  NiExtraData **v10; // eax
  unsigned int v11; // eax
  ShaderDefinition *ShaderDefinition; // eax
  ShaderDefinition *v13; // edi
  NiProperty *v14; // eax
  unsigned int i; // edi
  NiAVObject *v16; // eax

  v5 = 0; /*0x7b7fc1*/
  if ( !*(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] ) /*0x7b7fc3*/
    return 0; /*0x7b7fcf*/
  if ( object )
  {
    if ( object->vtbl->super.Unk_03((NiObject *)object) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)object, 4); /*0x7b7ff4*/
      m_extraDataList = object[1].members.super.m_extraDataList; /*0x7b7ff9*/
      if ( NiPropertyByID )
        v9 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) != 0xFFFFFFFF
           ? NiPropertyByID
           : 0;
      else
        v9 = 0; /*0x7b8005*/
      if ( m_extraDataList )
        v10 = ((int (__thiscall *)(NiExtraData **))(*m_extraDataList)[2].member.super.m_uiRefCount)(m_extraDataList) != 0xFFFFFFFF
            ? m_extraDataList
            : 0;
      else
        v10 = 0; /*0x7b8021*/
      if ( v9 && m_extraDataList ) /*0x7b803e*/
      {
        result = ((int (__thiscall *)(NiExtraData **, NiAVObject *))(*v10)[2].__vftable)(v10, object); /*0x7b8048*/
        v9[4].members.m_pcName = materialName; /*0x7b804e*/
        return result; /*0x7b8055*/
      }
      v11 = shaderId; /*0x7b805c*/
      if ( shaderId > 0x1C ) /*0x7b805e*/
      {
        if ( unk_B42E8C ) /*0x7b8065*/
          unk_B42E8C("Object prepared with invalid shader index", 0); /*0x7b8075*/
        v11 = 1; /*0x7b807a*/
      }
      if ( shaderId == 1 ) /*0x7b8084*/
        v11 = BSShaderManager_InferGeometryShaderID(object, normalMapBypass); /*0x7b8091*/
      if ( !v11 ) /*0x7b809b*/
        return 0; /*0x7b809b*/
      ShaderDefinition = GetShaderDefinition(v11); /*0x7b809e*/
      v13 = ShaderDefinition; /*0x7b80a3*/
      if ( !ShaderDefinition ) /*0x7b80aa*/
        return 0; /*0x7b80b2*/
      NiGeometry_SetShader((NiGeometry *)object, ShaderDefinition->shader); /*0x7b80b9*/
      v5 = v13->shader->__vftable->super.super.super.UpdateInternalVars((NiShader *)v13->shader, object); /*0x7b80cd*/
      v14 = NiNode_GetNiPropertyByID((NiNode *)object, 4); /*0x7b80cf*/
      if ( v14 ) /*0x7b80d6*/
      {
        v14[4].members.m_pcName = materialName; /*0x7b80de*/
        return v5; /*0x7b80e5*/
      }
    }
    else if ( object->vtbl->super.Unk_02(object) ) /*0x7b80eb*/
    {
      for ( i = 0; HIWORD(object[1].members.super.m_pcName) > i; ++i ) /*0x7b80f1*/
      {
        v16 = *(NiAVObject **)(object[1].members.super.super.m_uiRefCount + 4 * i); /*0x7b810c*/
        if ( v16 ) /*0x7b8111*/
          v5 |= BSShaderManager_AssignShaderToObjectRecursive(v16, shaderId, normalMapBypass, arg3, materialName); /*0x7b812c*/
      }
    }
  }
  return v5; /*0x7b7fce*/
}
