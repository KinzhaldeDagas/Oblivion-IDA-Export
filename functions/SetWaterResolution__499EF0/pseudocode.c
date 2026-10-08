void __thiscall SetWaterResolution(WaterManager *this)
{
  bool v1; // zf
  float v3; // ecx
  BSRenderedTexture *BaseHeightMap; // esi
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  BSRenderedTexture *HeightMap; // esi
  float v7; // [esp+Ch] [ebp-4h]

  v1 = bUseWaterHiRes == 0; /*0x499ef6*/
  LOBYTE(OB_ShaderConstantStorage_010201A0[0x6F]) = bUseWaterHiRes; /*0x499efd*/
  if ( v1 ) /*0x499f02*/
  {
    LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) = 0x80; /*0x499f1a*/
    LODWORD(OB_ShaderConstantStorage_010201A0[0x6E]) = 7; /*0x499f24*/
  }
  else
  {
    LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) = 0x100; /*0x499f04*/
    LODWORD(OB_ShaderConstantStorage_010201A0[0x6E]) = 8; /*0x499f0e*/
  }
  v3 = OB_ShaderConstantStorage_010201A0[0x73]; /*0x499f34*/
  v1 = LODWORD(OB_ShaderConstantStorage_010201A0[0x73]) == 0; /*0x499f3a*/
  v7 = 1.0 / (double)SLODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x499f40*/
  OB_ShaderConstantStorage_010201A0[0x74] = v7; /*0x499f48*/
  OB_ShaderConstantStorage_010201A0[0x75] = v7; /*0x499f4e*/
  OB_ShaderConstantStorage_010201A0[0x76] = v7; /*0x499f54*/
  OB_ShaderConstantStorage_010201A0[0x77] = v7; /*0x499f5a*/
  if ( !v1 ) /*0x499f60*/
  {
    sub_7E0CB0((_DWORD *)LODWORD(v3)); /*0x499f62*/
    sub_7E1710((WaterShaderHeightMap *)LODWORD(OB_ShaderConstantStorage_010201A0[0x73])); /*0x499f6d*/
  }
  if ( this->BaseHeightMap ) /*0x499f72*/
    BSTextureManager__ReturnRenderedTexture( /*0x499f80*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
      this->BaseHeightMap);
  if ( this->HeightMap ) /*0x499f85*/
    BSTextureManager__ReturnRenderedTexture( /*0x499f93*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
      this->HeightMap);
  BaseHeightMap = this->BaseHeightMap; /*0x499f98*/
  v5 = InterlockedDecrement; /*0x499f9d*/
  if ( BaseHeightMap ) /*0x499fa3*/
  {
    if ( !v5((volatile LONG *)&BaseHeightMap->members) ) /*0x499fa9*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))BaseHeightMap->vtbl)(BaseHeightMap, 1); /*0x499fbb*/
    this->BaseHeightMap = 0; /*0x499fbd*/
  }
  HeightMap = this->HeightMap; /*0x499fc4*/
  if ( HeightMap ) /*0x499fc9*/
  {
    if ( !v5((volatile LONG *)&HeightMap->members) ) /*0x499fcf*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))HeightMap->vtbl)(HeightMap, 1); /*0x499fe1*/
    this->HeightMap = 0; /*0x499fe3*/
  }
}
