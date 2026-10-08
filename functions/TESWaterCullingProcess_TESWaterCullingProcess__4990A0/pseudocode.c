TESWaterCulling *__thiscall TESWaterCullingProcess::TESWaterCullingProcess(
        TESWaterCulling *this,
        CullingVisibleGeometryArray *a2)
{
  NiCullingProcess_NiCullingProcess(&this->super, a2); /*0x4990cd*/
  this->super.vtbl = (NiCullingProcessVtbl *)&TESWaterCullingProcess::`vftable'; /*0x4990e0*/
  sub_716DB0(&this->unk); /*0x4990e6*/
  return this; /*0x4990ed*/
}
