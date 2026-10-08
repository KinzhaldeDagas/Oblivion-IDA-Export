TESObjectCELL *__thiscall sub_49A000(_DWORD *this, TESObjectCELL *a2)
{
  double WaterHeight; // st7
  float *v4; // eax
  TESObjectCELL *result; // eax
  float v6; // [esp+10h] [ebp-Ch]
  float v7; // [esp+14h] [ebp-8h]
  float v8; // [esp+18h] [ebp-4h]

  if ( a2 != (TESObjectCELL *)*(this + 5) ) /*0x49a00e*/
  {
    if ( a2 ) /*0x49a016*/
    {
      if ( *(this + 2) ) /*0x49a01c*/
      {
        TESObjectCELL::GetWaterForm(a2); /*0x49a028*/
        v6 = (float)((TESObjectCELL_GetXCoordinate(a2) << 0xC) + 0x800); /*0x49a046*/
        v7 = (float)((TESObjectCELL_GetYCoordinate(a2) << 0xC) + 0x800); /*0x49a067*/
        if ( (a2->members.flags0 & 2) != 0 ) /*0x49a06b*/
          WaterHeight = TESObjectCELL_GetWaterHeight((ExtraDataList *)a2); /*0x49a06f*/
        else
          WaterHeight = 0.0; /*0x49a076*/
        v8 = WaterHeight; /*0x49a07b*/
        v4 = (float *)(*(this + 1) + 0x54); /*0x49a089*/
        *v4 = v6; /*0x49a08c*/
        v4[1] = v7; /*0x49a092*/
        v4[2] = v8; /*0x49a098*/
        NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 1), 0.0, 1); /*0x49a0a1*/
      }
    }
    *(this + 5) = a2; /*0x49a0a6*/
  }
  if ( a2 && (a2->members.flags0 & 2) != 0 ) /*0x49a0b6*/
  {
    *(_BYTE *)this = 1; /*0x49a0b8*/
    *(_WORD *)(*(this + 1) + 0x18) &= ~1u; /*0x49a0be*/
  }
  else
  {
    *(_BYTE *)this = 0; /*0x49a0c6*/
    *(_WORD *)(*(this + 1) + 0x18) |= 1u; /*0x49a0cc*/
  }
  result = Shared_GetDwordAtOffset40((TESObjectREFR *)reference); /*0x49a0d7*/
  if ( result == a2 ) /*0x49a0de*/
  {
    if ( a2 ) /*0x49a0e2*/
    {
      result = (TESObjectCELL *)(a2->members.flags0 >> 1); /*0x49a0e8*/
      if ( (a2->members.flags0 & 2) != 0 ) /*0x49a0ec*/
        MEMORY[0xB33E90][0x138D] = 1; /*0x49a0ee*/
    }
  }
  return result; /*0x49a0f5*/
}
