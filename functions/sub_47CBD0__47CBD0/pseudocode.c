void __thiscall sub_47CBD0(_WORD *this, int a2)
{
  unsigned __int16 v3; // cx
  unsigned __int16 v4; // ax
  int v5; // edx
  NiRTTI *v6; // eax
  char v7; // al
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // esi
  int i; // eax

  if ( a2 )
  {
    v3 = *(this + 0x22); /*0x47cbe0*/
    v4 = 0; /*0x47cbe4*/
    if ( v3 ) /*0x47cbea*/
    {
      v5 = *((_DWORD *)this + 0x10); /*0x47cbec*/
      while ( *(_DWORD *)(v5 + 4 * v4) != a2 ) /*0x47cbf6*/
      {
        if ( ++v4 >= v3 ) /*0x47cbfe*/
          goto LABEL_9; /*0x47cbfe*/
      }
      if ( v4 != word_A7A160 ) /*0x47cc09*/
        *(_DWORD *)(v5 + 4 * v4) = 0; /*0x47cc0e*/
    }
LABEL_9:
    v6 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x47cc15*/
    if ( v6 ) /*0x47cc20*/
    {
      while ( v6 != &parent ) /*0x47cc27*/
      {
        v6 = v6->parent; /*0x47cc29*/
        if ( !v6 ) /*0x47cc2e*/
          goto LABEL_12; /*0x47cc2e*/
      }
      v7 = 1; /*0x47cc51*/
    }
    else
    {
LABEL_12:
      v7 = 0; /*0x47cc30*/
    }
    v8 = v7 != 0 ? a2 : 0;
    v9 = v8; /*0x47cc38*/
    if ( v8 ) /*0x47cc3a*/
    {
      v10 = *(unsigned __int16 *)(v8 + 0xB6); /*0x47cc3c*/
      v11 = 0; /*0x47cc43*/
      if ( *(_WORD *)(v9 + 0xB6) ) /*0x47cc3c*/
      {
        if ( v10 ) /*0x47cc4b*/
          goto LABEL_18; /*0x47cc4b*/
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v9 + 0xB0) + 4 * v11) ) /*0x47cc4d*/
        {
          sub_47CBD0(this, i); /*0x47cc61*/
          if ( *(unsigned __int16 *)(v9 + 0xB6) <= (unsigned int)++v11 ) /*0x47cc72*/
            break; /*0x47cc72*/
LABEL_18:
          ; /*0x47cc55*/
        }
      }
    }
  }
}
