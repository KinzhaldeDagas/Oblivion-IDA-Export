// Run-speed branch used by sub_5E65B0 when process flag 0x200 is set and swim/fly are absent. Calls Calc_RunSpeed, then may clamp to package target actor's run speed minus close-distance margin.
double __thiscall Actor_CalcFastTravelSpeed(TESObjectREFR *this)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  TargetData *v6; // ecx
  ObjectType v7; // eax
  TESObjectREFR *objectCode; // edi
  float v9; // [esp+8h] [ebp-2Ch]
  float v10; // [esp+10h] [ebp-24h]
  int v11; // [esp+18h] [ebp-1Ch]
  float v12; // [esp+24h] [ebp-10h]
  float v13; // [esp+28h] [ebp-Ch]
  float v14; // [esp+30h] [ebp-4h]
  float retaddr; // [esp+34h] [ebp+0h]

  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.CopyFrom)(this) ) /*0x5e375e*/
    return 0.0; /*0x5e3764*/
  (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x304))(*((_DWORD *)this + 0x16)); /*0x5e3776*/
  v14 = Actor_CalcCurrentEncumberance_(this); /*0x5e3788*/
  if ( *((_DWORD *)this + 0x16) ) /*0x5e378c*/
  {
    if ( ((*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2C0))(*((_DWORD *)this + 0x16)) & 0x400) != 0 ) /*0x5e37a3*/
      (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2C0))(*((_DWORD *)this + 0x16)); /*0x5e37b0*/
  }
  this->vtbl->GetBaseForm(this); /*0x5e37cc*/
  *(float *)&v11 = (float)((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].Unk_37)(this); /*0x5e3806*/
  v10 = retaddr; /*0x5e380f*/
  v9 = (float)((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].Unk_37)(this); /*0x5e3821*/
  v13 = Calc_RunSpeed(v9, COERCE_FLOAT(4), SLOBYTE(v10), v14, v11, 0xD); /*0x5e382c*/
  if ( !*((_DWORD *)this + 0x16) ) /*0x5e3830*/
    return v13; /*0x5e3830*/
  v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x184))(*((_DWORD *)this + 0x16)); /*0x5e3845*/
  if ( !v3 ) /*0x5e3849*/
    return v13; /*0x5e3849*/
  if ( *(_BYTE *)(v3 + 0x20) != 1 ) /*0x5e3853*/
    return v13; /*0x5e3853*/
  v4 = *((_DWORD *)this + 0x16); /*0x5e3859*/
  if ( !v4 ) /*0x5e385e*/
    return v13; /*0x5e385e*/
  v5 = *(_DWORD *)(v4 + 8); /*0x5e3864*/
  if ( !v5 ) /*0x5e3869*/
    return v13; /*0x5e3869*/
  v6 = *(TargetData **)(v5 + 0x28); /*0x5e386f*/
  if ( !v6 ) /*0x5e3874*/
    return v13; /*0x5e3874*/
  v7.form = sub_569E60(v6).form; /*0x5e387b*/
  objectCode = (TESObjectREFR *)v7.objectCode; /*0x5e3880*/
  if ( !v7.objectCode ) /*0x5e3884*/
    return v13; /*0x5e3884*/
  if ( (PlayerCharacter *)v7.form == reference ) /*0x5e3890*/
    return v13; /*0x5e3890*/
  if ( !v7.form->vtbl->IsActor((TESObjectREFR *)v7.objectCode) ) /*0x5e389c*/
    return v13; /*0x5e389c*/
  if ( !objectCode[1].vtbl ) /*0x5e38a2*/
    return v13; /*0x5e38a2*/
  v12 = Actor_CalcFastTravelSpeed(objectCode); /*0x5e38af*/
  if ( v12 <= 0.0 ) /*0x5e38be*/
    return v13; /*0x5e38be*/
  if ( TesObjectREF_GetDistance(this, objectCode, 0) < flt_A44BA4 ) /*0x5e38d5*/
    v12 = v12 - dbl_A3F3D0; /*0x5e38e1*/
  if ( v12 > 0.0 && v13 >= (double)v12 ) /*0x5e38ff*/
    return v12; /*0x5e3906*/
  else
    return v13; /*0x5e3912*/
}
