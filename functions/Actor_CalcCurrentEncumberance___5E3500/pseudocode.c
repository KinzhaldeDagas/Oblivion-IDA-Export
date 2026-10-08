double __thiscall Actor_CalcCurrentEncumberance_(TESObjectREFR *this)
{
  float *ContainerExtraDataForRef; // eax
  double v3; // st7
  float v5; // [esp+4h] [ebp-Ch]
  float v6; // [esp+4h] [ebp-Ch]
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+8h] [ebp-8h]

  if ( this->vtbl->GetBaseForm(this) ) /*0x5e350f*/
    ((int (__thiscall *)(TESObjectREFR *))this->vtbl->IsActor)(this); /*0x5e3521*/
  ContainerExtraDataForRef = (float *)ContainerExtraData_GetContainerExtraDataForRef(this); /*0x5e3530*/
  ContainerExtraData_GetArmorWeight(ContainerExtraDataForRef, (int *)this); /*0x5e353b*/
  v8 = sub_4D8FB0(this); /*0x5e354b*/
  v6 = ((double (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_38)(this, 0xB) - v5; /*0x5e3563*/
  v9 = v6 + v8; /*0x5e356d*/
  v3 = v9; /*0x5e3571*/
  if ( v9 < dbl_A2FC68 ) /*0x5e3580*/
    return (float)0.0; /*0x5e3584*/
  return (float)v3; /*0x5e358c*/
}
