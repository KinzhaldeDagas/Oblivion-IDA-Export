int __thiscall sub_771150(int this)
{
  int result; // eax
  int v3; // edi
  unsigned int v4; // ebp
  unsigned int v5; // ebx
  int v6; // edx
  unsigned int v7; // ecx
  _DWORD *v8; // eax
  unsigned int v9; // edx
  bool v10; // zf
  int v11; // ebx
  int v12; // ecx
  unsigned int v13; // ebp
  _DWORD *v14; // eax
  int v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  result = *(_DWORD *)(this + 0x30);
  v3 = 0;
  v4 = 0;
  if ( *(_BYTE *)(this + 0x28) )
  {
    if ( result )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)result + 8))(result);
      *(_DWORD *)(this + 0x30) = 0;
    }
    v5 = 0;
    if ( *(_DWORD *)(this + 0x20) )
    {
      do
      {
        v6 = v3 + *(_DWORD *)(this + 0x24);
        if ( v6 )
        {
          v7 = 0;
          *(_BYTE *)v6 = 0;
          if ( *(_DWORD *)(this + 0x1C) )
          {
            v8 = (_DWORD *)(*(_DWORD *)(v6 + 8) + 0xC);
            do
            {
              if ( v8[0xFFFFFFFF] != 0xFFFFFFFF && *v8 != 0x11 )
              {
                ++v4;
                *(_BYTE *)v6 = 1;
              }
              ++v7;
              v8 += 7;
            }
            while ( v7 < *(_DWORD *)(this + 0x1C) );
          }
        }
        ++v5;
        v3 += 0x10;
      }
      while ( v5 < *(_DWORD *)(this + 0x20) );
      if ( v4 )
        ++v4;
      v3 = 0;
    }
    if ( *(_DWORD *)(this + 0x14) < v4 )
    {
      FormHeapFree(*(_DWORD *)(this + 0x2C));
      *(_DWORD *)(this + 0x2C) = 0;
    }
    if ( !v4 )
    {
      *(_DWORD *)(this + 0x14) = 0;
      return 0;
    }
    if ( !*(_DWORD *)(this + 0x2C) )
    {
      *(_DWORD *)(this + 0x14) = v4;
      *(_DWORD *)(this + 0x2C) = FormHeapAlloc((unsigned __int64)v4 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v4);
    }
    v9 = 0;
    v10 = *(_DWORD *)(this + 0x20) == 0;
    *(_DWORD *)(this + 0x18) = 0;
    v17 = 0;
    if ( !v10 )
    {
      v16 = 0;
      do
      {
        v11 = v16 + *(_DWORD *)(this + 0x24);
        if ( *(_BYTE *)v11 )
        {
          v12 = 0;
          v13 = 0;
          v15 = 0;
          if ( *(_DWORD *)(this + 0x1C) )
          {
            do
            {
              v14 = (_DWORD *)(v3 + *(_DWORD *)(v11 + 8));
              if ( v14[2] != 0xFFFFFFFF && v14[3] != 0x11 )
              {
                v14[1] = v12;
                v15 += sub_770150((_DWORD *)this, (int)v14, v9);
                v12 = v15;
                v9 = v17;
              }
              ++v13;
              v3 += 0x1C;
            }
            while ( v13 < *(_DWORD *)(this + 0x1C) );
            v3 = 0;
          }
          *(_DWORD *)(v11 + 0xC) = v12;
        }
        v16 += 0x10;
        v17 = ++v9;
      }
      while ( v9 < *(_DWORD *)(this + 0x20) );
    }
    *(_WORD *)(*(_DWORD *)(this + 0x2C) + 8 * *(_DWORD *)(this + 0x18)) = 0xFF;
    *(_WORD *)(*(_DWORD *)(this + 0x2C) + 8 * *(_DWORD *)(this + 0x18) + 2) = 0;
    *(_BYTE *)(*(_DWORD *)(this + 0x2C) + 8 * *(_DWORD *)(this + 0x18) + 4) = 0x11;
    *(_BYTE *)(*(_DWORD *)(this + 0x2C) + 8 * *(_DWORD *)(this + 0x18) + 5) = 0;
    *(_BYTE *)(*(_DWORD *)(this + 0x2C) + 8 * *(_DWORD *)(this + 0x18) + 6) = 0;
    *(_BYTE *)(*(_DWORD *)(this + 0x2C) + 8 * *(_DWORD *)(this + 0x18) + 7) = 0;
    if ( (*(int (__stdcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 0x10) + 0x158))(
           *(_DWORD *)(this + 0x10),
           *(_DWORD *)(this + 0x2C),
           this + 0x30) < 0 )
      return 0;
    result = *(_DWORD *)(this + 0x30);
    *(_BYTE *)(this + 0x28) = 0;
  }
  return result;
}
