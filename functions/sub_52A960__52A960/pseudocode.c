char __thiscall sub_52A960(TESQuest *this, const char *a2)
{
  const char **p_unk60; // edi
  int v4; // eax
  int v6[3]; // [esp+0h] [ebp-10h] BYREF

  strlen(a2); /*0x52a980*/
  _alloca_(v6[0]); /*0x52a98e*/
  strcpy((char *)v6, a2); /*0x52a997*/
  p_unk60 = (const char **)&this->unk60; /*0x52a9ae*/
  if ( v6 && *p_unk60 ) /*0x52a9b3*/
    v4 = CRT_StricmpLocaleDispatch(*p_unk60, (const char *)v6); /*0x52a9bb*/
  else
    v4 = 2 * (v6 == 0) - 1; /*0x52a9cc*/
  if ( !v4 ) /*0x52a9d2*/
    return 0; /*0x52a9d4*/
  BSStringT_Set((BSStringT *)&this->unk60, (const char *)v6, 0); /*0x52a9dd*/
  return 1; /*0x52a9e7*/
}
