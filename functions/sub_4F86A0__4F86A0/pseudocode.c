char __cdecl sub_4F86A0(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v5; // eax
  TESWaterForm *WaterForm; // eax
  bool v7; // zf
  char result; // al

  *a4 = 0.0;
  if ( !a1 )
    return 1;
  if ( !a1->vtbl->IsActor(a1) )
    return 1;
  if ( !LOBYTE(a1[2].member.rot.z) )
    return 1;
  if ( !TESObjectREFR_GetParentCell(a1) )
    return 1;
  ParentCell = TESObjectREFR_GetParentCell(a1);
  if ( !TESObjectCELL::GetWaterForm(ParentCell) )
    return 1;
  v5 = TESObjectREFR_GetParentCell(a1);
  WaterForm = TESObjectCELL::GetWaterForm(v5);
  v7 = ((unsigned __int8 (__thiscall *)(TESWaterForm *))WaterForm->vtbl->Unk_22)(WaterForm) == 0;
  result = 1;
  if ( !v7 )
    *a4 = 1.0;
  return result;
}
