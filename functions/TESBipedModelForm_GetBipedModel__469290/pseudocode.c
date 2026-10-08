const char **__thiscall TESBipedModelForm_GetBipedModel(const char **this, int a2)
{
  int v2; // esi
  unsigned __int16 v3; // dx
  unsigned int v4; // eax

  v2 = a2; /*0x469291*/
  v3 = *((_WORD *)this + 0xC * a2 + 8); /*0x469298*/
  if ( v3 == 0xFFFF ) /*0x4692a6*/
    v4 = strlen(*(this + 6 * a2 + 3)); /*0x4692ab*/
  else
    v4 = v3; /*0x4692be*/
  if ( !v4 && a2 == 1 ) /*0x4692c8*/
    v2 = 0; /*0x4692ca*/
  return this + 6 * v2 + 2; /*0x4692d3*/
}
