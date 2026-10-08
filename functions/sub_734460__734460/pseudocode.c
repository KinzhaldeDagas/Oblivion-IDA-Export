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
  NiPixelData *v19; // [esp+18h] [ebp-7Ch]
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

  v2 = (_DWORD *)a2; /*0x734495*/
  switch ( *(_DWORD *)(a2 + 0xC) ) /*0x7344a8*/
  {
    case 4: /*0x7344a8*/
      *this = 0; /*0x7344db*/
      *(this + 1) = (void (__stdcall *)(char *))sub_734170; /*0x7344e2*/
      break;
    case 5: /*0x7344a8*/
      *this = (void (__stdcall *)(char *))sub_733B70; /*0x7344cb*/
      *(this + 1) = (void (__stdcall *)(char *))sub_733F90; /*0x7344d2*/
      break;
    case 6: /*0x7344a8*/
      *this = (void (__stdcall *)(char *))sub_733CA0; /*0x7344bb*/
      *(this + 1) = (void (__stdcall *)(char *))sub_733F90; /*0x7344c2*/
      break;
    default:
      return 0; /*0x7344b6*/
  }
  v5 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x7344eb*/
  v31 = 0; /*0x7344fb*/
  if ( v5 ) /*0x734502*/
  {
    result = NiPixelData::NiPixelData( /*0x73451f*/
               v5,
               **(_DWORD **)(a2 + 0x54),
               **(_DWORD **)(a2 + 0x58),
               (int)&unk_B25E00,
               *(_DWORD *)(a2 + 0x60),
               *(_DWORD *)(a2 + 0x6C));
    v19 = result; /*0x734524*/
  }
  else
  {
    v19 = 0; /*0x73452a*/
    result = 0; /*0x73452e*/
  }
  v6 = *(_DWORD *)(a2 + 0x6C); /*0x734530*/
  v7 = *(_DWORD *)(a2 + 0x60); /*0x734533*/
  v8 = 0; /*0x734536*/
  v31 = 0xFFFFFFFF; /*0x73453a*/
  v23 = v7; /*0x734545*/
  v25 = v6; /*0x734549*/
  for ( i = 0; v8 < v6; i = v8 ) /*0x734551*/
  {
    v9 = 0; /*0x734557*/
    v21 = 0; /*0x73455d*/
    if ( v23 ) /*0x734561*/
    {
      while ( 1 ) /*0x734586*/
      {
        *(this + 2) = (void (__stdcall *)(char *))(v2[0x14] /*0x734586*/
                                                 + *(_DWORD *)(v2[0x17] + 4 * v9)
                                                 + v8 * *(_DWORD *)(v2[0x17] + 4 * v2[0x18]));
        v10 = (char *)(*((_DWORD *)result + 0x14) /*0x734598*/
                     + *(_DWORD *)(*((_DWORD *)result + 0x17) + 4 * v9)
                     + v8 * *(_DWORD *)(*((_DWORD *)result + 0x17) + 4 * *((_DWORD *)result + 0x18)));
        v11 = *(_DWORD *)(v2[0x15] + 4 * v9); /*0x73459e*/
        v12 = *(_DWORD *)(v2[0x16] + 4 * v9); /*0x7345a4*/
        v18 = v11 >> 2; /*0x7345ac*/
        v13 = v11 & 3; /*0x7345ba*/
        v22 = (char *)(v12 & 3); /*0x7345bf*/
        v27 = (unsigned __int8)v13; /*0x7345ca*/
        *(this + 3) = (void (__stdcall *)(char *))(4 * v11); /*0x7345ce*/
        if ( v12 >> 2 ) /*0x7345b7*/
        {
          v28 = 0xC * v11; /*0x7345de*/
          v24 = v12 >> 2; /*0x7345e2*/
          do /*0x73466e*/
          {
            if ( v18 ) /*0x7345ec*/
            {
              v26 = v18; /*0x7345ee*/
              do /*0x734649*/
              {
                v14 = v10; /*0x7345f7*/
                v15 = v29; /*0x7345f9*/
                if ( *this ) /*0x7345f2*/
                  ((void (__thiscall *)(void (__stdcall **)(char *), _BYTE *))*this)(this, v30); /*0x734606*/
                ((void (__thiscall *)(void (__stdcall **)(char *), _BYTE *))*(this + 1))(this, v29); /*0x734612*/
                v16 = 4; /*0x734614*/
                do /*0x73463f*/
                {
                  *v14 = *v15; /*0x734622*/
                  v14[1] = v15[1]; /*0x734627*/
                  v14[2] = v15[2]; /*0x73462d*/
                  v14[3] = v15[3]; /*0x734633*/
                  v14 = (_DWORD *)((char *)v14 + (_DWORD)*(this + 3)); /*0x734636*/
                  v15 += 4; /*0x734639*/
                  --v16; /*0x73463c*/
                }
                while ( v16 ); /*0x73463f*/
                v10 += 0x10; /*0x734641*/
                --v26; /*0x734644*/
              }
              while ( v26 ); /*0x734649*/
              v2 = (_DWORD *)a2; /*0x73464b*/
              v13 = v27; /*0x73464f*/
            }
            if ( v13 ) /*0x734655*/
            {
              sub_7343E0(this, v10, v13, (char *)4); /*0x73465d*/
              v10 += 4 * v13; /*0x734662*/
            }
            v10 += v28; /*0x734665*/
            --v24; /*0x734669*/
          }
          while ( v24 ); /*0x73466e*/
        }
        if ( v22 ) /*0x734679*/
        {
          for ( ; v18; --v18 ) /*0x734681*/
          {
            sub_7343E0(this, v10, 4, v22); /*0x734691*/
            v10 += 0x10; /*0x734696*/
          }
          if ( v13 ) /*0x7346a2*/
            sub_7343E0(this, v10, v13, v22); /*0x7346ad*/
        }
        v8 = i; /*0x7346b6*/
        v17 = ++v21 < v23; /*0x7346bd*/
        result = v19; /*0x7346c5*/
        if ( !v17 ) /*0x7346c9*/
          break; /*0x7346c9*/
        v9 = v21; /*0x734570*/
      }
      v6 = v25; /*0x7346cf*/
    }
    ++v8; /*0x7346d3*/
  }
  return result; /*0x7346e2*/
}
