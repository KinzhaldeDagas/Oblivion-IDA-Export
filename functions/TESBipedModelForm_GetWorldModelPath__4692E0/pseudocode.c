int __thiscall TESBipedModelForm_GetWorldModelPath(const char **this, int a2)
{
  int v2; // esi
  unsigned __int16 v3; // dx
  unsigned int v4; // eax

  v2 = a2; /*0x4692e1*/
  v3 = *((_WORD *)this + 0xC * a2 + 0x20); /*0x4692e8*/
  if ( v3 == 0xFFFF ) /*0x4692f6*/
    v4 = strlen(*(this + 6 * a2 + 0xF)); /*0x4692fb*/
  else
    v4 = v3; /*0x46930e*/
  if ( !v4 && a2 == 1 ) /*0x469318*/
    v2 = 0; /*0x46931a*/
  return (*((int (__thiscall **)(const char **))*(this + 6 * v2 + 0xE) + 5))(this + 6 * v2 + 0xE); /*0x46932c*/
}
