// Swim run-speed branch used by sub_5E65B0 when run 0x200 and swim 0x800 are set. Calls Calc_SwimRunSpeed and applies same package-target limiting pattern.
double __thiscall sub_5E3AD0(TESObjectREFR *this)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  TargetData *v6; // ecx
  ObjectType v7; // eax
  TESObjectREFR *objectCode; // edi
  float v9; // [esp+Ch] [ebp-2Ch]
  float v10; // [esp+14h] [ebp-24h]
  float v11; // [esp+20h] [ebp-18h]
  float v12; // [esp+20h] [ebp-18h]
  float v13; // [esp+28h] [ebp-10h]
  int v14; // [esp+2Ch] [ebp-Ch]
  float v15; // [esp+2Ch] [ebp-Ch]
  int v16; // [esp+34h] [ebp-4h]
  float retaddr; // [esp+38h] [ebp+0h]

  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.CopyFrom)(this) ) /*0x5e3ade*/
    return 0.0; /*0x5e3ae4*/
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x304))(*((_DWORD *)this + 0x16)); /*0x5e3af6*/
  *(float *)&v16 = Actor_CalcCurrentEncumberance_(this); /*0x5e3b08*/
  this->vtbl->GetBaseForm(this); /*0x5e3b16*/
  v14 = ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 0x36); /*0x5e3b33*/
  v11 = (float)v14; /*0x5e3b44*/
  v12 = (float)((int (__thiscall *)(TESObjectREFR *, int, _DWORD))this->vtbl[1].Unk_37)(this, 0xD, LODWORD(v11)); /*0x5e3b5e*/
  v10 = retaddr; /*0x5e3b6e*/
  v9 = (float)((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].Unk_37)(this); /*0x5e3b80*/
  v15 = Calc_SwimRunSpeed(v9, COERCE_FLOAT(4), SLOBYTE(v10), v16, *(float *)&v14, v12); /*0x5e3b8b*/
  if ( !*((_DWORD *)this + 0x16) ) /*0x5e3b8f*/
    return v15; /*0x5e3b8f*/
  v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x184))(*((_DWORD *)this + 0x16)); /*0x5e3ba4*/
  if ( !v3 ) /*0x5e3ba8*/
    return v15; /*0x5e3ba8*/
  if ( *(_BYTE *)(v3 + 0x20) != 1 ) /*0x5e3bb2*/
    return v15; /*0x5e3bb2*/
  v4 = *((_DWORD *)this + 0x16); /*0x5e3bb8*/
  if ( !v4 ) /*0x5e3bbd*/
    return v15; /*0x5e3bbd*/
  v5 = *(_DWORD *)(v4 + 8); /*0x5e3bc3*/
  if ( !v5 ) /*0x5e3bc8*/
    return v15; /*0x5e3bc8*/
  v6 = *(TargetData **)(v5 + 0x28); /*0x5e3bce*/
  if ( !v6 ) /*0x5e3bd3*/
    return v15; /*0x5e3bd3*/
  v7.form = sub_569E60(v6).form; /*0x5e3bda*/
  objectCode = (TESObjectREFR *)v7.objectCode; /*0x5e3bdf*/
  if ( !v7.objectCode ) /*0x5e3be3*/
    return v15; /*0x5e3be3*/
  if ( (PlayerCharacter *)v7.form == reference ) /*0x5e3bef*/
    return v15; /*0x5e3bef*/
  if ( !v7.form->vtbl->IsActor((TESObjectREFR *)v7.objectCode) ) /*0x5e3bfb*/
    return v15; /*0x5e3bfb*/
  if ( !objectCode[1].vtbl ) /*0x5e3c01*/
    return v15; /*0x5e3c01*/
  v13 = sub_5E3AD0(objectCode); /*0x5e3c0e*/
  if ( v13 <= 0.0 ) /*0x5e3c1d*/
    return v15; /*0x5e3c1d*/
  if ( TesObjectREF_GetDistance(this, objectCode, 0) < flt_A44BA4 ) /*0x5e3c34*/
    v13 = v13 - dbl_A3F3D0; /*0x5e3c40*/
  if ( v13 > 0.0 && v15 >= (double)v13 ) /*0x5e3c5e*/
    return v13; /*0x5e3c65*/
  else
    return v15; /*0x5e3c71*/
}
