int __thiscall HUDMainMenu_UpdateActiveEffects(_DWORD *this, int a2, float a3)
{
  if ( !a2 || 0.0 == *(float *)(a2 + 0x1C) || (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable((_DWORD *)a2) )
    return HUDMainMenu_UpdateActiveEffects_::Done();
  if ( !*(this + 0x21) )
    JUMPOUT(0x5A7D82);
  return HUDMainMenu_UpdateActiveEffects_::CheckForDuplicateLoop(a2, a3);
}
