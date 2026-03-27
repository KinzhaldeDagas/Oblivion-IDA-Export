double __thiscall sub_5E3750(TESObjectREFR *this)
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

  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.CopyFrom)(this) )
    return 0.0;
  (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x304))(*((_DWORD *)this + 0x16));
  v14 = Actor_CalcCurrentEncumberance_(this);
  if ( *((_DWORD *)this + 0x16) )
  {
    if ( ((*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2C0))(*((_DWORD *)this + 0x16)) & 0x400) != 0 )
      (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2C0))(*((_DWORD *)this + 0x16));
  }
  this->vtbl->GetBaseForm(this);
  *(float *)&v11 = (float)((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].Unk_37)(this);
  v10 = retaddr;
  v9 = (float)((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].Unk_37)(this);
  v13 = Calc_RunSpeed(v9, COERCE_FLOAT(4), SLOBYTE(v10), v14, v11, 0xD);
  if ( !*((_DWORD *)this + 0x16) )
    return v13;
  v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x184))(*((_DWORD *)this + 0x16));
  if ( !v3 )
    return v13;
  if ( *(_BYTE *)(v3 + 0x20) != 1 )
    return v13;
  v4 = *((_DWORD *)this + 0x16);
  if ( !v4 )
    return v13;
  v5 = *(_DWORD *)(v4 + 8);
  if ( !v5 )
    return v13;
  v6 = *(TargetData **)(v5 + 0x28);
  if ( !v6 )
    return v13;
  v7.form = sub_569E60(v6).form;
  objectCode = (TESObjectREFR *)v7.objectCode;
  if ( !v7.objectCode )
    return v13;
  if ( (PlayerCharacter *)v7.form == TESDataHandler_g_PlayerRef )
    return v13;
  if ( !v7.form->vtbl->IsActor((TESObjectREFR *)v7.objectCode) )
    return v13;
  if ( !objectCode[1].vtbl )
    return v13;
  v12 = sub_5E3750((int *)objectCode);
  if ( v12 <= 0.0 )
    return v13;
  if ( TesObjectREF_GetDistance(this, objectCode, 0) < flt_A44BA4 )
    v12 = v12 - dbl_A3F3D0;
  if ( v12 > 0.0 && v13 >= (double)v12 )
    return v12;
  else
    return v13;
}
