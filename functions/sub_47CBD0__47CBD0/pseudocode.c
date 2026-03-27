void __thiscall sub_47CBD0(_WORD *this, int a2)
{
  unsigned __int16 v3; // cx
  unsigned __int16 v4; // ax
  int v5; // edx
  int v6; // eax
  char v7; // al
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // esi
  int i; // eax

  if ( a2 )
  {
    v3 = *(this + 0x22);
    v4 = 0;
    if ( v3 )
    {
      v5 = *((_DWORD *)this + 0x10);
      while ( *(_DWORD *)(v5 + 4 * v4) != a2 )
      {
        if ( ++v4 >= v3 )
          goto LABEL_9;
      }
      if ( v4 != word_A7A160 )
        *(_DWORD *)(v5 + 4 * v4) = 0;
    }
LABEL_9:
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    if ( v6 )
    {
      while ( (char *)v6 != dword_B3FAB0 )
      {
        v6 = *(_DWORD *)(v6 + 4);
        if ( !v6 )
          goto LABEL_12;
      }
      v7 = 1;
    }
    else
    {
LABEL_12:
      v7 = 0;
    }
    v8 = v7 != 0 ? a2 : 0;
    v9 = v8;
    if ( v8 )
    {
      v10 = *(unsigned __int16 *)(v8 + 0xB6);
      v11 = 0;
      if ( *(_WORD *)(v9 + 0xB6) )
      {
        if ( v10 )
          goto LABEL_18;
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v9 + 0xB0) + 4 * v11) )
        {
          sub_47CBD0(this, i);
          if ( *(unsigned __int16 *)(v9 + 0xB6) <= (unsigned int)++v11 )
            break;
LABEL_18:
          ;
        }
      }
    }
  }
}
