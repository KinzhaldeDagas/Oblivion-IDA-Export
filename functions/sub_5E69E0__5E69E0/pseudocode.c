void __thiscall sub_5E69E0(_DWORD *this, int a2)
{
  _DWORD *i; // esi
  int v3; // ecx
  _DWORD *v4; // eax

  if ( a2 ) /*0x5e69e7*/
  {
    for ( i = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0x1A) + 8))(this + 0x1A); i; i = (_DWORD *)i[1] ) /*0x5e69f9*/
    {
      v3 = 0; /*0x5e6a00*/
      v4 = i; /*0x5e6a04*/
      do /*0x5e6a15*/
      {
        if ( *v4 ) /*0x5e6a08*/
          ++v3; /*0x5e6a0d*/
        v4 = (_DWORD *)v4[1]; /*0x5e6a10*/
      }
      while ( v4 ); /*0x5e6a15*/
      if ( !v3 ) /*0x5e6a19*/
        break; /*0x5e6a19*/
      if ( *i ) /*0x5e6a1b*/
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*i + 0x24))(*i, a2); /*0x5e6a27*/
    }
  }
}
