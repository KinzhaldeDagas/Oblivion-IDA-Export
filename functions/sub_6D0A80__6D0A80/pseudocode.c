__int16 __thiscall sub_6D0A80(_DWORD *this, int a2)
{
  unsigned __int16 v4; // bx
  unsigned int v5; // esi
  int v6; // eax
  Sky *v7; // ecx
  NiNode *Health; // eax

  if ( !a2 )
    return word_A7A160;
  v4 = 0;
  if ( !sub_6D0690(this) )
    return word_A7A160;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(this + 0x14);
    v7 = v5 >= *(_DWORD *)(v6 + 8) ? 0 : (Sky *)(*(_DWORD *)(v6 + 0x10) + 0xC * v5);
    Health = TESHealthForm_GetHealth(v7);
    if ( !j_CRT_strcmp(Health, a2) )
      break;
    v5 = ++v4;
    if ( v4 >= (unsigned int)sub_6D0690(this) )
      return word_A7A160;
  }
  return v4;
}
