int __thiscall sub_6E2840(unsigned int *this, int a2, int a3)
{
  _DWORD *v4; // ebx
  NiRTTI *v5; // eax
  char v6; // al
  _DWORD *v7; // esi
  int v9; // [esp+Ch] [ebp-Ch]
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  if ( a2 )
  {
    v5 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x6e285b*/
    if ( v5 ) /*0x6e285f*/
    {
      while ( v5 != &stru_B3DCF0 ) /*0x6e2866*/
      {
        v5 = v5->parent; /*0x6e2868*/
        if ( !v5 ) /*0x6e286d*/
          goto LABEL_6; /*0x6e286d*/
      }
      v6 = 1; /*0x6e28d8*/
    }
    else
    {
LABEL_6:
      v6 = 0; /*0x6e286f*/
    }
    v4 = v6 != 0 ? (_DWORD *)a2 : 0;
  }
  else
  {
    v4 = 0; /*0x6e2850*/
  }
  v7 = (_DWORD *)*(this + 0x11); /*0x6e2879*/
  *(float *)&v9 = sub_7300B0(v7, *(this + 0x12)); /*0x6e2887*/
  *(float *)&v10 = sub_7300B0(v7, *(this + 0x12) + 1); /*0x6e2899*/
  *(float *)&v11 = sub_7300B0(v7, *(this + 0x12) + 2); /*0x6e28ab*/
  return sub_6DA440(v4, v9, v10, v11); /*0x6e28cf*/
}
