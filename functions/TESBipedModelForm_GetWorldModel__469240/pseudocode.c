int __thiscall TESBipedModelForm_GetWorldModel(const char **this, int a2)
{
  int v2; // esi
  unsigned __int16 v3; // dx
  unsigned int v4; // eax

  v2 = a2;
  v3 = *((_WORD *)this + 0xC * a2 + 0x20);
  if ( v3 == 0xFFFF )
    v4 = strlen(*(this + 6 * a2 + 0xF));
  else
    v4 = v3;
  if ( !v4 && a2 == 1 )
    v2 = 0;
  return (int)(this + 6 * v2 + 0xE);
}
