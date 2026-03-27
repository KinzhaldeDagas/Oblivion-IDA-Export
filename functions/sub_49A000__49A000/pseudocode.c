TESObjectCELL *__thiscall sub_49A000(_DWORD *this, TESObjectCELL *a2)
{
  double WaterHeight; // st7
  float *v4; // eax
  TESObjectCELL *result; // eax
  float v6; // [esp+10h] [ebp-Ch]
  float v7; // [esp+14h] [ebp-8h]
  float v8; // [esp+18h] [ebp-4h]

  if ( a2 != (TESObjectCELL *)*(this + 5) )
  {
    if ( a2 )
    {
      if ( *(this + 2) )
      {
        TESObjectCELL::GetWaterForm(a2);
        v6 = (float)((TESObjectCELL_GetXCoordinate(a2) << 0xC) + 0x800);
        v7 = (float)((TESObjectCELL_GetYCoordinate(a2) << 0xC) + 0x800);
        if ( (a2->members.flags0 & 2) != 0 )
          WaterHeight = TESObjectCELL_GetWaterHeight(a2);
        else
          WaterHeight = 0.0;
        v8 = WaterHeight;
        v4 = (float *)(*(this + 1) + 0x54);
        *v4 = v6;
        v4[1] = v7;
        v4[2] = v8;
        NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 1), 0.0, 1);
      }
    }
    *(this + 5) = a2;
  }
  if ( a2 && (a2->members.flags0 & 2) != 0 )
  {
    *(_BYTE *)this = 1;
    *(_WORD *)(*(this + 1) + 0x18) &= ~1u;
  }
  else
  {
    *(_BYTE *)this = 0;
    *(_WORD *)(*(this + 1) + 0x18) |= 1u;
  }
  result = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  if ( result == a2 )
  {
    if ( a2 )
    {
      result = (TESObjectCELL *)(a2->members.flags0 >> 1);
      if ( (a2->members.flags0 & 2) != 0 )
        byte_B3521D = 1;
    }
  }
  return result;
}
