// ?what@runtime_error@@UBEPBDXZ
// doubtful name
const char *__thiscall TESResponse::GetText(TESResponse *this)
{
  const char *result; // eax

  result = this->responseText.m_data; /*0x52e100*/
  if ( !result ) /*0x52e105*/
    return EmptyString; /*0x52e107*/
  return result; /*0x52e10c*/
}
