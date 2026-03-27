void __thiscall sub_7126A0(_DWORD *this)
{
  unsigned int i; // ebx
  int *v3; // esi
  int v4; // eax

  if ( *(this + 0x36) < 0x401000Cu )
  {
    for ( i = 0; i < *(this + 0x7E); ++i )
    {
      v3 = *(int **)(*(this + 0x7C) + 4 * i);
      if ( v3 )
      {
        v4 = (*(int (__thiscall **)(int *))(*v3 + 4))(v3);
        if ( v4 )
        {
          while ( (char *)v4 != dword_B3FA80 )
          {
            v4 = *(_DWORD *)(v4 + 4);
            if ( !v4 )
              goto LABEL_10;
          }
          if ( !v3[7] )
            sub_712640(v3);
        }
      }
LABEL_10:
      ;
    }
  }
}
