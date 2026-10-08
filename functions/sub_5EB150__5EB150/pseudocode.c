char __thiscall sub_5EB150(TESObjectREFR *this, NiPoint3 *a2, char arg4)
{
  UInt32 DwordAtOffset40; // eax
  TESObjectCELL *v5; // esi
  char v6; // al
  TESObjectCELL *v7; // eax
  float *v8; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // esi
  float v12; // eax
  double v13; // st7
  double z; // st7
  __m128 *CharProxy; // eax
  __int32 *v17; // esi
  char v18; // [esp+27h] [ebp-21h]
  float a3; // [esp+28h] [ebp-20h] BYREF
  NiPoint3 v20; // [esp+2Ch] [ebp-1Ch] BYREF
  float v21; // [esp+38h] [ebp-10h]
  float v22; // [esp+3Ch] [ebp-Ch]
  float v23; // [esp+40h] [ebp-8h]
  float v24; // [esp+44h] [ebp-4h]

  DwordAtOffset40 = Shared_GetDwordAtOffset40(this); /*0x5eb15e*/
  v5 = (TESObjectCELL *)DwordAtOffset40; /*0x5eb163*/
  if ( DwordAtOffset40 ) /*0x5eb167*/
  {
    v6 = *(_BYTE *)(DwordAtOffset40 + 0x26); /*0x5eb16d*/
    if ( v6 == 6 || v6 == 5 ) /*0x5eb176*/
    {
      v18 = 0; /*0x5eb187*/
      if ( _finite(a2->x) && _finite(a2->y) && _finite(a2->z) && !_isnan(a2->x) && !_isnan(a2->y) && !_isnan(a2->z) ) /*0x5eb208*/
      {
        v7 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x5eb21a*/
        if ( TESObjectCELL_IsInterior(v7) ) /*0x5eb221*/
        {
          v8 = (float *)sub_441800(v5, 0, 2u); /*0x5eb234*/
          if ( v8 ) /*0x5eb23b*/
          {
            v9 = v8[8]; /*0x5eb241*/
            v10 = v8[9]; /*0x5eb244*/
            v11 = v8[0xA]; /*0x5eb247*/
            v12 = v8[0xB]; /*0x5eb24a*/
            v21 = v9; /*0x5eb24d*/
            v20.x = v9; /*0x5eb251*/
            v22 = v10; /*0x5eb25e*/
            v23 = v11; /*0x5eb262*/
            v24 = v12; /*0x5eb266*/
            v20.y = v10; /*0x5eb26a*/
            v20.z = v11; /*0x5eb26e*/
            if ( NiPoint3__NotEqual(&v20, &g_zeroNiPoint3) ) /*0x5eb272*/
            {
              v20.x = v21 - a2->x; /*0x5eb289*/
              v20.y = v22 - a2->y; /*0x5eb294*/
              v20.z = v23 - a2->z; /*0x5eb29f*/
              v13 = NiPoint3_Length(&v20.x); /*0x5eb2a3*/
              if ( v24 < v13 ) /*0x5eb2b3*/
                return 1; /*0x5eb2c4*/
            }
          }
LABEL_17:
          if ( !arg4 ) /*0x5eb304*/
            return v18; /*0x5eb304*/
          if ( (g_TESSaveLoadGame->flags & 0x800) != 0 ) /*0x5eb314*/
            return v18; /*0x5eb314*/
          CharProxy = (__m128 *)MobileObject_GetCharProxy((MobileObject *)this); /*0x5eb318*/
          v17 = (__int32 *)CharProxy; /*0x5eb31d*/
          if ( !CharProxy /*0x5eb345*/
            || (CharProxy[0x1F].m128_i32[1] & 0x800) != 0
            || sub_8949C0(CharProxy, a2, 0, 0, 1) && !sub_895F00(v17) )
          {
            return v18; /*0x5eb34c*/
          }
          return 1; /*0x5eb34c*/
        }
        a3 = 0.0; /*0x5eb2ce*/
        if ( !GetTerrainHeight(MEMORY[0xB333A0], &a2->x, &a3) ) /*0x5eb2d9*/
          goto LABEL_17; /*0x5eb2d9*/
        z = a2->z; /*0x5eb2e2*/
        a3 = a3 - dbl_A3F3E8; /*0x5eb2ef*/
        if ( a3 <= z ) /*0x5eb2fe*/
          goto LABEL_17; /*0x5eb2fe*/
      }
      return 1; /*0x5eb35d*/
    }
  }
  return 0; /*0x5eb2be*/
}
