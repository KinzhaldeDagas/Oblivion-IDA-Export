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

  v1 = *(this + 2); /*0x5564e7*/
  result = 0; /*0x5564ea*/
  if ( v1 ) /*0x5564ee*/
  {
    v3 = *(_DWORD *)(v1 + 8); /*0x5564f5*/
    if ( v3 ) /*0x5564fa*/
    {
      v12 = 0x24; /*0x556503*/
      for ( i = 0; i < 0x20; i += 0x10 ) /*0x55650b*/
      {
        v5 = *(_DWORD *)(i + v3 + 8); /*0x556510*/
        if ( v5 ) /*0x556516*/
          v5 = (*(_DWORD *)(i + v3 + 0xC) - v5) / 0x14; /*0x55652d*/
        v12 += 0x10 * v5; /*0x556532*/
        v6 = 0; /*0x556536*/
        for ( j = 0; ; j += 0x14 ) /*0x556538*/
        {
          v3 = *(_DWORD *)(*(this + 2) + 8); /*0x556547*/
          v8 = *(_DWORD *)(i + v3 + 8); /*0x55654a*/
          if ( !v8 || v6 >= (*(_DWORD *)(i + v3 + 0xC) - v8) / 0x14 ) /*0x55656f*/
            break; /*0x55656f*/
          v9 = *(_DWORD *)(i + v3 + 8); /*0x556571*/
          if ( !v9 || v6 >= (*(_DWORD *)(i + v3 + 0xC) - v9) / 0x14 ) /*0x556592*/
            _invalid_parameter_noinfo(); /*0x556594*/
          v10 = *(_DWORD *)(*(_DWORD *)(i + v3 + 8) + j + 8); /*0x5565a1*/
          if ( v10 ) /*0x5565a6*/
            v11 = (*(_DWORD *)(*(_DWORD *)(i + v3 + 8) + j + 0xC) - v10) / 6; /*0x5565bd*/
          else
            v11 = 0; /*0x5565a8*/
          ++v6; /*0x5565c9*/
          v12 += 6 * v11; /*0x5565cc*/
        }
      }
      return v12; /*0x5565e4*/
    }
  }
  return result; /*0x5565ec*/
}
