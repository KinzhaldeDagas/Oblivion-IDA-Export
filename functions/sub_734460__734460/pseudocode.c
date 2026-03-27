NiPixelData *__thiscall sub_734460(void (__stdcall **this)(char *), int a2)
{
  _DWORD *v2; // esi
  NiPixelData *result; // eax
  NiPixelData *v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // edi
  int v9; // edx
  char *v10; // ebx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  int v13; // edi
  _DWORD *v14; // esi
  _DWORD *v15; // edi
  int v16; // eax
  bool v17; // cf
  unsigned int v18; // [esp+14h] [ebp-80h]
  char *v19; // [esp+18h] [ebp-7Ch]
  unsigned int i; // [esp+1Ch] [ebp-78h]
  int v21; // [esp+20h] [ebp-74h]
  char *v22; // [esp+24h] [ebp-70h]
  unsigned int v23; // [esp+28h] [ebp-6Ch]
  unsigned int v24; // [esp+2Ch] [ebp-68h]
  unsigned int v25; // [esp+30h] [ebp-64h]
  unsigned int v26; // [esp+34h] [ebp-60h]
  int v27; // [esp+38h] [ebp-5Ch]
  int v28; // [esp+40h] [ebp-54h]
  _BYTE v29[3]; // [esp+44h] [ebp-50h] BYREF
  _BYTE v30[61]; // [esp+47h] [ebp-4Dh] BYREF
  unsigned int v31; // [esp+90h] [ebp-4h]

  v2 = (_DWORD *)a2;
  switch ( *(_DWORD *)(a2 + 0xC) )
  {
    case 4:
      *this = 0;
      *(this + 1) = (void (__stdcall *)(char *))sub_734170;
      break;
    case 5:
      *this = (void (__stdcall *)(char *))sub_733B70;
      *(this + 1) = (void (__stdcall *)(char *))sub_733F90;
      break;
    case 6:
      *this = (void (__stdcall *)(char *))sub_733CA0;
      *(this + 1) = (void (__stdcall *)(char *))sub_733F90;
      break;
    default:
      return 0;
  }
  v5 = (NiPixelData *)FormHeapAlloc(0x70u);
  v31 = 0;
  if ( v5 )
  {
    result = NiPixelData::NiPixelData(
               v5,
               **(_DWORD **)(a2 + 0x54),
               **(_DWORD **)(a2 + 0x58),
               (int)&unk_B25E00,
               *(_DWORD *)(a2 + 0x60),
               *(_DWORD *)(a2 + 0x6C));
    v19 = (char *)result;
  }
  else
  {
    v19 = 0;
    result = 0;
  }
  v6 = *(_DWORD *)(a2 + 0x6C);
  v7 = *(_DWORD *)(a2 + 0x60);
  v8 = 0;
  v31 = 0xFFFFFFFF;
  v23 = v7;
  v25 = v6;
  for ( i = 0; v8 < v6; i = v8 )
  {
    v9 = 0;
    v21 = 0;
    if ( v23 )
    {
      while ( 1 )
      {
        *(this + 2) = (void (__stdcall *)(char *))(v2[0x14]
                                                 + *(_DWORD *)(v2[0x17] + 4 * v9)
                                                 + v8 * *(_DWORD *)(v2[0x17] + 4 * v2[0x18]));
        v10 = (char *)(*((_DWORD *)result + 0x14)
                     + *(_DWORD *)(*((_DWORD *)result + 0x17) + 4 * v9)
                     + v8 * *(_DWORD *)(*((_DWORD *)result + 0x17) + 4 * *((_DWORD *)result + 0x18)));
        v11 = *(_DWORD *)(v2[0x15] + 4 * v9);
        v12 = *(_DWORD *)(v2[0x16] + 4 * v9);
        v18 = v11 >> 2;
        v13 = v11 & 3;
        v22 = (char *)(v12 & 3);
        v27 = (unsigned __int8)v13;
        *(this + 3) = (void (__stdcall *)(char *))(4 * v11);
        if ( v12 >> 2 )
        {
          v28 = 0xC * v11;
          v24 = v12 >> 2;
          do
          {
            if ( v18 )
            {
              v26 = v18;
              do
              {
                v14 = v10;
                v15 = v29;
                if ( *this )
                  ((void (__thiscall *)(void (__stdcall **)(char *), _BYTE *))*this)(this, v30);
                ((void (__thiscall *)(void (__stdcall **)(char *), _BYTE *))*(this + 1))(this, v29);
                v16 = 4;
                do
                {
                  *v14 = *v15;
                  v14[1] = v15[1];
                  v14[2] = v15[2];
                  v14[3] = v15[3];
                  v14 = (_DWORD *)((char *)v14 + (_DWORD)*(this + 3));
                  v15 += 4;
                  --v16;
                }
                while ( v16 );
                v10 += 0x10;
                --v26;
              }
              while ( v26 );
              v2 = (_DWORD *)a2;
              v13 = v27;
            }
            if ( v13 )
            {
              sub_7343E0(this, v10, v13, (char *)4);
              v10 += 4 * v13;
            }
            v10 += v28;
            --v24;
          }
          while ( v24 );
        }
        if ( v22 )
        {
          for ( ; v18; --v18 )
          {
            sub_7343E0(this, v10, 4, v22);
            v10 += 0x10;
          }
          if ( v13 )
            sub_7343E0(this, v10, v13, v22);
        }
        v8 = i;
        v17 = ++v21 < v23;
        result = (NiPixelData *)v19;
        if ( !v17 )
          break;
        v9 = v21;
      }
      v6 = v25;
    }
    ++v8;
  }
  return result;
}
