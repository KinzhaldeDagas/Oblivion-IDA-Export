unsigned int __thiscall sub_4CA5F0(int this)
{
  int *v1; // eax
  int v2; // ecx
  int v3; // eax

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 ) /*0x4ca5f4*/
    return (*(_DWORD *)(this + 0xC) & 0xFFFFFFu) % 0xA; /*0x4ca630*/
  v1 = *(int **)(this + 0x3C); /*0x4ca5f6*/
  if ( v1 ) /*0x4ca5fb*/
    v2 = v1[1]; /*0x4ca5fd*/
  else
    v2 = 0; /*0x4ca602*/
  if ( v1 ) /*0x4ca606*/
    v3 = *v1; /*0x4ca608*/
  else
    v3 = 0; /*0x4ca60c*/
  return TESObjectCELL_PackExteriorGroupLabel(v3 >> 5, v2 >> 5); /*0x4ca61e*/
}
