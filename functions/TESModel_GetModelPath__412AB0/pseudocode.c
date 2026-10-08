CHAR *__thiscall TESModel_GetModelPath(TESModel *this)
{
  CHAR *result; // eax

  result = this->nifModel.m_data; /*0x412ab0*/
  if ( !result ) /*0x412ab5*/
    return EmptyString; /*0x412ab7*/
  return result; /*0x412abc*/
}
