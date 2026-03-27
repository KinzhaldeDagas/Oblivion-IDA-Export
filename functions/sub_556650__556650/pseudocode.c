signed int __thiscall sub_556650(_DWORD *this)
{
  int v2; // ecx
  signed int result; // eax
  int v4; // esi
  unsigned int i; // edi
  int v6; // eax
  int v7; // esi
  unsigned int v8; // ebx
  int j; // ebp
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // [esp+0h] [ebp-8h]

  v2 = *(this + 3);
  result = 0;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 8);
    if ( v4 )
    {
      v13 = 0x24;
      for ( i = 0; i < 0x20; i += 0x10 )
      {
        v6 = *(_DWORD *)(i + v4 + 8);
        if ( v6 )
          v7 = (*(_DWORD *)(i + v4 + 0xC) - v6) >> 6;
        else
          v7 = 0;
        v13 += v7 << 6;
        v8 = 0;
        for ( j = 0; ; j += 0x40 )
        {
          v4 = *(_DWORD *)(*(this + 3) + 8);
          v10 = *(_DWORD *)(i + v4 + 8);
          if ( !v10 || v8 >= (*(_DWORD *)(i + v4 + 0xC) - v10) >> 6 )
            break;
          v11 = *(_DWORD *)(*(_DWORD *)(i + v4 + 8) + j + 0x14);
          if ( v11 )
            v12 = *(_DWORD *)(*(_DWORD *)(i + v4 + 8) + j + 0x18) - v11;
          else
            v12 = 0;
          ++v8;
          v13 += v12 + 2 * v12;
        }
      }
      return v13;
    }
  }
  return result;
}
