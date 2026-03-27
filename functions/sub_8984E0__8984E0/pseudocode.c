void __thiscall sub_8984E0(int *this, float a2)
{
  bool v2; // zf
  bool v3; // bl
  void (__thiscall ***v4)(_DWORD, int); // esi
  int v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v7; // esi
  int *v8; // edi
  double v9; // st7
  double v10; // st5
  double v11; // st6
  double v12; // rt0
  double v13; // st5
  double v14; // st7
  double v15; // st7
  double v16; // st6
  double v17; // st6
  float v18; // [esp+14h] [ebp-A4h]
  float v19; // [esp+28h] [ebp-90h]
  float v20; // [esp+28h] [ebp-90h]
  float v21; // [esp+2Ch] [ebp-8Ch]
  float v22; // [esp+2Ch] [ebp-8Ch]
  float v23; // [esp+2Ch] [ebp-8Ch]
  float v24; // [esp+2Ch] [ebp-8Ch]
  float v25; // [esp+2Ch] [ebp-8Ch]
  int v26; // [esp+30h] [ebp-88h]
  int *v27; // [esp+34h] [ebp-84h]
  int v28; // [esp+38h] [ebp-80h] BYREF
  int *v29; // [esp+3Ch] [ebp-7Ch]
  int v30; // [esp+40h] [ebp-78h] BYREF
  float v31; // [esp+44h] [ebp-74h]
  int v32[4]; // [esp+48h] [ebp-70h] BYREF
  __m128 v33; // [esp+58h] [ebp-60h] BYREF
  __m128 v34; // [esp+68h] [ebp-50h] BYREF
  __m128 v35[3]; // [esp+78h] [ebp-40h] BYREF

  v2 = *((_BYTE *)this + 8) == 0;
  v29 = this;
  v26 = 0;
  if ( !v2 && 0.0 != flt_BA7B9C )
  {
    v27 = this + 3;
    v31 = (float)(1 - Double_To_SInt32(a2 / dbl_A96A60));
    while ( 1 )
    {
      v3 = 0;
      if ( v27 )
      {
        v26 |= 1u;
        if ( *sub_677C70(v27, &v30) )
          v3 = 1;
      }
      if ( (v26 & 1) != 0 )
      {
        v4 = (void (__thiscall ***)(_DWORD, int))v30;
        v26 &= ~1u;
        if ( v30 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v30 + 4)) )
          {
            if ( v4 )
              (**v4)(v4, 1);
          }
        }
      }
      if ( !v3 )
        break;
      v5 = *sub_677C70(v27, &v28);
      if ( v28 )
      {
        v6 = (void (__thiscall ***)(_DWORD, int))v28;
        if ( !InterlockedDecrement((volatile LONG *)(v28 + 4)) )
          (**v6)(v6, 1);
      }
      v7 = *(_DWORD *)(v5 + 8);
      v8 = v29;
      v9 = ((double (__thiscall *)(_DWORD, _DWORD))*(_DWORD *)(*v29 + 0x1C))(v29, flt_BA7B9C);
      v10 = dbl_A3C770;
      v11 = flt_BA7B9C * v10;
      v12 = v10;
      v13 = v9;
      v14 = v12;
      v19 = v11 + v13;
      if ( v19 < 0.0 )
        v19 = 0.0;
      if ( flt_B2E8A8 < (double)v19 )
        v19 = flt_B2E8A8;
      v20 = v19 * v31;
      v21 = v14 * flt_B3F9A4;
      v22 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*v8 + 0x1C))(v8, LODWORD(v21));
      v23 = flt_BA7BA0 + v22;
      v15 = v23;
      v16 = flt_B3F9A0;
      if ( v16 >= v23 )
      {
        if ( v15 >= 0.0 )
        {
          v17 = 0.0;
        }
        else
        {
          v25 = v15 + v16;
          v17 = 0.0;
          v15 = v25;
        }
      }
      else
      {
        v24 = v15 - v16;
        v15 = v24;
        v17 = 0.0;
      }
      v33.m128_f32[0] = v17;
      v33.m128_f32[1] = v20;
      v33.m128_f32[2] = v17;
      v33.m128_f32[3] = v17;
      *(float *)v32 = v17;
      *(float *)&v32[1] = v17;
      *(float *)&v32[2] = 1.0;
      *(float *)&v32[3] = v17;
      v18 = v15;
      sub_8B1EB0(v35[0].m128_f32, (int)v32, v18);
      sub_88FE00(&v34, v35, &v33);
      if ( v7 )
      {
        sub_8A6410(v7);
        (*(void (__stdcall **)(_DWORD, __m128 *))(**(_DWORD **)(v7 + 0x50) + 0x6C))(LODWORD(a2), &v34);
      }
      v27 = (int *)v27[1];
    }
  }
}
