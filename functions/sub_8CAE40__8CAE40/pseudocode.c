const void *__thiscall sub_8CAE40(_DWORD *this, int *a2)
{
  const void *result; // eax
  _DWORD *v5; // ebx
  _DWORD *v6; // ebp
  const void **v7; // esi
  int i; // edi
  int j; // edi
  int k; // edi
  int m; // edi
  _DWORD *v12; // [esp+Ch] [ebp-4h]
  _DWORD *v13; // [esp+14h] [ebp+4h]

  result = (const void *)*(this + 3); /*0x8cae44*/
  if ( result ) /*0x8cae49*/
  {
    v5 = this + 0x13; /*0x8cae56*/
    sub_8989E0(a2, (int)(this + 0x13)); /*0x8cae5c*/
    v6 = this + 0x14; /*0x8cae61*/
    sub_898A30(a2, (int)(this + 0x14)); /*0x8cae67*/
    v13 = this + 0x16; /*0x8cae72*/
    sub_898940(a2, (int)(this + 0x16)); /*0x8cae76*/
    v12 = this + 0x15; /*0x8cae81*/
    sub_898990(a2, (int)(this + 0x15)); /*0x8cae85*/
    v7 = sub_8991C0(a2); /*0x8cae91*/
    for ( i = 0; i < (int)v7[3]; ++i ) /*0x8cae9a*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 8))(v5, *((_DWORD *)v7[2] + i)); /*0x8caeab*/
    for ( j = 0; j < (int)v7[0xC]; ++j ) /*0x8caebd*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v6 + 8))(v6, *((_DWORD *)v7[0xB] + j)); /*0x8caecc*/
    for ( k = 0; k < (int)v7[9]; ++k ) /*0x8caede*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v13 + 8))(v13, *((_DWORD *)v7[8] + k)); /*0x8caeed*/
    result = v7[6]; /*0x8caef8*/
    for ( m = 0; m < (int)result; ++m ) /*0x8caeff*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v12 + 8))(v12, *((_DWORD *)v7[5] + m)); /*0x8caf0e*/
      result = v7[6]; /*0x8caf11*/
    }
    if ( *((_WORD *)v7 + 2) ) /*0x8caf19*/
    {
      if ( !--*((_WORD *)v7 + 3) ) /*0x8caf24*/
        return (const void *)(*(int (__thiscall **)(const void **, int))*v7)(v7, 1); /*0x8caf31*/
    }
  }
  return result; /*0x8caf36*/
}
