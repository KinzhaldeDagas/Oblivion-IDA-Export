void __thiscall SetWaterResolution(WaterManager *this)
{
  bool v1; // zf
  WaterShaderHeightMap *v3; // ecx
  BSRenderedTexture *BaseHeightMap; // esi
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  BSRenderedTexture *HeightMap; // esi
  float v7; // [esp+Ch] [ebp-4h]

  v1 = bUseWaterHiRes == 0;
  LocalWaterHiRes = bUseWaterHiRes;
  if ( v1 )
  {
    WaterSurfaceResolution = 0x80;
    widthStaticSquareForSomeSurface2log2__ = 7;
  }
  else
  {
    WaterSurfaceResolution = 0x100;
    widthStaticSquareForSomeSurface2log2__ = 8;
  }
  v3 = dword_B45FE0;
  v1 = dword_B45FE0 == 0;
  v7 = 1.0 / (double)WaterSurfaceResolution;
  fResolution = v7;
  flt_B45FE8 = v7;
  flt_B45FEC = v7;
  flt_B45FF0 = v7;
  if ( !v1 )
  {
    sub_7E0CB0(v3);
    sub_7E1710(dword_B45FE0);
  }
  if ( this->BaseHeightMap )
    sub_7C1EE0(g_textureManager, this->BaseHeightMap);
  if ( this->HeightMap )
    sub_7C1EE0(g_textureManager, this->HeightMap);
  BaseHeightMap = this->BaseHeightMap;
  v5 = InterlockedDecrement;
  if ( BaseHeightMap )
  {
    if ( !v5((volatile LONG *)&BaseHeightMap->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))BaseHeightMap->vtbl)(BaseHeightMap, 1);
    this->BaseHeightMap = 0;
  }
  HeightMap = this->HeightMap;
  if ( HeightMap )
  {
    if ( !v5((volatile LONG *)&HeightMap->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))HeightMap->vtbl)(HeightMap, 1);
    this->HeightMap = 0;
  }
}
