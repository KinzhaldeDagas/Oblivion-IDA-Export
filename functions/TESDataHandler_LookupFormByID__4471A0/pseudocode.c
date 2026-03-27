TESForm *__stdcall TESDataHandler_LookupFormByID(TESForm *a1)
{
  TESForm *result; // eax
  char v2; // al
  TESForm *v3; // [esp-8h] [ebp-8h]

  result = a1;
  if ( a1 )
  {
    v3 = a1;
    a1 = 0;
    v2 = NiTMap_GetAt(&TESForm_FormIDMap, (int)v3, &a1);
    return v2 != 0 ? a1 : 0;
  }
  return result;
}
