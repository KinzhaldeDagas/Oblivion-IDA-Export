int __thiscall sub_459990(_DWORD *this, unsigned __int16 a2)
{
  int v2; // eax

  v2 = *(this + 0x1E); /*0x459990*/
  if ( (unsigned int)a2 < *(_DWORD *)(v2 + 0xC) ) /*0x45999b*/
    return *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * a2); /*0x4599a5*/
  else
    return 0; /*0x45999d*/
}
