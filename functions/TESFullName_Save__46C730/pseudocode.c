unsigned int __thiscall TESFullName_Save(TESForm::ModReferenceList *this)
{
  unsigned int result; // eax
  unsigned int v2; // eax
  TESForm::ModReferenceList *next; // ecx
  size_t v4; // [esp-4h] [ebp-8h]

  LOWORD(result) = *((_WORD *)this + 4); /*0x46c730*/
  if ( (_WORD)result == 0xFFFF ) /*0x46c739*/
    result = strlen((const char *)this->next); /*0x46c73e*/
  else
    result = (unsigned __int16)result; /*0x46c74e*/
  if ( result ) /*0x46c753*/
  {
    LOWORD(v2) = *((_WORD *)this + 4); /*0x46c755*/
    if ( (_WORD)v2 == 0xFFFF ) /*0x46c75d*/
      v2 = strlen((const char *)this->next); /*0x46c762*/
    else
      v2 = (unsigned __int16)v2; /*0x46c772*/
    next = this->next; /*0x46c775*/
    if ( !next ) /*0x46c77a*/
      next = (TESForm::ModReferenceList *)EmptyString; /*0x46c77c*/
    LODWORD(v4) = v2 + 1; /*0x46c784*/
    return (unsigned int)j_TESForm_PutCurrentChunkData(0x4C4C5546, next, v4); /*0x46c78b*/
  }
  return result; /*0x46c793*/
}
