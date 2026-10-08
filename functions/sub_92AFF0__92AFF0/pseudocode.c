_BYTE *__thiscall sub_92AFF0(_DWORD *this, _BYTE *a2, int a3, int a4, int a5)
{
  int v6; // esi
  int v7; // ebx
  int v8; // eax

  v6 = *(this + 3) - 1; /*0x92aff9*/
  if ( v6 < 0 ) /*0x92affa*/
  {
LABEL_5:
    *a2 = 1; /*0x92b026*/
    return a2; /*0x92b026*/
  }
  else
  {
    v7 = a5; /*0x92affc*/
    while ( 1 ) /*0x92b007*/
    {
      v8 = *(_DWORD *)(*(this + 2) + 4 * v6); /*0x92b007*/
      if ( !*(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int, int))(v8 + 0x10))(v8 + 0x10, &a5, a3, a4, v7) ) /*0x92b01e*/
        break; /*0x92b01e*/
      if ( --v6 < 0 ) /*0x92b024*/
        goto LABEL_5; /*0x92b024*/
    }
    *a2 = 0; /*0x92b03b*/
    return a2; /*0x92b034*/
  }
}
