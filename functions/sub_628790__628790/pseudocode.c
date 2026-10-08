NiPoint3 *__cdecl sub_628790(NiPoint3 *a1, TESObjectREFR *a2, float a3, int a4, char a5)
{
  float *v6; // eax
  float *v7; // eax
  double v8; // st7
  float v9; // edx
  float v10; // eax
  double v11; // st7
  double v12; // st7
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v14; // ebx
  float *v15; // eax
  float v17; // [esp+Ch] [ebp-24h]
  float v18; // [esp+10h] [ebp-20h]
  float v19; // [esp+14h] [ebp-1Ch]
  float v20; // [esp+18h] [ebp-18h]
  float v21; // [esp+18h] [ebp-18h]
  float v22; // [esp+1Ch] [ebp-14h]
  float v23; // [esp+1Ch] [ebp-14h]
  float v24; // [esp+20h] [ebp-10h]
  float v25; // [esp+20h] [ebp-10h]
  int v26; // [esp+24h] [ebp-Ch] BYREF
  float v27; // [esp+28h] [ebp-8h]
  float v28; // [esp+2Ch] [ebp-4h]
  int v29; // [esp+34h] [ebp+4h]

  a1->x = g_zeroNiPoint3.x; /*0x62879e*/
  a1->y = g_zeroNiPoint3.y; /*0x6287a6*/
  a1->z = g_zeroNiPoint3.z; /*0x6287b6*/
  if ( a4 ) /*0x6287b9*/
  {
    if ( a2 ) /*0x6287c5*/
    {
      v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x174))(a4); /*0x6287d3*/
      v22 = v6[1]; /*0x6287dd*/
      v20 = *v6; /*0x6287e3*/
      v24 = v6[2]; /*0x6287e7*/
      v7 = a2->vtbl->GetPos(a2); /*0x6287f3*/
      *(float *)&v29 = a3 + dbl_A2FC68; /*0x62880c*/
      v17 = *v7; /*0x628810*/
      v18 = v7[1]; /*0x628814*/
      v19 = v7[2]; /*0x628818*/
      if ( a5 ) /*0x62881c*/
      {
        *(float *)&v26 = v20 - v17; /*0x628826*/
        v27 = v22 - v18; /*0x628832*/
        v8 = v24 - v19; /*0x62883a*/
      }
      else
      {
        *(float *)&v26 = v17 - v20; /*0x628848*/
        v27 = v18 - v22; /*0x628854*/
        v8 = v19 - v24; /*0x62885c*/
      }
      v28 = v8; /*0x628864*/
      v9 = v27; /*0x628868*/
      v10 = v28; /*0x62886c*/
      a1->x = *(float *)&v26; /*0x628870*/
      a1->y = v9; /*0x628872*/
      a1->z = v10; /*0x628877*/
      Vector3_NormalizeInPlace(&a1->x); /*0x62887a*/
      *(float *)&v26 = a1->x * *(float *)&v29; /*0x62888d*/
      v27 = a1->y * *(float *)&v29; /*0x628896*/
      v28 = *(float *)&v29 * a1->z; /*0x62889d*/
      v21 = *(float *)&v26 + v17; /*0x6288a9*/
      v11 = v27; /*0x6288b1*/
      a1->x = v21; /*0x6288b5*/
      v23 = v11 + v18; /*0x6288bd*/
      v12 = v28; /*0x6288c5*/
      a1->y = v23; /*0x6288c9*/
      v25 = v12 + v19; /*0x6288d0*/
      a1->z = v25; /*0x6288d8*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a2); /*0x6288db*/
      v14 = DwordAtOffset40; /*0x6288e0*/
      if ( DwordAtOffset40 ) /*0x6288e4*/
      {
        if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x6288e8*/
        {
          v15 = Actor_ChoosePathGridSteeringPosition(a2, (float *)&v26, *a1, v14, 0.0, 0.0, 0); /*0x628914*/
          a1->x = *v15; /*0x62891b*/
          a1->y = v15[1]; /*0x628920*/
          a1->z = v15[2]; /*0x628926*/
        }
      }
    }
  }
  return a1; /*0x628929*/
}
