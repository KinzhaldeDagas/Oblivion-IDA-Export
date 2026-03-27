TESWaterCulling *__thiscall TESWaterCullingProcess::TESWaterCullingProcess(TESWaterCulling *this, void *a2)
{
  NiCullingProcess_NiCullingProcess(&this->super, a2);
  this->super.vtbl = (NiCullingProcessVtbl *)&TESWaterCullingProcess::`vftable';
  sub_716DB0(&this->unk);
  return this;
}
