CHAR *__thiscall TESModel_GetModelPath(TESModel *this)
{
  CHAR *result; // eax

  result = this->nifModel.m_data;
  if ( !result )
    return EmptyString;
  return result;
}
