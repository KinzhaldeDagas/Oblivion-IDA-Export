TESObjectREFR *__thiscall sub_5F10E0(TESObjectREFR *this)
{
  int v3; // eax
  bool v4; // sf
  float *v5; // eax
  TESObjectCELL *ParentCell; // eax
  double v7; // st7
  int v8; // edx
  double v9; // st7
  float v10; // [esp+4h] [ebp-8h]
  float v11; // [esp+8h] [ebp-4h]

  if ( !*((_DWORD *)this + 0x16)
    || ((*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x2C0))(*((_DWORD *)this + 0x16)) & 0x800) == 0 )
  {
    return (TESObjectREFR *)this->member.pos;
  }
  v3 = dword_B3B7C4 + 1;
  v4 = dword_B3B7C4 - 4 < 0;
  dword_B3B7C4 = v3;
  if ( v4 == __OFSUB__(v3, 5) )
  {
    v3 = 0;
    dword_B3B7C4 = 0;
  }
  v5 = (float *)(0xC * v3 + 0xB3B788);
  *v5 = this->member.pos[0];
  v5[1] = this->member.pos[1];
  v5[2] = this->member.pos[2];
  if ( !TESObjectREFR_GetParentCell(this) || (TESObjectREFR_GetParentCell(this)->members.flags0 & 2) == 0 )
    return (TESObjectREFR *)(0xC * dword_B3B7C4 + 0xB3B788);
  ParentCell = TESObjectREFR_GetParentCell(this);
  v11 = TESObjectCELL_GetWaterHeight((ExtraDataList *)ParentCell) - dbl_A3F3F0;
  v7 = sub_5E0660(this);
  v8 = dword_B3B7C4;
  v10 = v7 * dbl_A31C70;
  v9 = v10 + *(float *)(0xC * dword_B3B7C4 + 0xB3B790);
  if ( v11 <= v9 )
    *(float *)(0xC * dword_B3B7C4 + 0xB3B790) = v11;
  else
    *(float *)(0xC * dword_B3B7C4 + 0xB3B790) = v9;
  return (TESObjectREFR *)(0xC * v8 + 0xB3B788);
}
