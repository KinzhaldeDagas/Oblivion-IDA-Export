// Verified task post-load initialization: attaches terrain lighting shader/property and the generated color/normal textures to the loaded NIF, updates property state/world transform, then publishes the node to the quad and sets LoadedDetached.
int __thiscall TerrainLODQuadLoadTask_InitializeMesh(TerrainLODQuadLoadTask_OblivionLayout_048Verified *this)
{
  ShaderDefinition *ShaderDefinition; // eax
  ShaderDefinition *v3; // ebx
  BSShaderPPLightingProperty *v4; // eax
  BSShaderProperty *v5; // esi
  NiAVObject *loadedTerrainNode_03C; // ebp
  int v7; // eax

  if ( this->loadedTerrainNode_03C ) /*0x4ed1d9*/
  {
    ShaderDefinition = GetShaderDefinition(1u); /*0x4ed1fb*/
    v3 = ShaderDefinition; /*0x4ed200*/
    if ( ShaderDefinition ) /*0x4ed207*/
    {
      if ( ShaderDefinition->shader ) /*0x4ed20d*/
      {
        v4 = (BSShaderPPLightingProperty *)FormHeapAlloc(0xF0u); /*0x4ed21b*/
        if ( v4 ) /*0x4ed22e*/
          v5 = (BSShaderProperty *)BSShaderPPLightingProperty::BSShaderPPLightingProperty(v4); /*0x4ed237*/
        else
          v5 = 0; /*0x4ed23b*/
        v5->member.passInfo |= 0x3000u; /*0x4ed23d*/
        v5->member.lastRenderPassState = 0; /*0x4ed244*/
        sub_405680((NiNode *)this->loadedTerrainNode_03C, v5); /*0x4ed250*/
        loadedTerrainNode_03C = this->loadedTerrainNode_03C; /*0x4ed255*/
        v7 = (*((int (__thiscall **)(BSShaderProperty *, NiAVObject *))v5->vtbl + 0x1A))(v5, loadedTerrainNode_03C); /*0x4ed260*/
        sub_6C61E0((_DWORD *)loadedTerrainNode_03C[1].members.super.m_pcName, v7); /*0x4ed26b*/
        if ( v3->shader ) /*0x4ed272*/
        {
          if ( v5 ) /*0x4ed279*/
          {
            (*((void (__thiscall **)(BSShaderProperty *, _DWORD, Ni2DBuffer *))v5->vtbl + 0x20))( /*0x4ed28a*/
              v5,
              0,
              this->generatedColorTexture_040);
            (*((void (__thiscall **)(BSShaderProperty *, int, _DWORD))v5->vtbl + 0x20))(v5, 1, 0); /*0x4ed299*/
            (*((void (__thiscall **)(BSShaderProperty *, _DWORD, Ni2DBuffer *))v5->vtbl + 0x21))( /*0x4ed2aa*/
              v5,
              0,
              this->generatedNormalTexture_044);
            (*((void (__thiscall **)(BSShaderProperty *, int, _DWORD))v5->vtbl + 0x21))(v5, 1, 0); /*0x4ed2b9*/
          }
          NiGeometry_SetShader((NiGeometry *)this->loadedTerrainNode_03C, v3->shader); /*0x4ed2c2*/
          v3->shader->__vftable->super.super.super.UpdateInternalVars( /*0x4ed2d3*/
            (NiShader *)v3->shader,
            this->loadedTerrainNode_03C);
          if ( v5 ) /*0x4ed2d7*/
            (*((void (__thiscall **)(BSShaderProperty *, _DWORD))v5->vtbl + 0x1F))(v5, 0); /*0x4ed2e1*/
        }
      }
    }
  }
  NiAVObject_InitializePropertyState(this->loadedTerrainNode_03C); /*0x4ed2ee*/
  NiAVObject_UpdateNiAVObject(this->loadedTerrainNode_03C, 0.0, 1); /*0x4ed2fe*/
  return TerrainLODQuadLoadTask_ApplyLoadedMesh(this->quadData_038); /*0x4ed30b*/
}
