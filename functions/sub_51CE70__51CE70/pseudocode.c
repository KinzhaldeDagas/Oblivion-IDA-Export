CHAR *__thiscall sub_51CE70(_DWORD *this, unsigned int a2)
{
  CHAR *v2; // ebx
  unsigned __int8 **v3; // eax
  unsigned __int8 **i; // edi
  unsigned __int8 *v5; // esi
  CHAR *v6; // eax
  int v7; // ecx

  if ( (*(this + 0xA) & 0x100) == 0 ) /*0x51ce78*/
  {
    while ( (*(this + 0xA) & 0x100) == 0 ) /*0x51ce80*/
    {
      this = (_DWORD *)*(this + 0x40); /*0x51ce8b*/
      if ( !this ) /*0x51ce93*/
        break; /*0x51ce93*/
      if ( (*(this + 0xA) & 0x100) != 0 ) /*0x51ce9d*/
        goto LABEL_5; /*0x51ce9d*/
    }
    return 0; /*0x51ce93*/
  }
LABEL_5:
  if ( (*(this + 0xA) & 0x100) == 0 ) /*0x51cea8*/
    return 0; /*0x51cea8*/
  v7 = *(this + 0x40); /*0x51ceaa*/
  if ( !v7 ) /*0x51ceb2*/
    return 0; /*0x51cebb*/
  v2 = 0; /*0x519ad5*/
  v3 = 0; /*0x519ad7*/
  if ( a2 <= 9 ) /*0x519add*/
    v3 = *(unsigned __int8 ***)(v7 + 4 * a2); /*0x519adf*/
  for ( i = v3; i; i = (unsigned __int8 **)i[1] ) /*0x519ae6*/
  {
    if ( !i[1] && !*i ) /*0x519af6*/
      break; /*0x519af9*/
    if ( v2 ) /*0x519afd*/
      break; /*0x519afd*/
    v5 = *i; /*0x519aff*/
    if ( *(_DWORD *)*i ) /*0x519b01*/
    {
      if ( Game_RandomLargeInteger(0) % 0x64 < v5[4] ) /*0x519b1c*/
      {
        v6 = *(CHAR **)(*(_DWORD *)v5 + 0x28); /*0x519b23*/
        if ( !v6 ) /*0x519b28*/
          v6 = EmptyString; /*0x519b2a*/
        v2 = v6; /*0x519b2f*/
      }
    }
  }
  return v2; /*0x51cebb*/
}
