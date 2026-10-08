// Fly-speed branch used by sub_5E65B0 when fly-speed flag 0x2000 is set. Uses Speed actor value and encumbrance, then applies package-target limiting pattern.
double __thiscall sub_5E3C80(TESObjectREFR *this)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  TargetData *v6; // ecx
  ObjectType v7; // eax
  TESObjectREFR *objectCode; // esi
  float v9; // [esp+4h] [ebp-14h]
  float v10; // [esp+10h] [ebp-8h]
  float v11; // [esp+14h] [ebp-4h]
  float v12; // [esp+14h] [ebp-4h]

  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.CopyFrom)(this) ) /*0x5e3c8e*/
    return 0.0; /*0x5e3c94*/
  v11 = Actor_CalcCurrentEncumberance_(this); /*0x5e3ca2*/
  v9 = (float)((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 4); /*0x5e3cc5*/
  v12 = sub_547E70(v9, v11); /*0x5e3cd0*/
  if ( !*((_DWORD *)this + 0x16) ) /*0x5e3cd4*/
    return v12; /*0x5e3cd4*/
  v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x184))(*((_DWORD *)this + 0x16)); /*0x5e3ce9*/
  if ( !v3 ) /*0x5e3ced*/
    return v12; /*0x5e3ced*/
  if ( *(_BYTE *)(v3 + 0x20) != 1 ) /*0x5e3cf7*/
    return v12; /*0x5e3cf7*/
  v4 = *((_DWORD *)this + 0x16); /*0x5e3cfd*/
  if ( !v4 ) /*0x5e3d02*/
    return v12; /*0x5e3d02*/
  v5 = *(_DWORD *)(v4 + 8); /*0x5e3d08*/
  if ( !v5 ) /*0x5e3d0d*/
    return v12; /*0x5e3d0d*/
  v6 = *(TargetData **)(v5 + 0x28); /*0x5e3d13*/
  if ( !v6 ) /*0x5e3d18*/
    return v12; /*0x5e3d18*/
  v7.form = sub_569E60(v6).form; /*0x5e3d1f*/
  objectCode = (TESObjectREFR *)v7.objectCode; /*0x5e3d24*/
  if ( !v7.objectCode ) /*0x5e3d28*/
    return v12; /*0x5e3d28*/
  if ( (PlayerCharacter *)v7.form == reference ) /*0x5e3d34*/
    return v12; /*0x5e3d34*/
  if ( !v7.form->vtbl->IsActor((TESObjectREFR *)v7.objectCode) ) /*0x5e3d40*/
    return v12; /*0x5e3d40*/
  if ( !objectCode[1].vtbl ) /*0x5e3d46*/
    return v12; /*0x5e3d46*/
  v10 = sub_5E3C80(objectCode); /*0x5e3d53*/
  if ( v10 <= 0.0 ) /*0x5e3d62*/
    return v12; /*0x5e3d62*/
  if ( TesObjectREF_GetDistance(this, objectCode, 0) < flt_A44BA4 ) /*0x5e3d79*/
    v10 = v10 - dbl_A3F3D0; /*0x5e3d85*/
  if ( v10 > 0.0 && v12 >= (double)v10 ) /*0x5e3da3*/
    return v10; /*0x5e3daa*/
  else
    return v12; /*0x5e3db6*/
}
