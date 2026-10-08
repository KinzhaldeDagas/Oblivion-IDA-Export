char __thiscall sub_51FFD0(_BYTE *this, int a2)
{
  char v3; // bl
  int v4; // eax
  int v5; // eax
  int IsFemale; // eax
  bool v8; // zf

  v3 = 0; /*0x51ffd8*/
  if ( !a2 ) /*0x51ffdc*/
    return v3; /*0x51ffdc*/
  v4 = *(_DWORD *)(a2 + 0xE8); /*0x51ffde*/
  if ( !v4 ) /*0x51ffe6*/
    return v3; /*0x51ffe6*/
  v5 = v4 + 0x8C; /*0x51ffe8*/
  if ( !v5 ) /*0x51ffed*/
    return v3; /*0x51ffed*/
  while ( *(_BYTE **)v5 != this ) /*0x51fff2*/
  {
    v5 = *(_DWORD *)(v5 + 4); /*0x51fff4*/
    if ( !v5 ) /*0x51fff9*/
      return 0; /*0x51ffff*/
  }
  IsFemale = TESActorBase_IsFemale((_BYTE *)a2); /*0x520002*/
  if ( !IsFemale ) /*0x52000a*/
  {
    v8 = (*(this + 0x48) & 2) == 0; /*0x520017*/
LABEL_11:
    if ( v8 ) /*0x52001b*/
      return 1; /*0x52001d*/
    return v3; /*0x52001d*/
  }
  if ( IsFemale == 1 ) /*0x52000f*/
  {
    v8 = (*(this + 0x48) & 4) == 0; /*0x520011*/
    goto LABEL_11; /*0x520015*/
  }
  return v3; /*0x51fffb*/
}
