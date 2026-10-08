bhkCharacterProxy *__thiscall sub_6507C0(HighProcess *this, Actor *a2)
{
  TESObjectREFR *furniture; // ecx
  UInt32 v5; // eax
  double v6; // st7
  ActorVtbl *vtbl; // ebp
  float v9; // [esp+1Ch] [ebp-10h]
  float v10; // [esp+30h] [ebp+4h]

  furniture = this->furniture; /*0x6507c3*/
  if ( !furniture ) /*0x6507cb*/
    return (bhkCharacterProxy *)((int (__thiscall *)(HighProcess *, Actor *))this->DismoutHorse)(this, a2); /*0x6508c9*/
  sub_4D7300(furniture, this->furnitureMarkerIndex, 0); /*0x6507dd*/
  v5 = sub_5E12B0(a2); /*0x6507e8*/
  if ( v5 ) /*0x6507ef*/
    (*(void (__thiscall **)(UInt32, _DWORD, _DWORD))(*(_DWORD *)v5 + 0x9C))(v5, 0, 0); /*0x6507ff*/
  ((void (__thiscall *)(HighProcess *, Actor *, _DWORD, TESObjectREFR *))this->SetSleepState)( /*0x650817*/
    this,
    a2,
    0,
    this->furniture);
  ((void (__thiscall *)(TESObjectREFR *, _DWORD))this->furniture->vtbl->GetBaseForm)(this->furniture, this->unk128.unkE); /*0x65082f*/
  v6 = -sub_4AEBE0(0x7F); /*0x650839*/
  v9 = v6; /*0x65083d*/
  sub_659B90((int *)a2, v6, v9); /*0x650840*/
  vtbl = a2->vtbl; /*0x650845*/
  v10 = ((double (__thiscall *)(Actor *))a2->vtbl->super.GetZRotation)(a2) + dbl_A3D5B8; /*0x65085e*/
  ((void (__thiscall *)(Actor *, _DWORD))vtbl->super.Unk_7A)(a2, LODWORD(v10)); /*0x65086b*/
  sub_6FAEE0(&this->unk128, 0.0); /*0x65087b*/
  this->unk128.unkE = 0; /*0x650880*/
  this->unk128.unk00.x = g_zeroNiPoint3.x; /*0x65088c*/
  this->unk128.unk00.y = g_zeroNiPoint3.y; /*0x650895*/
  this->unk128.unk00.z = g_zeroNiPoint3.z; /*0x6508a2*/
  this->furniture = 0; /*0x6508a5*/
  return sub_65AC20((MobileObject *)a2, 0); /*0x6508b6*/
}
