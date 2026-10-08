// Swim walk-speed branch used by sub_5E65B0 when swim 0x800 is set without run 0x200. Calls Calc_SwimSpeed and applies same package-target limiting pattern.
double __thiscall sub_5E3920(TESObjectREFR *this)
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

  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.CopyFrom)(this) ) /*0x5e392e*/
    return 0.0; /*0x5e3934*/
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x304))(*((_DWORD *)this + 0x16)); /*0x5e3946*/
  *(float *)&v16 = Actor_CalcCurrentEncumberance_(this); /*0x5e3958*/
  this->vtbl->GetBaseForm(this); /*0x5e3966*/
  v14 = ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 0x36); /*0x5e3983*/
  v11 = (float)v14; /*0x5e3994*/
  v12 = (float)((int (__thiscall *)(TESObjectREFR *, int, _DWORD))this->vtbl[1].Unk_37)(this, 0xD, LODWORD(v11)); /*0x5e39ae*/
  v10 = retaddr; /*0x5e39be*/
  v9 = (float)((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].Unk_37)(this); /*0x5e39d0*/
  v15 = Calc_SwimSpeed(v9, COERCE_FLOAT(4), SLOBYTE(v10), v16, *(float *)&v14, v12); /*0x5e39db*/
  if ( !*((_DWORD *)this + 0x16) ) /*0x5e39df*/
    return v15; /*0x5e39df*/
  v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x184))(*((_DWORD *)this + 0x16)); /*0x5e39f4*/
  if ( !v3 ) /*0x5e39f8*/
    return v15; /*0x5e39f8*/
  if ( *(_BYTE *)(v3 + 0x20) != 1 ) /*0x5e3a02*/
    return v15; /*0x5e3a02*/
  v4 = *((_DWORD *)this + 0x16); /*0x5e3a08*/
  if ( !v4 ) /*0x5e3a0d*/
    return v15; /*0x5e3a0d*/
  v5 = *(_DWORD *)(v4 + 8); /*0x5e3a13*/
  if ( !v5 ) /*0x5e3a18*/
    return v15; /*0x5e3a18*/
  v6 = *(TargetData **)(v5 + 0x28); /*0x5e3a1e*/
  if ( !v6 ) /*0x5e3a23*/
    return v15; /*0x5e3a23*/
  v7.form = sub_569E60(v6).form; /*0x5e3a2a*/
  objectCode = (TESObjectREFR *)v7.objectCode; /*0x5e3a2f*/
  if ( !v7.objectCode ) /*0x5e3a33*/
    return v15; /*0x5e3a33*/
  if ( (PlayerCharacter *)v7.form == reference ) /*0x5e3a3f*/
    return v15; /*0x5e3a3f*/
  if ( !v7.form->vtbl->IsActor((TESObjectREFR *)v7.objectCode) ) /*0x5e3a4b*/
    return v15; /*0x5e3a4b*/
  if ( !objectCode[1].vtbl ) /*0x5e3a51*/
    return v15; /*0x5e3a51*/
  v13 = sub_5E3920(objectCode); /*0x5e3a5e*/
  if ( v13 <= 0.0 ) /*0x5e3a6d*/
    return v15; /*0x5e3a6d*/
  if ( TesObjectREF_GetDistance(this, objectCode, 0) < flt_A44BA4 ) /*0x5e3a84*/
    v13 = v13 - dbl_A3F3D0; /*0x5e3a90*/
  if ( v13 > 0.0 && v15 >= (double)v13 ) /*0x5e3aae*/
    return v13; /*0x5e3ab5*/
  else
    return v15; /*0x5e3ac1*/
}
