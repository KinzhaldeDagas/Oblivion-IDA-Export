NiNode *__thiscall sub_6D0A50(_DWORD *this, unsigned __int16 a2)
{
  int v2; // ecx

  v2 = *(this + 0x14); /*0x6d0a55*/
  if ( (unsigned int)a2 >= *(_DWORD *)(v2 + 8) ) /*0x6d0a5b*/
    return TESHealthForm_GetHealth(0); /*0x6d0a70*/
  else
    return TESHealthForm_GetHealth((Sky *)(*(_DWORD *)(v2 + 0x10) + 0xC * a2)); /*0x6d0a66*/
}
