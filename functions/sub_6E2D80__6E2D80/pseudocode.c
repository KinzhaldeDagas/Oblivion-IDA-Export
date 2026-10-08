char __thiscall sub_6E2D80(int this, float applicationTime)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx
  _DWORD *v6; // ecx

  result = *(_BYTE *)(this + 8) >> 5; /*0x6e2d86*/
  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 ) /*0x6e2d8b*/
  {
    *(float *)(this + 0x28) = flt_A7A164; /*0x6e2d93*/
LABEL_6:
    v5 = *(_DWORD *)(this + 0x3C); /*0x6e2dbe*/
    if ( v5 ) /*0x6e2dc3*/
    {
      result = (*(int (__stdcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v5 + 0x5C))( /*0x6e2dda*/
                 *(float *)(this + 0x28),
                 *(_DWORD *)(this + 0x30),
                 &applicationTime);
      if ( result ) /*0x6e2dde*/
      {
        v6 = *(_DWORD **)(this + 0x44); /*0x6e2de0*/
        if ( v6 ) /*0x6e2de5*/
          return sub_730090(v6, *(_DWORD *)(this + 0x48), applicationTime); /*0x6e2df3*/
      }
    }
    return result; /*0x6e2df3*/
  }
  result = NiTimeController_IsUpdateUnchanged((NiTimeController *)this, applicationTime); /*0x6e2da0*/
  if ( !result ) /*0x6e2da7*/
    goto LABEL_6; /*0x6e2da7*/
  v4 = *(_DWORD *)(this + 0x3C); /*0x6e2da9*/
  if ( v4 ) /*0x6e2dae*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x94))(v4); /*0x6e2db8*/
    if ( result ) /*0x6e2dbc*/
      goto LABEL_6; /*0x6e2dbc*/
  }
  return result; /*0x6e2df8*/
}
