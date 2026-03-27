void __cdecl sub_78C4D0(int a1)
{
  char *v1; // esi
  bool v2; // cc
  int v3; // ebx
  _DWORD v4[23]; // [esp+0h] [ebp-5Ch] BYREF

  v4[0x13] = v4;
  v1 = (char *)dword_B42988;
  v2 = (unsigned int)dword_B42988 <= dword_B4298C;
  v4[0x16] = 0;
  if ( !v2 )
    _invalid_parameter_noinfo();
  while ( 1 )
  {
    v3 = dword_B4298C;
    if ( (unsigned int)dword_B42988 > dword_B4298C )
      _invalid_parameter_noinfo();
    if ( !&unk_B42984 )
      _invalid_parameter_noinfo();
    if ( v1 == (char *)v3 )
      break;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        if ( !&unk_B42984 )
          _invalid_parameter_noinfo();
        if ( (unsigned int)v1 >= dword_B4298C )
          _invalid_parameter_noinfo();
        sub_7982D0(*(_DWORD *)(*(_DWORD *)v1 + 8));
        if ( (unsigned int)v1 >= dword_B4298C )
          _invalid_parameter_noinfo();
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v1 + 0x14) + 0x30) = 0;
      }
    }
    else
    {
      if ( !&unk_B42984 )
        _invalid_parameter_noinfo();
      if ( (unsigned int)v1 >= dword_B4298C )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v1 + 0x10) + 8) == 1 )
      {
        if ( (unsigned int)v1 >= dword_B4298C )
          _invalid_parameter_noinfo();
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v1 + 4) + 0x12) = 0;
      }
      if ( (unsigned int)v1 >= dword_B4298C )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v1 + 0x10) + 0xC) == 1 )
      {
        if ( (unsigned int)v1 >= dword_B4298C )
          _invalid_parameter_noinfo();
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v1 + 0x60) + 0x12) = 0;
      }
      if ( (unsigned int)v1 >= dword_B4298C )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v1 + 0x10) + 0x10) == 1 )
        goto LABEL_29;
      if ( (unsigned int)v1 >= dword_B4298C )
        _invalid_parameter_noinfo();
      if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v1 + 0x10) + 0x14) )
      {
LABEL_29:
        if ( (unsigned int)v1 >= dword_B4298C )
          _invalid_parameter_noinfo();
        sub_7982D0(*(_DWORD *)(*(_DWORD *)v1 + 8));
      }
    }
    if ( !&unk_B42984 )
      _invalid_parameter_noinfo();
    if ( (unsigned int)v1 >= dword_B4298C )
      _invalid_parameter_noinfo();
    v1 += 4;
  }
}
