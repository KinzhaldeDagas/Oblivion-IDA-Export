TESObjectREFR *__thiscall sub_60FC20(PlayerCharacter *this, float a2)
{
  TESObjectREFR *result; // eax
  PlayerCharacter *v4; // edi
  int v5; // eax
  double v6; // st7
  double v7; // st7
  int v8; // [esp+0h] [ebp-8h]
  float v9; // [esp+Ch] [ebp+4h]

  result = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  if ( this == TESDataHandler_g_PlayerRef && BYTE2(result[3].member.super.refID) )
  {
    result[0x14].member.rot.x = result[0x14].member.rot.x + a2;
  }
  else
  {
    sub_4269E0(&this->super.super.super.super.baseExtraList, a2);
    if ( a2 <= 1.0 )
      return ((TESObjectREFR *(__thiscall *)(PlayerCharacter *, int))this->vtbl->super.super.super.super.MarkAsModified)(
               this,
               0x80);
    v4 = TESDataHandler_g_PlayerRef;
    if ( this != TESDataHandler_g_PlayerRef )
      return ((TESObjectREFR *(__thiscall *)(PlayerCharacter *, int))this->vtbl->super.super.super.super.MarkAsModified)(
               this,
               0x80);
    v5 = Double_To_SInt32(a2);
    sub_660710(v4, v5);
    v6 = (double)(int)TESDataHandler_g_PlayerRef->miscStats[4];
    if ( (int)TESDataHandler_g_PlayerRef->miscStats[4] < 0 )
      v6 = v6 + flt_A2FC78;
    v9 = v6;
    if ( v9 < ((double (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.Unk_94)(TESDataHandler_g_PlayerRef) )
    {
      v7 = ((double (__thiscall *)(PlayerCharacter *, int))TESDataHandler_g_PlayerRef->vtbl->super.Unk_94)(
             TESDataHandler_g_PlayerRef,
             v8);
      TESDataHandler_g_PlayerRef->miscStats[4] = Double_To_SInt32(v7);
      return ((TESObjectREFR *(__thiscall *)(PlayerCharacter *, int))this->vtbl->super.super.super.super.MarkAsModified)(
               this,
               0x80);
    }
    else
    {
      return ((TESObjectREFR *(__thiscall *)(PlayerCharacter *, int))this->vtbl->super.super.super.super.MarkAsModified)(
               this,
               0x80);
    }
  }
  return result;
}
