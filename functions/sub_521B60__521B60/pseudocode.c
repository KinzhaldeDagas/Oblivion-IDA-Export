void __usercall sub_521B60(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  unsigned __int8 v3; // al
  TESObjectREFR *v4; // ecx

  v3 = InterfaceManager_ConsumeMessageButton(); /*0x521b60*/
  v4 = (TESObjectREFR *)dword_B361CC[0x41]; /*0x521b65*/
  dword_B361CC[0x40] = 2 - (v3 != 1); /*0x521b7a*/
  ActivateRef(v4, a1, a2, a3, (TESObjectREFR *)reference, 0, 0, 1); /*0x521b85*/
  dword_B361CC[0x41] = 0; /*0x521b8a*/
}
