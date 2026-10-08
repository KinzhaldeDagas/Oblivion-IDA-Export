_BYTE *__thiscall sub_92AF40(_DWORD *this, _BYTE *a2, int a3, int a4)
{
  int v5; // esi
  int v6; // ebx
  int v7; // eax

  v5 = *(this + 5) - 1; /*0x92af49*/
  if ( v5 < 0 ) /*0x92af4a*/
  {
LABEL_5:
    *a2 = 1; /*0x92af71*/
    return a2; /*0x92af71*/
  }
  else
  {
    v6 = a4; /*0x92af4c*/
    while ( 1 ) /*0x92af57*/
    {
      v7 = *(_DWORD *)(*(this + 4) + 4 * v5); /*0x92af57*/
      if ( !*(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int))(v7 + 8))(v7 + 8, &a4, a3, v6) ) /*0x92af69*/
        break; /*0x92af69*/
      if ( --v5 < 0 ) /*0x92af6f*/
        goto LABEL_5; /*0x92af6f*/
    }
    *a2 = 0; /*0x92af86*/
    return a2; /*0x92af7f*/
  }
}
