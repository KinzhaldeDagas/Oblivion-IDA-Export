CHAR *__thiscall sub_5EA6B0(Actor *this)
{
  TESForm *v2; // eax
  unsigned int next; // eax
  unsigned int v4; // edx
  CHAR *result; // eax

  if ( !Actor_IsNPC(this) ) /*0x5ea6b3*/
    return 0; /*0x5ea6b3*/
  v2 = this->vtbl->super.super.GetBaseForm(this); /*0x5ea6c6*/
  if ( !v2 ) /*0x5ea6ca*/
    return 0; /*0x5ea6ca*/
  next = (unsigned int)v2[0xA].member.modlist.next; /*0x5ea6cc*/
  if ( !next ) /*0x5ea6d4*/
    return 0; /*0x5ea6d4*/
  v4 = next + 0x18; /*0x5ea6d6*/
  if ( next == 0xFFFFFFE8 ) /*0x5ea6db*/
    return 0; /*0x5ea6db*/
  LOWORD(next) = *(_WORD *)(next + 0x20); /*0x5ea6dd*/
  next = (_WORD)next == 0xFFFF ? strlen(*(const char **)(v4 + 4)) : (unsigned __int16)next;
  if ( !next ) /*0x5ea702*/
    return 0; /*0x5ea712*/
  result = *(CHAR **)(v4 + 4); /*0x5ea704*/
  if ( !result ) /*0x5ea709*/
    return EmptyString; /*0x5ea70b*/
  return result; /*0x5ea710*/
}
