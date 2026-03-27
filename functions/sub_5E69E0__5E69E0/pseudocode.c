void __thiscall sub_5E69E0(_DWORD *this, int a2)
{
  _DWORD *i; // esi
  int v3; // ecx
  _DWORD *v4; // eax

  if ( a2 )
  {
    for ( i = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0x1A) + 8))(this + 0x1A); i; i = (_DWORD *)i[1] )
    {
      v3 = 0;
      v4 = i;
      do
      {
        if ( *v4 )
          ++v3;
        v4 = (_DWORD *)v4[1];
      }
      while ( v4 );
      if ( !v3 )
        break;
      if ( *i )
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*i + 0x24))(*i, a2);
    }
  }
}
