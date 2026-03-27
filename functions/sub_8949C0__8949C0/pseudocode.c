BOOL __thiscall sub_8949C0(__m128 *this, NiPoint3 *a2, char a3, char a4, char a5)
{
  _DWORD *v6; // ecx
  int v7; // esi
  double v8; // st7
  void (__thiscall *v9)(int, __int128 *, __int128 *, _DWORD *, _DWORD *); // eax
  _BYTE *v10; // ecx
  int v11; // esi
  char v13; // [esp+1Fh] [ebp-235h]
  __int128 v14; // [esp+24h] [ebp-230h] BYREF
  float v15; // [esp+34h] [ebp-220h]
  float v16; // [esp+38h] [ebp-21Ch]
  __m128 v17; // [esp+44h] [ebp-210h] BYREF
  _DWORD v18[16]; // [esp+54h] [ebp-200h] BYREF
  _DWORD v19[4]; // [esp+94h] [ebp-1C0h] BYREF
  char *v20; // [esp+A4h] [ebp-1B0h]
  int v21; // [esp+A8h] [ebp-1ACh]
  unsigned int v22; // [esp+ACh] [ebp-1A8h]
  char v23; // [esp+B4h] [ebp-1A0h] BYREF
  int v24; // [esp+250h] [ebp-4h]

  v13 = 0;
  if ( this && (v6 = (_DWORD *)this->m128_i32[2]) != 0 )
    v7 = sub_8AC0C0(v6);
  else
    v7 = 0;
  if ( *(_DWORD *)(v7 + 8) )
  {
    v8 = flt_A965AC;
    v18[0] = &hkClosestCdPointCollector::`vftable';
    *(float *)&v18[0xB] = v8;
    v18[0xC] = 0;
    *(float *)&v18[1] = v8;
    *(float *)&v19[1] = v8;
    v24 = 0;
    v19[0] = &hkAllCdPointCollector::`vftable';
    v20 = &v23;
    v22 = 0x80000008;
    v21 = 0;
    v16 = flt_A34BA0;
    v15 = v16;
    LOBYTE(v24) = 1;
    sub_891440(this, &v17);
    sub_452A10((bhkCharacterProxy *)this, a2);
    v9 = *(void (__thiscall **)(int, __int128 *, __int128 *, _DWORD *, _DWORD *))(*(_DWORD *)v7 + 0x30);
    v14 = *(_OWORD *)(v7 + 0xA0);
    v9(v7, &v14, &v14, v18, v19);
    if ( v21 > 0 )
    {
      v10 = v20 + 0x1C;
      v11 = v21;
      do
      {
        switch ( *(_DWORD *)(*((_DWORD *)v10 + 3) + 0x1C) & 0x3F )
        {
          case 4:
          case 5:
          case 6:
          case 7:
          case 0xA:
          case 0xB:
            break;
          case 8:
          case 0x14:
            if ( a4 )
              goto LABEL_14;
            break;
          case 0xC:
          case 0x10:
            if ( a3 )
              goto LABEL_14;
            break;
          case 0x11:
            if ( a5 )
              goto LABEL_14;
            break;
          default:
LABEL_14:
            v13 |= *(float *)v10 < dbl_A968D8;
            break;
        }
        v10 += 0x30;
        --v11;
      }
      while ( v11 );
    }
    sub_891560((bhkCharacterProxy *)this, v17.m128_f32);
    LOBYTE(v24) = 0;
    hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v19);
  }
  return v13 == 0;
}
