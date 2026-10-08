void __usercall callback(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  if ( InterfaceManager_ConsumeMessageButton() == 1 ) /*0x4b6d27*/
  {
    ActivateRef((TESObjectREFR *)unk_B35B20, a1, a2, a3, (TESObjectREFR *)reference, 0, 0, 1); /*0x4b6d3b*/
    unk_B35B20 = 0; /*0x4b6d40*/
  }
}
