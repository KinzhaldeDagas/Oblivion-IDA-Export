// TESCreature sound selector: walks inherited creature data, chooses a sound entry by category index and probability.
int __thiscall TESCreature_SelectSoundForAnimEnum(_DWORD *this, unsigned int a2)
{
  int v2; // ebx
  int **v3; // edi
  int *v4; // esi
  int v5; // ecx

  if ( (*(this + 0xA) & 0x100) == 0 ) /*0x51cec8*/
  {
    while ( (*(this + 0xA) & 0x100) == 0 ) /*0x51ced0*/
    {
      this = (_DWORD *)*(this + 0x40); /*0x51cedb*/
      if ( !this ) /*0x51cee3*/
        break; /*0x51cee3*/
      if ( (*(this + 0xA) & 0x100) != 0 ) /*0x51ceed*/
        goto LABEL_5; /*0x51ceed*/
    }
    return 0; /*0x51cee3*/
  }
LABEL_5:
  if ( (*(this + 0xA) & 0x100) == 0 ) /*0x51cef8*/
    return 0; /*0x51cef8*/
  v5 = *(this + 0x40); /*0x51cefa*/
  if ( !v5 ) /*0x51cf02*/
    return 0; /*0x51cf0b*/
  v2 = 0; /*0x519906*/
  v3 = 0; /*0x519908*/
  if ( a2 <= 9 ) /*0x51990d*/
    v3 = *(int ***)(v5 + 4 * a2); /*0x51990f*/
  for ( ; v3; v3 = (int **)v3[1] ) /*0x519914*/
  {
    if ( !v3[1] && !*v3 ) /*0x51991d*/
      break; /*0x519920*/
    if ( v2 ) /*0x519924*/
      break; /*0x519924*/
    v4 = *v3; /*0x519926*/
    if ( **v3 ) /*0x519928*/
    {
      if ( Game_RandomLargeInteger(0) % 0x64 < *((unsigned __int8 *)v4 + 4) ) /*0x519943*/
        v2 = *v4; /*0x519945*/
    }
  }
  return v2; /*0x51cf0b*/
}
