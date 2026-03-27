void __thiscall sub_43A8F0(int *this, TESObjectREFR *a2, NiObjectNET *a3)
{
  NiExtraData *ExtraData; // eax

  if ( a3 )
  {
    ExtraData = NiObjectNET_GetExtraData(a3, dword_A7D0EC);
    if ( ExtraData )
    {
      if ( a2 )
      {
        if ( ((int)ExtraData[1].__vftable & 0x10) != 0 && (a2->member.super.flags & kFormFlags_TurnOffFire) == 0 )
          sub_43A100(this, (int)this, (int)a3);
      }
    }
  }
}
