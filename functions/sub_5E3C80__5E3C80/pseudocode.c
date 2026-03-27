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

  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.CopyFrom)(this) )
    return 0.0;
  v11 = Actor_CalcCurrentEncumberance_(this);
  v9 = (float)((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 4);
  v12 = sub_547E70(v9, v11);
  if ( !*((_DWORD *)this + 0x16) )
    return v12;
  v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x184))(*((_DWORD *)this + 0x16));
  if ( !v3 )
    return v12;
  if ( *(_BYTE *)(v3 + 0x20) != 1 )
    return v12;
  v4 = *((_DWORD *)this + 0x16);
  if ( !v4 )
    return v12;
  v5 = *(_DWORD *)(v4 + 8);
  if ( !v5 )
    return v12;
  v6 = *(TargetData **)(v5 + 0x28);
  if ( !v6 )
    return v12;
  v7.form = sub_569E60(v6).form;
  objectCode = (TESObjectREFR *)v7.objectCode;
  if ( !v7.objectCode )
    return v12;
  if ( (PlayerCharacter *)v7.form == TESDataHandler_g_PlayerRef )
    return v12;
  if ( !v7.form->vtbl->IsActor((TESObjectREFR *)v7.objectCode) )
    return v12;
  if ( !objectCode[1].vtbl )
    return v12;
  v10 = sub_5E3C80((int *)objectCode);
  if ( v10 <= 0.0 )
    return v12;
  if ( TesObjectREF_GetDistance(this, objectCode, 0) < flt_A44BA4 )
    v10 = v10 - dbl_A3F3D0;
  if ( v10 > 0.0 && v12 >= (double)v10 )
    return v10;
  else
    return v12;
}
