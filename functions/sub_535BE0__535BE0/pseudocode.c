void __cdecl sub_535BE0(__int128 *a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // edi
  int v4; // esi
  int *v5; // eax
  int *v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  void (__thiscall *v9)(_DWORD *, __m128 *); // edx
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  double v12; // st7
  __m128 v13; // xmm1
  double v14; // st7
  float v15; // [esp+18h] [ebp-148h]
  float v16; // [esp+1Ch] [ebp-144h]
  __m128 v17; // [esp+20h] [ebp-140h] BYREF
  __m128 v18; // [esp+30h] [ebp-130h] BYREF
  __m128 v19; // [esp+40h] [ebp-120h]
  __m128 v20[3]; // [esp+50h] [ebp-110h] BYREF
  __int128 v21; // [esp+80h] [ebp-E0h]
  __m128 v22[4]; // [esp+90h] [ebp-D0h] BYREF
  __m128 v23[4]; // [esp+D0h] [ebp-90h] BYREF
  __m128 v24[4]; // [esp+110h] [ebp-50h] BYREF

  if ( a2 )
  {
    v2 = sub_47FAC0(a2);
    if ( v2 )
    {
      v3 = *(_DWORD **)(v2 + 0x10);
      if ( v3 )
      {
        v4 = 0;
        if ( !dword_B36598 && !dword_B36594 )
          goto LABEL_15;
        v5 = &dword_B36594;
        do
        {
          v6 = (int *)v5[1];
          if ( !v6 && !*v5 )
            break;
          if ( v4 )
            goto LABEL_19;
          v7 = (_DWORD *)*v5;
          if ( v7 )
          {
            if ( (_DWORD *)*v7 == v3 )
              v4 = (int)v7;
          }
          v5 = v6;
        }
        while ( v6 );
        if ( !v4 )
        {
LABEL_15:
          v8 = (_DWORD *)FormHeapAlloc(0x10u);
          if ( v8 )
          {
            *v8 = 0;
            v8[1] = 0;
            v8[2] = 0;
            v8[3] = 0;
            v4 = (int)v8;
          }
          else
          {
            v4 = 0;
          }
          *(_DWORD *)v4 = v3;
          *(_DWORD *)(v4 + 4) = a2;
          *(float *)(v4 + 8) = sub_535AC0(v3);
          *(_DWORD *)(v4 + 0xC) = 0;
          BSSimpleList_PushFront(&dword_B36594, v4);
        }
LABEL_19:
        v15 = *(float *)(v4 + 8);
        v21 = *a1;
        sub_8B1DD0(v20[0].m128_f32, &flt_B2F080);
        (*(void (__thiscall **)(_DWORD *, __m128 *))(*v3 + 0xAC))(v3, v22);
        sub_8B1F10(v23, v22);
        sub_8B1F70(v24, v23, v20);
        v9 = *(void (__thiscall **)(_DWORD *, __m128 *))(*v3 + 0xA4);
        v10 = 0;
        v10.m128_f32[0] = *(float *)&dword_B370D8;
        v19 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v24[3]);
        v9(v3, &v17);
        v11 = 0;
        v12 = 1.0 / (*(float *)&dword_B370D8 + v15);
        v11.m128_f32[0] = v15;
        v13 = 0;
        v17 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v17);
        v16 = v12;
        v13.m128_f32[0] = v16;
        v18 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), _mm_add_ps(v17, v19));
        sub_8A9C60((_DWORD **)v3[2], (int)&v18);
        sub_8A6410(v3[2]);
        v14 = *(float *)&dword_B370D8 + v15;
        ++*(_DWORD *)(v4 + 0xC);
        *(float *)(v4 + 8) = v14;
      }
    }
  }
}
