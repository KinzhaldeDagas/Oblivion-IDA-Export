CHAR *__thiscall sub_5EA720(Actor *this)
{
  TESForm *v2; // eax
  unsigned int data; // eax
  unsigned int v4; // edx
  CHAR *result; // eax

  if ( !Actor_IsNPC(this) ) /*0x5ea723*/
    return 0; /*0x5ea723*/
  v2 = this->vtbl->super.super.GetBaseForm(this); /*0x5ea736*/
  if ( !v2 ) /*0x5ea73a*/
    return 0; /*0x5ea73a*/
  data = (unsigned int)v2[9].member.modlist.data; /*0x5ea73c*/
  if ( !data ) /*0x5ea744*/
    return 0; /*0x5ea744*/
  v4 = data + 0x18; /*0x5ea746*/
  if ( data == 0xFFFFFFE8 ) /*0x5ea74b*/
    return 0; /*0x5ea74b*/
  LOWORD(data) = *(_WORD *)(data + 0x20); /*0x5ea74d*/
  data = (_WORD)data == 0xFFFF ? strlen(*(const char **)(v4 + 4)) : (unsigned __int16)data;
  if ( !data ) /*0x5ea772*/
    return 0; /*0x5ea782*/
  result = *(CHAR **)(v4 + 4); /*0x5ea774*/
  if ( !result ) /*0x5ea779*/
    return EmptyString; /*0x5ea77b*/
  return result; /*0x5ea780*/
}
