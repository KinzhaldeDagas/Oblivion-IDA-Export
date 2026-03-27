TESForm::ModReferenceList *__thiscall sub_658940(float *this, int a2, int a3)
{
  TESForm::ModReferenceList *result; // eax

  result = sub_6478E0(this, a2, a3);
  if ( (a2 & 0x100000) != 0 )
    return (TESForm::ModReferenceList *)AVCollection_Clear((_DWORD *)this + 0x25);
  return result;
}
