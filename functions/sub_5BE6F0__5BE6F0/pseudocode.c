int __thiscall sub_5BE6F0(signed int *this, HINSTANCE hinstDLL, float fdwReason, void *a4)
{
  __int16 v4; // fps
  int v5; // eax
  float hinstDLLb; // [esp+4h] [ebp+4h]
  HINSTANCE hinstDLLa; // [esp+4h] [ebp+4h]
  DWORD fdwReasona; // [esp+8h] [ebp+8h]

  hinstDLLb = *(float *)&hinstDLL - (double)*(this + 0x38); /*0x5be6fa*/
  *(float *)&fdwReasona = fdwReason - (double)*(this + 0x39); /*0x5be708*/
  sub_98598A(hinstDLLb, *(float *)&fdwReasona, v4); /*0x5be714*/
  v5 = Double_To_SInt32(*(float *)&fdwReasona * dbl_A30DC8); /*0x5be727*/
  hinstDLLa = (HINSTANCE)v5; /*0x5be72f*/
  if ( v5 < 1 ) /*0x5be733*/
    v5 = Double_To_SInt32((double)v5 + dbl_A56CA0); /*0x5be73f*/
  if ( (unsigned int)(v5 - 0x2D) > 0x10D ) /*0x5be74d*/
    return DllMain(hinstDLLa, fdwReasona, a4); /*0x5be74d*/
  if ( v5 >= 0x87 )
    return v5 >= 0xE1 ? 0 : 3;
  return 2; /*0x5be75b*/
}
