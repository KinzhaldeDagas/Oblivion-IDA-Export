TESForm *__stdcall TESDataHandler_LookupFormByID(TESForm *a1)
{
  TESForm *result; // eax
  char v2; // al
  TESForm *v3; // [esp-8h] [ebp-8h]

  result = a1; /*0x4471a0*/
  if ( a1 )
  {
    v3 = a1; /*0x4471b0*/
    a1 = 0; /*0x4471b6*/
    v2 = NiTMap_GetAt(&TESForm_FormIDMap, (int)v3, &a1); /*0x4471be*/
    return v2 != 0 ? a1 : 0;
  }
  return result; /*0x4471a8*/
}
