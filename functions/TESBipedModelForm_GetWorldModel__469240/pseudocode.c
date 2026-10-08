const char **__thiscall TESBipedModelForm_GetWorldModel(const char **this, int a2)
{
  int v2; // esi
  unsigned __int16 v3; // dx
  unsigned int v4; // eax

  v2 = a2; /*0x469241*/
  v3 = *((_WORD *)this + 0xC * a2 + 0x20); /*0x469248*/
  if ( v3 == 0xFFFF ) /*0x469256*/
    v4 = strlen(*(this + 6 * a2 + 0xF)); /*0x46925b*/
  else
    v4 = v3; /*0x46926e*/
  if ( !v4 && a2 == 1 ) /*0x469278*/
    v2 = 0; /*0x46927a*/
  return this + 6 * v2 + 0xE; /*0x469283*/
}
