UInt32 __thiscall MobileObject_GetProcessLevel(MobileObject *this)
{
  TESObjectCELL *DwordAtOffset40; // edi

  if ( sub_45A500(g_TESSaveLoadGame) || !PlayerCharacter::IsSleeping_(reference) ) /*0x65ad18*/
  {
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x65ad45*/
    if ( !sub_45A500(g_TESSaveLoadGame) && !this->super.niNode && !sub_4354F0(MEMORY[0xB33A1C], (int)this) ) /*0x65ad5d*/
      goto LABEL_20; /*0x65ad5d*/
    if ( TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 1) ) /*0x65ad6f*/
      return 0; /*0x65ad7c*/
    if ( TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 0) ) /*0x65ad86*/
    {
      return 1; /*0x65ad90*/
    }
    else
    {
LABEL_20:
      if ( DwordAtOffset40 && TESObjectCELL_HasMiddleLowProcess(DwordAtOffset40) /*0x65adaf*/
        || TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 0) )
      {
        return 2; /*0x65adb9*/
      }
      else
      {
        return 3; /*0x65adc1*/
      }
    }
  }
  else if ( this->process ) /*0x65ad21*/
  {
    return this->process->GetProcessLevel(this->process); /*0x65ad30*/
  }
  else
  {
    return 0xFFFFFFFF; /*0x65ad32*/
  }
}
