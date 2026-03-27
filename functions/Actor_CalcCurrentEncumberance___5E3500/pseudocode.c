double __thiscall Actor_CalcCurrentEncumberance_(TESObjectREFR *this)
{
  float *ContainerExtraDataForRef; // eax
  double v3; // st7
  float v5; // [esp+4h] [ebp-Ch]
  float v6; // [esp+4h] [ebp-Ch]
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+8h] [ebp-8h]

  if ( this->vtbl->GetBaseForm(this) )
    ((int (__thiscall *)(TESObjectREFR *))this->vtbl->IsActor)(this);
  ContainerExtraDataForRef = (float *)ContainerExtraData_GetContainerExtraDataForRef(this);
  ContainerExtraData_GetArmorWeight(ContainerExtraDataForRef, (int *)this);
  v8 = sub_4D8FB0(this);
  v6 = ((double (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_38)(this, 0xB) - v5;
  v9 = v6 + v8;
  v3 = v9;
  if ( v9 < dbl_A2FC68 )
    return (float)0.0;
  return (float)v3;
}
