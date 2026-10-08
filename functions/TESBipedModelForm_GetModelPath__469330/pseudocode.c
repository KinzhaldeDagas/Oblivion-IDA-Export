int __thiscall TESBipedModelForm_GetModelPath(const char **this, int a2)
{
  int v2; // esi
  unsigned __int16 v3; // dx
  unsigned int v4; // eax

  v2 = a2; /*0x469331*/
  v3 = *((_WORD *)this + 0xC * a2 + 8); /*0x469338*/
  if ( v3 == 0xFFFF ) /*0x469346*/
    v4 = strlen(*(this + 6 * a2 + 3)); /*0x46934b*/
  else
    v4 = v3; /*0x46935e*/
  if ( !v4 && a2 == 1 ) /*0x469368*/
    v2 = 0; /*0x46936a*/
  return (*((int (__thiscall **)(const char **))*(this + 6 * v2 + 2) + 5))(this + 6 * v2 + 2); /*0x46937c*/
}
