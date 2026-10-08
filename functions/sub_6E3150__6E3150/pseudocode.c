char __thiscall sub_6E3150(int this, float applicationTime)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx
  int v6; // esi

  result = *(_BYTE *)(this + 8) >> 5; /*0x6e3156*/
  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 ) /*0x6e315b*/
  {
    *(float *)(this + 0x28) = flt_A7A164; /*0x6e3163*/
LABEL_6:
    v5 = *(_DWORD *)(this + 0x3C); /*0x6e318e*/
    if ( v5 ) /*0x6e3193*/
    {
      result = (*(int (__stdcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v5 + 0x5C))( /*0x6e31aa*/
                 *(float *)(this + 0x28),
                 *(_DWORD *)(this + 0x30),
                 &applicationTime);
      if ( result ) /*0x6e31ae*/
      {
        v6 = *(_DWORD *)(this + 0x44); /*0x6e31b0*/
        if ( v6 ) /*0x6e31b5*/
          *(float *)(v6 + 0xC) = applicationTime; /*0x6e31bb*/
      }
    }
    return result; /*0x6e31bb*/
  }
  result = NiTimeController_IsUpdateUnchanged((NiTimeController *)this, applicationTime); /*0x6e3170*/
  if ( !result ) /*0x6e3177*/
    goto LABEL_6; /*0x6e3177*/
  v4 = *(_DWORD *)(this + 0x3C); /*0x6e3179*/
  if ( v4 ) /*0x6e317e*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x94))(v4); /*0x6e3188*/
    if ( result ) /*0x6e318c*/
      goto LABEL_6; /*0x6e318c*/
  }
  return result; /*0x6e31be*/
}
