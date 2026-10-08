char __thiscall sub_6E28E0(int this, float applicationTime)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx
  _DWORD *v6; // edi
  float v7[3]; // [esp+18h] [ebp-Ch] BYREF

  result = *(_BYTE *)(this + 8) >> 5; /*0x6e28e9*/
  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 ) /*0x6e28ee*/
  {
    *(float *)(this + 0x28) = flt_A7A164; /*0x6e28f6*/
LABEL_6:
    v5 = *(_DWORD *)(this + 0x3C); /*0x6e2921*/
    if ( v5 ) /*0x6e2926*/
    {
      result = (*(int (__stdcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v5 + 0x54))( /*0x6e293d*/
                 *(float *)(this + 0x28),
                 *(_DWORD *)(this + 0x30),
                 v7);
      if ( result ) /*0x6e2941*/
      {
        v6 = *(_DWORD **)(this + 0x44); /*0x6e2944*/
        if ( v6 ) /*0x6e2949*/
        {
          sub_730090(v6, *(_DWORD *)(this + 0x48), v7[0]); /*0x6e2959*/
          sub_730090(v6, *(_DWORD *)(this + 0x48) + 1, v7[1]); /*0x6e296f*/
          return sub_730090(v6, *(_DWORD *)(this + 0x48) + 2, v7[2]); /*0x6e2985*/
        }
      }
    }
    return result; /*0x6e2985*/
  }
  result = NiTimeController_IsUpdateUnchanged((NiTimeController *)this, applicationTime); /*0x6e2903*/
  if ( !result ) /*0x6e290a*/
    goto LABEL_6; /*0x6e290a*/
  v4 = *(_DWORD *)(this + 0x3C); /*0x6e290c*/
  if ( v4 ) /*0x6e2911*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x94))(v4); /*0x6e291b*/
    if ( result ) /*0x6e291f*/
      goto LABEL_6; /*0x6e291f*/
  }
  return result; /*0x6e298b*/
}
