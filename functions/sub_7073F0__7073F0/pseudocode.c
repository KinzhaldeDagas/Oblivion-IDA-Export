const char **__thiscall sub_7073F0(const char **this, const char *a2)
{
  const char *v2; // edx

  if ( !a2 ) /*0x7073f6*/
    return 0; /*0x7073f6*/
  v2 = *(this + 2); /*0x7073f8*/
  if ( !v2 ) /*0x7073fd*/
    return 0; /*0x70743b*/
  if ( !strcmp(a2, v2) ) /*0x707404*/
    return this; /*0x707424*/
  return 0; /*0x707427*/
}
