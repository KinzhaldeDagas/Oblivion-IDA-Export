BOOL __thiscall sub_8949C0(__m128 *this, NiPoint3 *a2, char a3, char a4, char a5)
{
  _DWORD *v6; // ecx
  int HavokObject; // esi
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

  v13 = 0; /*0x894a09*/
  if ( this && (v6 = (_DWORD *)this->m128_i32[2]) != 0 ) /*0x894a15*/
    HavokObject = bhkCollisionWrapper_GetHavokObject(v6); /*0x894a1c*/
  else
    HavokObject = 0; /*0x894a22*/
  if ( *(_DWORD *)(HavokObject + 8) ) /*0x894a24*/
  {
    v8 = flt_A965AC; /*0x894a2d*/
    v18[0] = &hkClosestCdPointCollector::`vftable'; /*0x894a33*/
    *(float *)&v18[0xB] = v8; /*0x894a3b*/
    v18[0xC] = 0; /*0x894a42*/
    *(float *)&v18[1] = v8; /*0x894a49*/
    *(float *)&v19[1] = v8; /*0x894a54*/
    v24 = 0; /*0x894a5b*/
    v19[0] = &hkAllCdPointCollector::`vftable'; /*0x894a62*/
    v20 = &v23; /*0x894a6d*/
    v22 = 0x80000008; /*0x894a74*/
    v21 = 0; /*0x894a7f*/
    v16 = flt_A34BA0; /*0x894a90*/
    v15 = v16; /*0x894a95*/
    LOBYTE(v24) = 1; /*0x894a9b*/
    bhkCharacterController_ReadRelativePosition(this, &v17); /*0x894aa3*/
    sub_452A10((bhkCharacterProxy *)this, a2); /*0x894aab*/
    v9 = *(void (__thiscall **)(int, __int128 *, __int128 *, _DWORD *, _DWORD *))(*(_DWORD *)HavokObject + 0x30); /*0x894ab9*/
    v14 = *(_OWORD *)(HavokObject + 0xA0); /*0x894ad3*/
    v9(HavokObject, &v14, &v14, v18, v19); /*0x894ad8*/
    if ( v21 > 0 ) /*0x894ae3*/
    {
      v10 = v20 + 0x1C; /*0x894af2*/
      v11 = v21; /*0x894af5*/
      do /*0x894b52*/
      {
        switch ( *(_DWORD *)(*((_DWORD *)v10 + 3) + 0x1C) & 0x3F ) /*0x894b0f*/
        {
          case 4: /*0x894b0f*/
          case 5: /*0x894b0f*/
          case 6: /*0x894b0f*/
          case 7: /*0x894b0f*/
          case 0xA: /*0x894b0f*/
          case 0xB: /*0x894b0f*/
            break;
          case 8: /*0x894b0f*/
          case 0x14: /*0x894b0f*/
            if ( a4 ) /*0x894b22*/
              goto LABEL_14; /*0x894b22*/
            break; /*0x894b22*/
          case 0xC: /*0x894b0f*/
          case 0x10: /*0x894b0f*/
            if ( a3 ) /*0x894b1a*/
              goto LABEL_14; /*0x894b1a*/
            break; /*0x894b1a*/
          case 0x11: /*0x894b0f*/
            if ( a5 ) /*0x894b2a*/
              goto LABEL_14; /*0x894b2a*/
            break; /*0x894b2a*/
          default:
LABEL_14:
            v13 |= *(float *)v10 < dbl_A968D8; /*0x894b48*/
            break; /*0x894b48*/
        }
        v10 += 0x30; /*0x894b4c*/
        --v11; /*0x894b4f*/
      }
      while ( v11 ); /*0x894b52*/
    }
    bhkCharacterController_WriteRelativePosition((bhkCharacterProxy *)this, v17.m128_f32); /*0x894b5d*/
    LOBYTE(v24) = 0; /*0x894b69*/
    hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v19); /*0x894b71*/
  }
  return v13 == 0; /*0x894b7f*/
}
