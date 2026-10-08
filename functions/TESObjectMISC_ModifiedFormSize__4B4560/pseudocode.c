__int16 __stdcall TESObjectMISC_ModifiedFormSize(char a1)
{
  __int16 v1; // bx

  v1 = TESForm_ModifiedFormSize(a1); /*0x4b4573*/
  return v1 + TESValueForm_ModifiedSize(a1); /*0x4b457b*/
}
