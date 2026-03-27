void __thiscall sub_89ED20(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  char v5; // al
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi

  if ( a3 )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
    if ( v4 )
    {
      while ( (char *)v4 != dword_BA7D84 )
      {
        v4 = *(_DWORD *)(v4 + 4);
        if ( !v4 )
          goto LABEL_5;
      }
      v5 = 1;
    }
    else
    {
LABEL_5:
      v5 = 0;
    }
    v6 = v5 != 0 ? (_DWORD *)a3 : 0;
    if ( v6 )
      goto LABEL_8;
  }
  v6 = (_DWORD *)*(this + 4);
  if ( v6 )
  {
LABEL_8:
    v7 = v6[2];
    if ( v7 )
      v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 0x50) + 8))(*(_DWORD *)(v7 + 0x50));
    else
      v8 = 7;
    if ( v8 != a2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*v6 + 0x9C))(v6, a2) )
      {
        v9 = v6[2];
        if ( v9 && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v9 + 0x50) + 8))(*(_DWORD *)(v9 + 0x50)) < 6 )
          *((_WORD *)this + 6) |= 8u;
        else
          *((_WORD *)this + 6) &= ~8u;
        v10 = v6[2];
        if ( v10 )
        {
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v10 + 0x50) + 8))(*(_DWORD *)(v10 + 0x50)) < 6 )
          {
            v11 = v6[2];
            if ( v11 )
            {
              sub_89F570(v6);
              sub_8A6410(v11);
              sub_89F570(v6);
            }
          }
        }
      }
    }
  }
}
