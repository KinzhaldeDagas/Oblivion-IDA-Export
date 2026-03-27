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

  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.CopyFrom)(this) )
    return 0.0;
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x304))(*((_DWORD *)this + 0x16));
  *(float *)&v16 = Actor_CalcCurrentEncumberance_(this);
  this->vtbl->GetBaseForm(this);
  v14 = ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 0x36);
  v11 = (float)v14;
  v12 = (float)((int (__thiscall *)(TESObjectREFR *, int, _DWORD))this->vtbl[1].Unk_37)(this, 0xD, LODWORD(v11));
  v10 = retaddr;
  v9 = (float)((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].Unk_37)(this);
  v15 = Calc_SwimRunSpeed(v9, COERCE_FLOAT(4), SLOBYTE(v10), v16, *(float *)&v14, v12);
  if ( !*((_DWORD *)this + 0x16) )
    return v15;
  v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x184))(*((_DWORD *)this + 0x16));
  if ( !v3 )
    return v15;
  if ( *(_BYTE *)(v3 + 0x20) != 1 )
    return v15;
  v4 = *((_DWORD *)this + 0x16);
  if ( !v4 )
    return v15;
  v5 = *(_DWORD *)(v4 + 8);
  if ( !v5 )
    return v15;
  v6 = *(TargetData **)(v5 + 0x28);
  if ( !v6 )
    return v15;
  v7.form = sub_569E60(v6).form;
  objectCode = (TESObjectREFR *)v7.objectCode;
  if ( !v7.objectCode )
    return v15;
  if ( (PlayerCharacter *)v7.form == TESDataHandler_g_PlayerRef )
    return v15;
  if ( !v7.form->vtbl->IsActor((TESObjectREFR *)v7.objectCode) )
    return v15;
  if ( !objectCode[1].vtbl )
    return v15;
  v13 = sub_5E3AD0((int *)objectCode);
  if ( v13 <= 0.0 )
    return v15;
  if ( TesObjectREF_GetDistance(this, objectCode, 0) < flt_A44BA4 )
    v13 = v13 - dbl_A3F3D0;
  if ( v13 > 0.0 && v15 >= (double)v13 )
    return v13;
  else
    return v15;
}
