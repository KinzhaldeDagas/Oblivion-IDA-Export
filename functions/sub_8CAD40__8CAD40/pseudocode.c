const void *__thiscall sub_8CAD40(_DWORD *this, const void **a2)
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

  result = (const void *)*(this + 3); /*0x8cad44*/
  if ( result ) /*0x8cad49*/
  {
    v5 = this + 0x13; /*0x8cad56*/
    sub_899CA0(a2, (int)(this + 0x13)); /*0x8cad5c*/
    v6 = this + 0x14; /*0x8cad61*/
    sub_899CE0(a2, (int)(this + 0x14)); /*0x8cad67*/
    v13 = this + 0x16; /*0x8cad72*/
    sub_899C20(a2, (int)(this + 0x16)); /*0x8cad76*/
    v12 = this + 0x15; /*0x8cad81*/
    sub_899C60(a2, (int)(this + 0x15)); /*0x8cad85*/
    v7 = sub_8991C0(a2); /*0x8cad91*/
    for ( i = 0; i < (int)v7[3]; ++i ) /*0x8cad9a*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 4))(v5, *((_DWORD *)v7[2] + i)); /*0x8cadab*/
    for ( j = 0; j < (int)v7[0xC]; ++j ) /*0x8cadbd*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v6 + 4))(v6, *((_DWORD *)v7[0xB] + j)); /*0x8cadcc*/
    for ( k = 0; k < (int)v7[9]; ++k ) /*0x8cadde*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v13 + 4))(v13, *((_DWORD *)v7[8] + k)); /*0x8caded*/
    result = v7[6]; /*0x8cadf8*/
    for ( m = 0; m < (int)result; ++m ) /*0x8cadff*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v12 + 4))(v12, *((_DWORD *)v7[5] + m)); /*0x8cae0e*/
      result = v7[6]; /*0x8cae11*/
    }
    if ( *((_WORD *)v7 + 2) ) /*0x8cae19*/
    {
      if ( !--*((_WORD *)v7 + 3) ) /*0x8cae24*/
        return (const void *)(*(int (__thiscall **)(const void **, int))*v7)(v7, 1); /*0x8cae31*/
    }
  }
  return result; /*0x8cae36*/
}
