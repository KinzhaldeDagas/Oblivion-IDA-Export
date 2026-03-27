TESForm *sub_499E40()
{
  TESForm *result; // eax
  TESForm *CurrentCell; // esi
  NiPoint3 *p_pos; // eax
  int v3; // [esp+Ch] [ebp-10h]
  float v4; // [esp+10h] [ebp-Ch]
  float v5; // [esp+14h] [ebp-8h]

  result = TES_GetCurrentCell(TES);
  if ( result )
  {
    if ( LodWaterRoot )
    {
      CurrentCell = TES_GetCurrentCell(TES);
      v4 = (float)((TESObjectCELL_GetXCoordinate((TESObjectCELL *)CurrentCell) << 0xC) + 0x800);
      v3 = (TESObjectCELL_GetYCoordinate((TESObjectCELL *)CurrentCell) << 0xC) + 0x800;
      p_pos = &LodWaterRoot->members.super.m_localTransform.pos;
      p_pos->x = v4;
      v5 = (float)v3;
      p_pos->y = v5;
      p_pos->z = 0.0;
      NiAVObject_UpdateNiAVObject((NiAVObject *)LodWaterRoot, 0.0, 1);
      return (TESForm *)NiNode_UpdateDynamicEffectState(LodWaterRoot);
    }
  }
  return result;
}
