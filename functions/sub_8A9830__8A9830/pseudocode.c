int __thiscall sub_8A9830(int *this)
{
  int v2; // ecx
  int v3; // esi
  int v4; // ecx
  int v5; // ecx

  v2 = *(this + 0x14); /*0x8a9834*/
  *this = (int)&off_A97A98; /*0x8a9837*/
  v3 = v2; /*0x8a983f*/
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2) == 6 ) /*0x8a9847*/
  {
    v4 = *(_DWORD *)(v3 + 0xF0); /*0x8a9849*/
    if ( v4 ) /*0x8a9851*/
    {
      if ( *(_WORD *)(v4 + 4) ) /*0x8a9853*/
      {
        if ( !--*(_WORD *)(v4 + 6) ) /*0x8a985e*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x8a9869*/
      }
    }
  }
  if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x14) + 8))(*(this + 0x14)) == 7 ) /*0x8a9876*/
  {
    v5 = *(_DWORD *)(v3 + 0xF0); /*0x8a9878*/
    if ( v5 ) /*0x8a9880*/
    {
      if ( *(_WORD *)(v5 + 4) ) /*0x8a9882*/
      {
        if ( !--*(_WORD *)(v5 + 6) ) /*0x8a988d*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x8a9898*/
      }
    }
  }
  if ( *(_WORD *)(v3 + 4) ) /*0x8a989a*/
  {
    if ( !--*(_WORD *)(v3 + 6) ) /*0x8a98a5*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8a98b2*/
  }
  return sub_8A6900(this); /*0x8a98b6*/
}
