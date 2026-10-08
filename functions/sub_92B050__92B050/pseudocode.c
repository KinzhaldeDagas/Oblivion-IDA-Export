_BYTE *__thiscall sub_92B050(_DWORD *this, _BYTE *a2, int a3, int a4)
{
  int v5; // esi
  int v6; // ebx
  int v7; // eax

  v5 = *(this + 2) - 1; /*0x92b059*/
  if ( v5 < 0 ) /*0x92b05a*/
  {
LABEL_5:
    *a2 = 1; /*0x92b081*/
    return a2; /*0x92b081*/
  }
  else
  {
    v6 = a4; /*0x92b05c*/
    while ( 1 ) /*0x92b067*/
    {
      v7 = *(_DWORD *)(*(this + 1) + 4 * v5); /*0x92b067*/
      if ( !*(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int))(v7 + 0x14))(v7 + 0x14, &a4, a3, v6) ) /*0x92b079*/
        break; /*0x92b079*/
      if ( --v5 < 0 ) /*0x92b07f*/
        goto LABEL_5; /*0x92b07f*/
    }
    *a2 = 0; /*0x92b096*/
    return a2; /*0x92b08f*/
  }
}
