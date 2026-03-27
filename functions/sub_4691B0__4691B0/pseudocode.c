TESForm::ModReferenceList **__cdecl sub_4691B0(TESObjectARMO *a1)
{
  TESForm::ModReferenceList **result; // eax

  result = 0;
  if ( a1 )
  {
    if ( *((_BYTE *)a1 + 4) == 0x14 )
    {
      return (TESForm::ModReferenceList **)((char *)a1 + 0x64);
    }
    else if ( *((_BYTE *)a1 + 4) == 0x16 )
    {
      return (TESForm::ModReferenceList **)((char *)a1 + 0x5C);
    }
  }
  return result;
}
