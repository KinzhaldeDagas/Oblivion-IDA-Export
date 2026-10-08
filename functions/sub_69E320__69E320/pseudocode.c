int __thiscall sub_69E320(const char **this)
{
  unsigned int v1; // kr00_4

  v1 = strlen(*(this + 0xB)); /*0x69e324*/
  return (*((unsigned __int16 (__thiscall **)(const char **, _DWORD, _DWORD))*this + 0x1D))(this, 0, *(this + 7)) /*0x69e348*/
       + v1
       + 5;
}
