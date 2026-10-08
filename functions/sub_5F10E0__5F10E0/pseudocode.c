TESObjectREFR *__thiscall sub_5F10E0(TESObjectREFR *this)
{
  int v3; // eax
  bool v4; // sf
  float *v5; // eax
  ExtraDataList *DwordAtOffset40; // eax
  double ScaledCollisionHeight; // st7
  int v8; // edx
  double v9; // st7
  float v10; // [esp+4h] [ebp-8h]
  float v11; // [esp+8h] [ebp-4h]

  if ( !*((_DWORD *)this + 0x16) /*0x5f10fd*/
    || ((*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2C0))(*((_DWORD *)this + 0x16)) & 0x800) == 0 )
  {
    return (TESObjectREFR *)this->member.pos; /*0x5f10ff*/
  }
  v3 = unk_B3B7C4 + 1; /*0x5f110c*/
  v4 = unk_B3B7C4 - 4 < 0; /*0x5f110f*/
  unk_B3B7C4 = v3; /*0x5f1112*/
  if ( v4 == __OFSUB__(v3, 5) ) /*0x5f1117*/
  {
    v3 = 0; /*0x5f1119*/
    unk_B3B7C4 = 0; /*0x5f111b*/
  }
  v5 = (float *)(0xC * v3 + 0xB3B788); /*0x5f1126*/
  *v5 = this->member.pos[0]; /*0x5f112d*/
  v5[1] = this->member.pos[1]; /*0x5f1132*/
  v5[2] = this->member.pos[2]; /*0x5f1138*/
  if ( !Shared_GetDwordAtOffset40(this) || (*(_BYTE *)(Shared_GetDwordAtOffset40(this) + 0x24) & 2) == 0 ) /*0x5f115a*/
    return (TESObjectREFR *)(0xC * unk_B3B7C4 + 0xB3B788); /*0x5f11df*/
  DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(this); /*0x5f115e*/
  v11 = TESObjectCELL_GetWaterHeight(DwordAtOffset40) - dbl_A3F3F0; /*0x5f1172*/
  ScaledCollisionHeight = Actor_GetScaledCollisionHeight(this); /*0x5f1176*/
  v8 = unk_B3B7C4; /*0x5f1181*/
  v10 = ScaledCollisionHeight * dbl_A31C70; /*0x5f118a*/
  v9 = v10 + *(float *)(0xC * unk_B3B7C4 + 0xB3B790); /*0x5f1192*/
  if ( v11 <= v9 ) /*0x5f11a4*/
    *(float *)(0xC * unk_B3B7C4 + 0xB3B790) = v11; /*0x5f11c3*/
  else
    *(float *)(0xC * unk_B3B7C4 + 0xB3B790) = v9; /*0x5f11ab*/
  return (TESObjectREFR *)(0xC * v8 + 0xB3B788); /*0x5f1102*/
}
