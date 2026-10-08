void __fastcall BSShaderAccumulator::RenderDecals(BSShaderAccumulator *this)
{
  double v2; // fp31
  BSRENDERSTATE_LOCK v3; // r5
  BSRENDERSTATE_LOCK v4; // r5

  if ( this->bRenderDecals && this->eRenderMode != BSSM_RENDER_CONSTALPHA ) /*0x8222d8e0*/
  {
    v2 = BSShaderProperty::fDepthBiasUnit; /*0x8222d8f4*/
    if ( !BSShaderManager::bUseDepthBias ) /*0x8222d900*/
      v2 = 0.0; /*0x8222d904*/
    BSRenderState::SetZWriteEnable(0, BSRS_LOCK); /*0x8222d910*/
    BSRenderState::SetDepthBias(v2, v3); /*0x8222d91c*/
    BSShaderAccumulator::RenderGeometryGroup(this, 2u, 1); /*0x8222d92c*/
    BSShaderAccumulator::RenderGeometryGroup(this, 3u, 1); /*0x8222d93c*/
    --BSRenderState::iLock[1]; /*0x8222d958*/
    BSRenderState::SetZWriteEnable(1, BSRS_NOLOCK); /*0x8222d95c*/
    --BSRenderState::iLock[3]; /*0x8222d970*/
    BSRenderState::SetDepthBias(0.0, v4); /*0x8222d974*/
  }
}
