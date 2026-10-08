char __cdecl sub_4F86A0(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v5; // eax
  TESWaterForm *WaterForm; // eax
  bool v7; // zf
  char result; // al

  *a4 = 0.0; /*0x4f86ae*/
  if ( !a1 ) /*0x4f86b0*/
    return 1; /*0x4f86b0*/
  if ( !a1->vtbl->IsActor(a1) ) /*0x4f86bc*/
    return 1; /*0x4f86bc*/
  if ( !LOBYTE(a1[2].member.rot.z) ) /*0x4f86c2*/
    return 1; /*0x4f86c2*/
  if ( !Shared_GetDwordAtOffset40(a1) ) /*0x4f86cd*/
    return 1; /*0x4f86cd*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x4f86d8*/
  if ( !TESObjectCELL::GetWaterForm(DwordAtOffset40) ) /*0x4f86df*/
    return 1; /*0x4f870f*/
  v5 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x4f86ea*/
  WaterForm = TESObjectCELL::GetWaterForm(v5); /*0x4f86f1*/
  v7 = ((unsigned __int8 (__thiscall *)(TESWaterForm *))WaterForm->vtbl->Unk_22)(WaterForm) == 0; /*0x4f8702*/
  result = 1; /*0x4f8704*/
  if ( !v7 ) /*0x4f8706*/
    *a4 = 1.0; /*0x4f870a*/
  return result; /*0x4f870c*/
}
