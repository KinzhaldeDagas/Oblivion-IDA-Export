TESObjectREFR *__thiscall sub_60FC20(PlayerCharacter *this, float a2)
{
  TESObjectREFR *result; // eax
  PlayerCharacter *v4; // edi
  int v5; // eax
  double v6; // st7
  double v7; // st7
  int v8; // [esp+0h] [ebp-8h]
  float v9; // [esp+Ch] [ebp+4h]

  result = (TESObjectREFR *)reference; /*0x60fc20*/
  if ( this == reference && BYTE2(result[3].member.super.refID) ) /*0x60fc2c*/
  {
    result[0x14].member.rot.x = result[0x14].member.rot.x + a2; /*0x60fc40*/
  }
  else
  {
    sub_4269E0(&this->super.super.super.super.baseExtraList, a2); /*0x60fc54*/
    if ( a2 <= 1.0 ) /*0x60fc68*/
      return ((TESObjectREFR *(__thiscall *)(PlayerCharacter *, int))this->vtbl->super.super.super.super.MarkAsModified)( /*0x60fc68*/
               this,
               0x80);
    v4 = reference; /*0x60fc6f*/
    if ( this != reference ) /*0x60fc77*/
      return ((TESObjectREFR *(__thiscall *)(PlayerCharacter *, int))this->vtbl->super.super.super.super.MarkAsModified)( /*0x60fc77*/
               this,
               0x80);
    v5 = Double_To_SInt32(a2); /*0x60fc79*/
    sub_660710(v4, v5); /*0x60fc81*/
    v6 = (double)(int)reference->miscStats[4]; /*0x60fc92*/
    if ( (int)reference->miscStats[4] < 0 ) /*0x60fc9a*/
      v6 = v6 + flt_A2FC78; /*0x60fc9c*/
    v9 = v6; /*0x60fca4*/
    if ( v9 < ((double (__thiscall *)(PlayerCharacter *))reference->vtbl->super.Unk_94)(reference) ) /*0x60fcbb*/
    {
      v7 = ((double (__thiscall *)(PlayerCharacter *, int))reference->vtbl->super.Unk_94)(reference, v8); /*0x60fccb*/
      reference->miscStats[4] = Double_To_SInt32(v7); /*0x60fcd8*/
      return ((TESObjectREFR *(__thiscall *)(PlayerCharacter *, int))this->vtbl->super.super.super.super.MarkAsModified)( /*0x60fceb*/
               this,
               0x80);
    }
    else
    {
      return ((TESObjectREFR *(__thiscall *)(_DWORD, _DWORD))this->vtbl->super.super.super.super.MarkAsModified)( /*0x60fd14*/
               this,
               0x80);
    }
  }
  return result; /*0x60fced*/
}
