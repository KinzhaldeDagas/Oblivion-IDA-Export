BSStringT *__thiscall sub_6B83B0(
        BSStringT this[3],
        TESQuest *a2,
        TESTopic *a3,
        TESForm *a4,
        TESObjectREFR *a5,
        unsigned __int8 *a6)
{
  BSStringT *v7; // edi
  CHAR *v8; // eax

  this->m_data = 0;
  this->m_dataLen = 0;
  this->m_bufLen = 0;
  v7 = this + 2;
  *((_DWORD *)this + 4) = 0;
  *((_WORD *)this + 0xA) = 0;
  *((_WORD *)this + 0xB) = 0;
  if ( a6 )
  {
    v8 = sub_52E100(a6);
    BSStringT_Set(this, v8, 0);
    *(this + 1) = *(BSStringT *)a6;
    GenerateVoiceAudioString(a6, a5, a2, a3, a4, v7);
  }
  return this;
}
