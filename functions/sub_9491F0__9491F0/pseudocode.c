_WORD *__thiscall sub_9491F0(_WORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // ebp
  const char *v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax

  *(this + 3) = 1; /*0x9491fe*/
  *((_DWORD *)this + 2) = &off_A9D1C0; /*0x949202*/
  *((_BYTE *)this + 0xC) = 1; /*0x949209*/
  *((_DWORD *)this + 8) = off_AA2B9C; /*0x94920c*/
  v3 = 0; /*0x949214*/
  *(_DWORD *)this = &off_AA2BBC; /*0x949216*/
  *((_DWORD *)this + 2) = &off_AA2BA4; /*0x94921c*/
  *((_DWORD *)this + 8) = off_A9D250; /*0x949223*/
  *((_DWORD *)this + 9) = 0; /*0x94922a*/
  v4 = a2[1]; /*0x94922d*/
  if ( v4 > 0 ) /*0x949232*/
  {
    while ( 1 ) /*0x94923b*/
    {
      v5 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*a2 + 4 * v3) + 4))(*(_DWORD *)(*a2 + 4 * v3)); /*0x94923b*/
      if ( !sub_8B1770("Physics", v5) ) /*0x949244*/
        break; /*0x949244*/
      if ( ++v3 >= v4 ) /*0x949253*/
        goto LABEL_9; /*0x949253*/
    }
    v6 = *(_DWORD *)(*a2 + 4 * v3); /*0x94925c*/
    if ( v6 ) /*0x949260*/
      v7 = v6 - 8; /*0x949262*/
    else
      v7 = 0; /*0x949267*/
    *((_DWORD *)this + 9) = v7; /*0x949269*/
  }
LABEL_9:
  v8 = *((_DWORD **)this + 9); /*0x94926c*/
  if ( v8 ) /*0x949271*/
  {
    sub_8CB120(v8, (int)(this + 0x10)); /*0x949277*/
    v9 = *((_DWORD *)this + 9); /*0x94927c*/
    if ( *(_WORD *)(v9 + 4) ) /*0x94927f*/
      ++*(_WORD *)(v9 + 6); /*0x949286*/
  }
  return this; /*0x94928a*/
}
