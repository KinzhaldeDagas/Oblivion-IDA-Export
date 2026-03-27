unsigned int __thiscall TESFullName_Save(TESForm::ModReferenceList *this)
{
  unsigned int result; // eax
  unsigned int v2; // eax
  TESForm::ModReferenceList *next; // ecx
  size_t v4; // [esp-4h] [ebp-8h]

  LOWORD(result) = *((_WORD *)this + 4);
  if ( (_WORD)result == 0xFFFF )
    result = strlen((const char *)this->next);
  else
    result = (unsigned __int16)result;
  if ( result )
  {
    LOWORD(v2) = *((_WORD *)this + 4);
    if ( (_WORD)v2 == 0xFFFF )
      v2 = strlen((const char *)this->next);
    else
      v2 = (unsigned __int16)v2;
    next = this->next;
    if ( !next )
      next = (TESForm::ModReferenceList *)EmptyString;
    LODWORD(v4) = v2 + 1;
    return (unsigned int)j_TESForm_PutCurrentChunkData(0x4C4C5546, next, v4);
  }
  return result;
}
