_DWORD *__thiscall sub_919290(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // ebp
  int v8; // ecx
  int v9; // ebx
  int v10; // edi
  int v11; // eax
  int v12; // ecx

  v2 = *(this + 9); /*0x919295*/
  *this = (int)&off_A9D2EC; /*0x91929b*/
  *(this + 2) = (int)&off_A9D2D4; /*0x9192a1*/
  *(this + 8) = (int)off_A9D84C; /*0x9192a8*/
  *(this + 0xA) = (int)&off_A9D2C8; /*0x9192af*/
  if ( v2 ) /*0x9192b6*/
  {
    v3 = 0; /*0x9192bb*/
    if ( *(int *)(v2 + 0x60) > 0 ) /*0x9192bf*/
    {
      do /*0x9192dc*/
        sub_898A80(*(int **)(*(_DWORD *)(*(this + 9) + 0x5C) + 4 * v3++), (int)(this + 0xA)); /*0x9192ce*/
      while ( v3 < *(_DWORD *)(*(this + 9) + 0x60) ); /*0x9192dc*/
    }
  }
  v4 = *(this + 0x10); /*0x9192de*/
  if ( v4 > 0 ) /*0x9192e3*/
  {
    v5 = 0; /*0x9192e5*/
    do /*0x9192fa*/
    {
      (**(void (__thiscall ***)(int, _DWORD))(*(this + 0xF) + v5))(v5 + *(this + 0xF), 0); /*0x9192f1*/
      v5 += 0x80; /*0x9192f3*/
      --v4; /*0x9192f9*/
    }
    while ( v4 ); /*0x9192fa*/
  }
  v6 = *(this + 0x11); /*0x9192fc*/
  v7 = MEMORY[0xBA9DE4]; /*0x919301*/
  if ( v6 >= 0 ) /*0x919307*/
  {
    v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v7) + 0x19C); /*0x919313*/
    if ( !v8 ) /*0x91931b*/
      v8 = unk_BA7D9C; /*0x91931d*/
    sub_8A75D0(v8, (_DWORD *)*(this + 0xF), v6 << 7, 0x14); /*0x919332*/
  }
  v9 = *(this + 0xD); /*0x919337*/
  if ( v9 > 0 ) /*0x91933c*/
  {
    v10 = 0; /*0x91933e*/
    do /*0x919353*/
    {
      (**(void (__thiscall ***)(int, _DWORD))(*(this + 0xC) + v10))(v10 + *(this + 0xC), 0); /*0x91934a*/
      v10 += 0x80; /*0x91934c*/
      --v9; /*0x919352*/
    }
    while ( v9 ); /*0x919353*/
  }
  v11 = *(this + 0xE); /*0x919355*/
  if ( v11 >= 0 ) /*0x91935a*/
  {
    v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v7) + 0x19C); /*0x919366*/
    if ( !v12 ) /*0x91936e*/
      v12 = unk_BA7D9C; /*0x919370*/
    sub_8A75D0(v12, (_DWORD *)*(this + 0xC), v11 << 7, 0x14); /*0x919385*/
  }
  *(this + 0xA) = (int)&off_A9D2B4; /*0x91938b*/
  return sub_949180(this); /*0x91938a*/
}
