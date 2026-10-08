TESObjectREFR *__thiscall Character_constr(TESObjectREFR *this)
{
  Actor_constr(this); /*0x60e4f3*/
  *((float *)this + 0x42) = kTerrainLODQuadRayDirectionZ; /*0x60e4fe*/
  this->vtbl = (TESObjectREFRVtbl *)&Character::`vftable'{for `Character'}; /*0x60e504*/
  this->member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&Character::`vftable'{for `TESChildCell'}; /*0x60e50a*/
  *((_DWORD *)this + 0x17) = &Character::`vftable'{for `MagicCaster'}; /*0x60e511*/
  *((_DWORD *)this + 0x1A) = &Character::`vftable'{for `MagicTarget'}; /*0x60e518*/
  this->member.super.type = kFormType_ACHR; /*0x60e51f*/
  *((_DWORD *)this + 0x41) = 0; /*0x60e523*/
  return this; /*0x60e52f*/
}
