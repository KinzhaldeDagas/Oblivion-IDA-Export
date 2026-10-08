CHAR *__thiscall sub_4F1A60(CHAR **this)
{
  int v1; // eax
  CHAR *result; // eax
  bool v3; // zf
  CHAR *v4; // ecx

  v1 = (int)*(this + 0x1F); /*0x4f1a60*/
  if ( v1 ) /*0x4f1a65*/
  {
    result = *(CHAR **)(v1 + 0x28); /*0x4f1a67*/
    v3 = result == 0; /*0x4f1a6a*/
  }
  else
  {
    v4 = *(this + 0xA); /*0x4f1a6e*/
    v3 = v4 == 0; /*0x4f1a71*/
    result = v4; /*0x4f1a73*/
  }
  if ( v3 ) /*0x4f1a75*/
    return EmptyString; /*0x4f1a77*/
  return result; /*0x4f1a7c*/
}
