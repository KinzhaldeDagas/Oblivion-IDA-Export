void __userpurge sub_88C330(int *a1@<ecx>, int a2@<ebp>, int a3)
{
  int v4; // eax
  int v5; // esi
  int v6; // esi

  if ( a1 ) /*0x88c335*/
  {
    v4 = (*(int (__thiscall **)(int *))(*a1 + 0x58))(a1); /*0x88c33c*/
    if ( v4 ) /*0x88c340*/
    {
      if ( a1[7] ) /*0x88c342*/
      {
        if ( (unsigned int)a1[0x11] >= 0xC8 ) /*0x88c34f*/
        {
          sub_889E20(a1); /*0x88c353*/
          sub_88AD90(a1); /*0x88c35a*/
          sub_88A080((unsigned int *)a1); /*0x88c361*/
          sub_88A120(a1, a2); /*0x88c368*/
        }
        if ( *(_WORD *)(a3 + 4) ) /*0x88c371*/
          ++*(_WORD *)(a3 + 6); /*0x88c37d*/
        *(_DWORD *)(a1[0x10] + 4 * a1[0x11]++) = a3; /*0x88c388*/
      }
      else if ( a3 ) /*0x88c399*/
      {
        if ( !*(_DWORD *)(a3 + 8) ) /*0x88c39b*/
        {
          v5 = *(_DWORD *)(a3 + 0x10); /*0x88c3a1*/
          if ( !v5 || *(_DWORD *)(v5 + 0x54) ) /*0x88c3a8*/
          {
            v6 = *(_DWORD *)(a3 + 0x14); /*0x88c3ae*/
            if ( !v6 || *(_DWORD *)(v6 + 0x54) ) /*0x88c3b5*/
              sub_8988A0(v4, a2, (_DWORD *)a3); /*0x88c3c2*/
          }
        }
      }
    }
  }
}
