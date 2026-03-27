__int16 __stdcall TESObjectWEAP_ModifiedFormSize(char a1)
{
  __int16 v1; // bx

  v1 = TESForm_ModifiedFormSize(a1);
  return v1 + TESValueForm_ModifiedSize(a1);
}
