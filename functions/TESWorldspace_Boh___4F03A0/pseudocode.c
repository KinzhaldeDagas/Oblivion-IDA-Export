void __thiscall TESWorldspace_Boh_(TESWorldSpace *this, TESChildCELL *a2)
{
  TESObjectCELL *v5; // eax

  if ( a2 ) /*0x4f03a7*/
  {
    if ( ((int)a2[2].vtbl & 0x4000) == 0 ) /*0x4f03b1*/
    {
      v5 = sub_4EF1F0(this); /*0x4f03b3*/
      TESObjectCELL_AddReference(v5, (TESObjectREFR *)a2); /*0x4f03bb*/
    }
  }
}
