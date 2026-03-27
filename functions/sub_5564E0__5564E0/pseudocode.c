signed int __thiscall sub_5564E0(_DWORD *this)
{
  int v1; // ecx
  signed int result; // eax
  int v3; // esi
  unsigned int i; // edi
  int v5; // eax
  unsigned int v6; // ebx
  int j; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // [esp+0h] [ebp-8h]

  v1 = *(this + 2);
  result = 0;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 8);
    if ( v3 )
    {
      v12 = 0x24;
      for ( i = 0; i < 0x20; i += 0x10 )
      {
        v5 = *(_DWORD *)(i + v3 + 8);
        if ( v5 )
          v5 = (*(_DWORD *)(i + v3 + 0xC) - v5) / 0x14;
        v12 += 0x10 * v5;
        v6 = 0;
        for ( j = 0; ; j += 0x14 )
        {
          v3 = *(_DWORD *)(*(this + 2) + 8);
          v8 = *(_DWORD *)(i + v3 + 8);
          if ( !v8 || v6 >= (*(_DWORD *)(i + v3 + 0xC) - v8) / 0x14 )
            break;
          v9 = *(_DWORD *)(i + v3 + 8);
          if ( !v9 || v6 >= (*(_DWORD *)(i + v3 + 0xC) - v9) / 0x14 )
            _invalid_parameter_noinfo();
          v10 = *(_DWORD *)(*(_DWORD *)(i + v3 + 8) + j + 8);
          if ( v10 )
            v11 = (*(_DWORD *)(*(_DWORD *)(i + v3 + 8) + j + 0xC) - v10) / 6;
          else
            v11 = 0;
          ++v6;
          v12 += 6 * v11;
        }
      }
      return v12;
    }
  }
  return result;
}
