char __usercall sub_506C80@<al>(double a1@<st0>)
{
  bool v1; // al
  TESObjectREFR *v2; // ecx
  UInt32 DwordAtOffset40; // eax
  TESWorldSpace *WorldSpace; // eax

  v1 = sub_4D8B90((TESObjectREFR *)reference); /*0x506c86*/
  v2 = (TESObjectREFR *)reference; /*0x506c8d*/
  if ( v1 ) /*0x506c93*/
  {
    DwordAtOffset40 = Shared_GetDwordAtOffset40(v2); /*0x506c95*/
    sub_4CBBF0(DwordAtOffset40, a1); /*0x506c9c*/
  }
  else
  {
    WorldSpace = TESObjectREFR_GetWorldSpace(v2); /*0x506ca4*/
    sub_4EF2A0((int)WorldSpace, a1); /*0x506cab*/
  }
  return 1; /*0x506ca3*/
}
