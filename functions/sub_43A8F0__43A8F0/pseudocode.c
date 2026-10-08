void __thiscall sub_43A8F0(int *this, TESObjectREFR *a2, NiObjectNET *a3)
{
  NiExtraData *ExtraData; // eax

  if ( a3 ) /*0x43a8fa*/
  {
    ExtraData = NiObjectNET_GetExtraData(a3, dword_A7D0EC); /*0x43a903*/
    if ( ExtraData ) /*0x43a90a*/
    {
      if ( a2 ) /*0x43a912*/
      {
        if ( ((int)ExtraData[1].__vftable & 0x10) != 0 && (a2->member.super.flags & kFormFlags_TurnOffFire) == 0 ) /*0x43a927*/
          sub_43A100(this, (int)this, (int)a3); /*0x43a92c*/
      }
    }
  }
}
