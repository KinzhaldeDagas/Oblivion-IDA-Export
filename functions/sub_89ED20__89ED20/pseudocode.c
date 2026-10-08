void __thiscall sub_89ED20(_DWORD *this, int a2, int a3)
{
  NiRTTI *v4; // eax
  char v5; // al
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi

  if ( a3 )
  {
    v4 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3); /*0x89ed33*/
    if ( v4 ) /*0x89ed37*/
    {
      while ( v4 != &stru_BA7D84 ) /*0x89ed45*/
      {
        v4 = v4->parent; /*0x89ed47*/
        if ( !v4 ) /*0x89ed4c*/
          goto LABEL_5; /*0x89ed4c*/
      }
      v5 = 1; /*0x89ed78*/
    }
    else
    {
LABEL_5:
      v5 = 0; /*0x89ed4e*/
    }
    v6 = v5 != 0 ? (_DWORD *)a3 : 0;
    if ( v6 ) /*0x89ed58*/
      goto LABEL_8; /*0x89ed58*/
  }
  v6 = (_DWORD *)*(this + 4); /*0x89ed5a*/
  if ( v6 ) /*0x89ed5f*/
  {
LABEL_8:
    v7 = v6[2]; /*0x89ed65*/
    if ( v7 ) /*0x89ed6a*/
      v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 0x50) + 8))(*(_DWORD *)(v7 + 0x50)); /*0x89ed74*/
    else
      v8 = 7; /*0x89ed7c*/
    if ( v8 != a2 ) /*0x89ed87*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*v6 + 0x9C))(v6, a2) ) /*0x89ed94*/
      {
        v9 = v6[2]; /*0x89ed9a*/
        if ( v9 && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v9 + 0x50) + 8))(*(_DWORD *)(v9 + 0x50)) < 6 ) /*0x89edae*/
          *((_WORD *)this + 6) |= 8u; /*0x89edb0*/
        else
          *((_WORD *)this + 6) &= ~8u; /*0x89edb7*/
        v10 = v6[2]; /*0x89edbd*/
        if ( v10 ) /*0x89edc2*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v10 + 0x50) + 8))(*(_DWORD *)(v10 + 0x50)) < 6 ) /*0x89edd1*/
          {
            v11 = v6[2]; /*0x89edd3*/
            if ( v11 ) /*0x89edd8*/
            {
              bhkRefObject_UpdateHavokObject(v6); /*0x89eddc*/
              sub_8A6410(v11); /*0x89ede3*/
              bhkRefObject_UpdateHavokObject(v6); /*0x89edea*/
            }
          }
        }
      }
    }
  }
}
