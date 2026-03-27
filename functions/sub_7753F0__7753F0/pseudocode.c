_DWORD *__thiscall sub_7753F0(_DWORD *this, int arg0, int arg4, int a4, int a5, char a6, char a7)
{
  _DWORD *v7; // ebx
  int v8; // eax
  unsigned int v10; // edi
  int v11; // ebp
  _DWORD *v12; // eax
  int v13; // ebx
  unsigned int i; // edi
  int v15; // ebx
  char *v16; // eax
  int v17; // edi
  int v18; // edi
  int v19; // ebp
  int v21; // [esp+A8h] [ebp-4Ch]
  int a3; // [esp+C0h] [ebp-34h]
  int v23; // [esp+C4h] [ebp-30h]
  unsigned int v25; // [esp+CCh] [ebp-28h]
  int v26; // [esp+D0h] [ebp-24h]
  int v27; // [esp+D4h] [ebp-20h]
  int v28; // [esp+D8h] [ebp-1Ch]
  int v29; // [esp+DCh] [ebp-18h]
  signed int a2; // [esp+E0h] [ebp-14h]
  _BYTE v31[4]; // [esp+E4h] [ebp-10h] BYREF
  char *v32; // [esp+E8h] [ebp-Ch]
  _BYTE v33[4]; // [esp+ECh] [ebp-8h] BYREF
  _BYTE v34[4]; // [esp+F0h] [ebp-4h] BYREF
  char v35; // [esp+F8h] [ebp+4h]

  v7 = this;
  *(this + 3) = 0x25;
  *(this + 2) = &NiTMapBase<NiTPointerAllocator<unsigned int>,enum _D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable';
  *(this + 5) = 0;
  v8 = FormHeapAlloc(0x94u);
  v21 = 4 * v7[3];
  v7[4] = v8;
  _memset(v8, 0, v21);
  v7[2] = &NiTPointerMap<enum _D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable';
  v10 = 0;
  *v7 = a5;
  *((_BYTE *)v7 + 5) = a6;
  *((_BYTE *)v7 + 4) = a7;
  v25 = 0;
  do
  {
    if ( v10 )
    {
      v11 = a4;
      a2 = sub_4979E0(v10);
      if ( (*(int (__stdcall **)(int, int, int, int, int, int, signed int))(*(_DWORD *)arg0 + 0x28))(
             arg0,
             arg4,
             a4,
             a5,
             1,
             1,
             a2) >= 0 )
      {
        v12 = (_DWORD *)FormHeapAlloc(0x48u);
        if ( v12 )
        {
          *v12 = 0;
          v12[1] = 0;
          v12[2] = 0;
          v12[3] = 0;
          v12[4] = 0;
          v12[5] = 0;
          v12[6] = 0;
          v12[7] = 0;
          v12[8] = 0;
          v12[9] = 0;
          v12[0xA] = 0;
          v12[0xB] = 0;
          v12[0xC] = 0;
          v12[0xD] = 0;
          v12[0xE] = 0;
          v12[0xF] = 0;
          v12[0x10] = 0;
          v12[0x11] = 0;
          a3 = (int)v12;
        }
        else
        {
          a3 = 0;
        }
        v13 = 0;
        v23 = 0;
        for ( i = 0; i < 0x10; ++i )
        {
          if ( a7 )
          {
            if ( (*(int (__stdcall **)(int, int, int, int, int, unsigned int, _BYTE *))(*(_DWORD *)arg0 + 0x2C))(
                   arg0,
                   arg4,
                   a4,
                   a5,
                   1,
                   i + 1,
                   v31) >= 0 )
              v23 |= 1 << i;
          }
          if ( a6 )
          {
            if ( (*(int (__stdcall **)(int, int, int, int, _DWORD, unsigned int, _BYTE *))(*(_DWORD *)arg0 + 0x2C))(
                   arg0,
                   arg4,
                   a4,
                   a5,
                   0,
                   i + 1,
                   v31) >= 0 )
              v13 |= 1 << i;
          }
        }
        v26 = v13;
        v15 = a3;
        v16 = (char *)dword_B29944 - a3;
        v35 = 0;
        v32 = (char *)dword_B29944 - a3;
        v29 = 9;
        while ( 1 )
        {
          v17 = *(_DWORD *)&v16[v15];
          v27 = v17;
          if ( (*(int (__stdcall **)(int, int, int, int, int, int, int))(*(_DWORD *)arg0 + 0x28))(
                 arg0,
                 arg4,
                 v11,
                 a5,
                 2,
                 1,
                 v17) >= 0
            && (*(int (__stdcall **)(int, int, int, int, signed int, int))(*(_DWORD *)arg0 + 0x30))(
                 arg0,
                 arg4,
                 v11,
                 a5,
                 a2,
                 v17) >= 0 )
          {
            *(_BYTE *)v15 = a7;
            v35 = 1;
            *(_BYTE *)(v15 + 0x24) = a6;
            v18 = 1;
            v28 = 0x10;
            do
            {
              v19 = 1 << (v18 - 1);
              if ( v23 | v19 )
              {
                if ( (*(int (__stdcall **)(int, int, int, int, int, int, _BYTE *))(*(_DWORD *)arg0 + 0x2C))(
                       arg0,
                       arg4,
                       a4,
                       v27,
                       1,
                       v18,
                       v33) >= 0 )
                {
                  if ( v18 == 1 )
                    *(_BYTE *)(v15 + 1) = v33[0];
                  *(_WORD *)(v15 + 2) |= v19;
                }
              }
              if ( v26 | v19 )
              {
                if ( (*(int (__stdcall **)(int, int, int, int, _DWORD, int, _BYTE *))(*(_DWORD *)arg0 + 0x2C))(
                       arg0,
                       arg4,
                       a4,
                       v27,
                       0,
                       v18,
                       v34) >= 0 )
                {
                  if ( v18 == 1 )
                    *(_BYTE *)(v15 + 0x25) = v34[0];
                  *(_WORD *)(v15 + 0x26) |= v19;
                }
              }
              ++v18;
              --v28;
            }
            while ( v28 );
            v11 = a4;
          }
          v15 += 4;
          if ( !--v29 )
            break;
          v16 = v32;
        }
        if ( v35 )
          NiTMap_SetAt(this + 2, a2, a3);
        else
          FormHeapFree(a3);
        v7 = this;
        v10 = v25;
      }
    }
    v25 = ++v10;
  }
  while ( v10 < 0x12 );
  return v7;
}
