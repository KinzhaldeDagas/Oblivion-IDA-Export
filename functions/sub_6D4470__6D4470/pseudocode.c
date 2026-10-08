char __thiscall sub_6D4470(int this, float applicationTime)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx
  int v6; // esi

  result = *(_BYTE *)(this + 8) >> 5; /*0x6d4476*/
  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 ) /*0x6d447b*/
  {
    *(float *)(this + 0x28) = flt_A7A164; /*0x6d4483*/
LABEL_6:
    v5 = *(_DWORD *)(this + 0x3C); /*0x6d44ae*/
    if ( v5 ) /*0x6d44b3*/
    {
      result = (*(int (__stdcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v5 + 0x60))( /*0x6d44ca*/
                 *(float *)(this + 0x28),
                 *(_DWORD *)(this + 0x30),
                 &applicationTime);
      if ( result ) /*0x6d44ce*/
      {
        v6 = *(_DWORD *)(this + 0x30); /*0x6d44d5*/
        if ( LOBYTE(applicationTime) ) /*0x6d44d8*/
          *(_WORD *)(v6 + 0x18) &= ~1u; /*0x6d44e3*/
        else
          *(_WORD *)(v6 + 0x18) |= 1u; /*0x6d44da*/
      }
    }
    return result; /*0x6d44e0*/
  }
  result = NiTimeController_IsUpdateUnchanged((NiTimeController *)this, applicationTime); /*0x6d4490*/
  if ( !result ) /*0x6d4497*/
    goto LABEL_6; /*0x6d4497*/
  v4 = *(_DWORD *)(this + 0x3C); /*0x6d4499*/
  if ( v4 ) /*0x6d449e*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x94))(v4); /*0x6d44a8*/
    if ( result ) /*0x6d44ac*/
      goto LABEL_6; /*0x6d44ac*/
  }
  return result; /*0x6d44df*/
}
