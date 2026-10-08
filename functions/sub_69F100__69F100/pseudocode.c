int __usercall sub_69F100@<eax>(double a1@<st2>, double a2@<st1>)
{
  int result; // eax
  TESForm *v3; // esi
  TESAmmo *v4; // eax
  double v5; // st7
  TESDataHandler *v6; // ecx

  result = unk_B3C0CC; /*0x69f122*/
  v3 = 0; /*0x69f127*/
  if ( !unk_B3C0CC ) /*0x69f122*/
  {
    v4 = (TESAmmo *)FormHeapAlloc(0x84u); /*0x69f132*/
    if ( v4 ) /*0x69f144*/
      v3 = (TESForm *)TESAmmo::TESAmmo(v4); /*0x69f14d*/
    v5 = ((double (__thiscall *)(TESForm *, const char *))v3[2].vtbl->Unk_06)(&v3[2], "marker_error.nif"); /*0x69f165*/
    v6 = g_TESDataHandler; /*0x69f167*/
    unk_B3C0CC = (int)v3; /*0x69f16e*/
    TESDataHandler_AddForm(v6, a1, a2, v5, v3); /*0x69f174*/
    return unk_B3C0CC; /*0x69f179*/
  }
  return result; /*0x69f17e*/
}
