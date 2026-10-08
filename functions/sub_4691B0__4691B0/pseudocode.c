TESForm::ModReferenceList **__cdecl sub_4691B0(TESObjectARMO *a1)
{
  TESForm::ModReferenceList **result; // eax

  result = 0; /*0x4691b4*/
  if ( a1 ) /*0x4691b8*/
  {
    if ( *((_BYTE *)a1 + 4) == 0x14 ) /*0x4691c1*/
    {
      return (TESForm::ModReferenceList **)((char *)a1 + 0x64); /*0x4691cc*/
    }
    else if ( *((_BYTE *)a1 + 4) == 0x16 ) /*0x4691c6*/
    {
      return (TESForm::ModReferenceList **)((char *)a1 + 0x5C); /*0x4691c8*/
    }
  }
  return result; /*0x4691cb*/
}
