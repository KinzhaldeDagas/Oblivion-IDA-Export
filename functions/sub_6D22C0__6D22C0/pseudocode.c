char __thiscall sub_6D22C0(int this, float applicationTime)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx
  int v6; // esi
  double v7; // st7

  result = *(_BYTE *)(this + 8) >> 5; /*0x6d22c6*/
  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 ) /*0x6d22cb*/
  {
    *(float *)(this + 0x28) = flt_A7A164; /*0x6d22d3*/
LABEL_6:
    v5 = *(_DWORD *)(this + 0x3C); /*0x6d22fe*/
    if ( v5 ) /*0x6d2303*/
    {
      result = (*(int (__stdcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v5 + 0x5C))( /*0x6d231a*/
                 *(float *)(this + 0x28),
                 *(_DWORD *)(this + 0x30),
                 &applicationTime);
      if ( result ) /*0x6d231e*/
      {
        v6 = *(_DWORD *)(this + 0x30); /*0x6d2320*/
        v7 = applicationTime; /*0x6d2323*/
        ++*(_DWORD *)(v6 + 0x54); /*0x6d2327*/
        *(float *)(v6 + 0x50) = v7; /*0x6d232b*/
      }
    }
    return result; /*0x6d232b*/
  }
  result = NiTimeController_IsUpdateUnchanged((NiTimeController *)this, applicationTime); /*0x6d22e0*/
  if ( !result ) /*0x6d22e7*/
    goto LABEL_6; /*0x6d22e7*/
  v4 = *(_DWORD *)(this + 0x3C); /*0x6d22e9*/
  if ( v4 ) /*0x6d22ee*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x94))(v4); /*0x6d22f8*/
    if ( result ) /*0x6d22fc*/
      goto LABEL_6; /*0x6d22fc*/
  }
  return result; /*0x6d232e*/
}
