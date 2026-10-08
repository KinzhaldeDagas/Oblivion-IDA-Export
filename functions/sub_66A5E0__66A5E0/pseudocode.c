void __thiscall sub_66A5E0(PlayerCharacter *this)
{
  TESObjectCELL *DwordAtOffset40; // edi
  BSExtraDataVtbl *v3; // edi
  TESObjectCELL *v4; // edi
  int *v5; // eax

  if ( this->unk1F0 ) /*0x66a5e3*/
  {
    if ( Shared_GetDwordAtOffset40(this) ) /*0x66a5ec*/
    {
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x66a5fd*/
      if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x66a601*/
        v3 = sub_424180(&DwordAtOffset40->members.extraData); /*0x66a612*/
      else
        v3 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x66a616*/
      if ( (BSExtraDataVtbl *)sub_531F10((int *)this->unk1F0) != v3 ) /*0x66a629*/
      {
        v4 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x66a632*/
        if ( TESObjectCELL_IsInterior(v4) ) /*0x66a636*/
        {
          v5 = (int *)sub_424180(&v4->members.extraData); /*0x66a642*/
          sub_531E90((int *)this->unk1F0, v5); /*0x66a64e*/
        }
        else
        {
          sub_531E90((int *)this->unk1F0, (int *)MEMORY[0xB35C24]); /*0x66a662*/
        }
      }
    }
  }
}
