void __thiscall sub_47CC80(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  char v4; // al
  _WORD *v5; // eax

  v2 = (_DWORD *)*(this + 3);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (*(int (__thiscall **)(_DWORD *))(*v2 + 4))(v2);
      if ( v3 )
      {
        while ( (char *)v3 != dword_B3CD7C )
        {
          v3 = *(_DWORD *)(v3 + 4);
          if ( !v3 )
            goto LABEL_5;
        }
        v4 = 1;
      }
      else
      {
LABEL_5:
        v4 = 0;
      }
      v5 = v4 != 0 ? (_WORD *)v2 : 0;
      if ( v5 )
        break;
      v2 = (_DWORD *)v2[0xD];
      if ( !v2 )
        return;
    }
    sub_47CBD0(v5, a2);
  }
}
