int __thiscall sub_6507C0(HighProcess *this, Actor *a2)
{
  TESObjectREFR *furniture; // ecx
  UInt32 v5; // eax
  double v6; // st7
  ActorVtbl *vtbl; // ebp
  float v9; // [esp+1Ch] [ebp-10h]
  float v10; // [esp+30h] [ebp+4h]

  furniture = this->furniture;
  if ( !furniture )
    return ((int (__thiscall *)(HighProcess *, Actor *))this->DismoutHorse)(this, a2);
  sub_4D7300(furniture, this->furnitureMarkerIndex, 0);
  v5 = sub_5E12B0(a2);
  if ( v5 )
    (*(void (__thiscall **)(UInt32, _DWORD, _DWORD))(*(_DWORD *)v5 + 0x9C))(v5, 0, 0);
  ((void (__thiscall *)(HighProcess *, Actor *, _DWORD, TESObjectREFR *))this->SetSleepState)(
    this,
    a2,
    0,
    this->furniture);
  ((void (__thiscall *)(TESObjectREFR *, _DWORD))this->furniture->vtbl->GetBaseForm)(this->furniture, this->unk128.unkE);
  v6 = -sub_4AEBE0(0x7F);
  v9 = v6;
  sub_659B90((int *)a2, v6, v9);
  vtbl = a2->vtbl;
  v10 = ((double (__thiscall *)(Actor *))a2->vtbl->super.GetZRotation)(a2) + dbl_A3D5B8;
  ((void (__thiscall *)(Actor *, _DWORD))vtbl->super.Unk_7A)(a2, LODWORD(v10));
  sub_6FAEE0(&this->unk128, 0.0);
  this->unk128.unkE = 0;
  this->unk128.unk00.x = Vector3_InitValue_;
  this->unk128.unk00.y = *(&Vector3_InitValue_ + 1);
  this->unk128.unk00.z = dword_B3F9B0;
  this->furniture = 0;
  return sub_65AC20(a2, 0);
}
