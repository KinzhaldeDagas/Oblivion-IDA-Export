CHAR *__thiscall TESBipedModelForm_GetBipedIconPath(_DWORD *this, int a2)
{
  int v2; // edx
  _DWORD *v3; // eax
  unsigned __int16 v4; // si
  unsigned int v5; // eax
  CHAR *result; // eax

  v2 = a2; /*0x469380*/
  v3 = this + 3 * a2 + 0x1B; /*0x469388*/
  v4 = *((_WORD *)v3 + 2); /*0x46938c*/
  if ( v4 == 0xFFFF ) /*0x469395*/
    v5 = strlen((const char *)*v3); /*0x469399*/
  else
    v5 = v4; /*0x4693ae*/
  if ( !v5 && a2 == 1 ) /*0x4693b9*/
    v2 = 0; /*0x4693bb*/
  result = (CHAR *)*(this + 3 * v2 + 0x1B); /*0x4693c4*/
  if ( !result ) /*0x4693c9*/
    return EmptyString; /*0x4693cb*/
  return result; /*0x4693b3*/
}
