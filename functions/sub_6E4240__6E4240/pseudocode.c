char __thiscall sub_6E4240(int this, float applicationTime)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // [esp+10h] [ebp-10h] BYREF
  int v9; // [esp+14h] [ebp-Ch]
  int v10; // [esp+18h] [ebp-8h]
  int v11; // [esp+1Ch] [ebp-4h]

  result = *(_BYTE *)(this + 8) >> 5; /*0x6e4249*/
  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 ) /*0x6e424e*/
  {
    *(float *)(this + 0x28) = flt_A7A164; /*0x6e4256*/
LABEL_6:
    v5 = *(_DWORD *)(this + 0x3C); /*0x6e4281*/
    if ( v5 ) /*0x6e4286*/
    {
      *(float *)&v8 = 0.0; /*0x6e428e*/
      v6 = *(_DWORD *)(this + 0x30); /*0x6e4293*/
      *(float *)&v9 = 0.0; /*0x6e4296*/
      *(float *)&v10 = 0.0; /*0x6e429a*/
      *(float *)&v11 = 0.0; /*0x6e429f*/
      result = (*(int (__thiscall **)(int, _DWORD, int, int *))(*(_DWORD *)v5 + 0x50))( /*0x6e42af*/
                 v5,
                 *(float *)(this + 0x28),
                 v6,
                 &v8);
      if ( result ) /*0x6e42b3*/
      {
        v7 = *(_DWORD **)(this + 0x44); /*0x6e42b5*/
        if ( v7 ) /*0x6e42ba*/
          return sub_730540(v7, v8, v9, v10, v11); /*0x6e42dc*/
      }
    }
    return result; /*0x6e42dc*/
  }
  result = NiTimeController_IsUpdateUnchanged((NiTimeController *)this, applicationTime); /*0x6e4263*/
  if ( !result ) /*0x6e426a*/
    goto LABEL_6; /*0x6e426a*/
  v4 = *(_DWORD *)(this + 0x3C); /*0x6e426c*/
  if ( v4 ) /*0x6e4271*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x94))(v4); /*0x6e427b*/
    if ( result ) /*0x6e427f*/
      goto LABEL_6; /*0x6e427f*/
  }
  return result; /*0x6e42e1*/
}
