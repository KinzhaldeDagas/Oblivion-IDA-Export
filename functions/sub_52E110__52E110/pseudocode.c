// Copy the complete 16-byte TRDT payload and deep-copy responseText into the destination TESResponse. This is the ownership boundary between the global shared INFO response cache and each caller's temporary list.
bool __thiscall TESResponse::CopyFrom(TESResponse *this, const TESResponse *source)
{
  char *m_data; // eax

  *(_DWORD *)this->trdt = *(_DWORD *)source->trdt; /*0x52e116*/
  *(_DWORD *)&this->trdt[4] = *(_DWORD *)&source->trdt[4]; /*0x52e11b*/
  *(_DWORD *)&this->trdt[8] = *(_DWORD *)&source->trdt[8]; /*0x52e121*/
  *(_DWORD *)&this->trdt[0xC] = *(_DWORD *)&source->trdt[0xC]; /*0x52e127*/
  m_data = source->responseText.m_data; /*0x52e12a*/
  if ( !m_data ) /*0x52e12f*/
    m_data = EmptyString; /*0x52e131*/
  return BSStringT_Set(&this->responseText, m_data, 0); /*0x52e141*/
}
