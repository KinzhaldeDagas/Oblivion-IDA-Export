void __thiscall sub_8984E0(int *this, float a2)
{
  bool v2; // zf
  bool v3; // bl
  void (__thiscall ***v4)(void *, int); // esi
  _DWORD *v5; // edi
  void (__thiscall ***v6)(void *, int); // esi
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
  NodeVoid *v27; // [esp+34h] [ebp-84h]
  void *v28; // [esp+38h] [ebp-80h] BYREF
  int *v29; // [esp+3Ch] [ebp-7Ch]
  void *outData; // [esp+40h] [ebp-78h] BYREF
  float v31; // [esp+44h] [ebp-74h]
  __m128 v32; // [esp+48h] [ebp-70h] BYREF
  __m128 v33; // [esp+58h] [ebp-60h] BYREF
  __m128 v34; // [esp+68h] [ebp-50h] BYREF
  __m128 v35[3]; // [esp+78h] [ebp-40h] BYREF

  v2 = *((_BYTE *)this + 8) == 0; /*0x8984fa*/
  v29 = this; /*0x898501*/
  v26 = 0; /*0x898505*/
  if ( !v2 && 0.0 != *(float *)&dword_BA7B98[1] ) /*0x898520*/
  {
    v27 = (NodeVoid *)(this + 3); /*0x898532*/
    v31 = (float)(1 - Double_To_SInt32(a2 / dbl_A96A60)); /*0x89854a*/
    while ( 1 ) /*0x898556*/
    {
      v3 = 0; /*0x89856c*/
      if ( v27 ) /*0x898556*/
      {
        v26 |= 1u; /*0x898562*/
        if ( *NodeVoid_GetDataAddRef(v27, &outData) ) /*0x898567*/
          v3 = 1; /*0x898556*/
      }
      if ( (v26 & 1) != 0 ) /*0x898577*/
      {
        v4 = (void (__thiscall ***)(void *, int))outData; /*0x898579*/
        v26 &= ~1u; /*0x89857d*/
        if ( outData ) /*0x898584*/
        {
          if ( !InterlockedDecrement((volatile LONG *)outData + 1) ) /*0x89858a*/
          {
            if ( v4 ) /*0x898596*/
              (**v4)(v4, 1); /*0x8985a0*/
          }
        }
      }
      if ( !v3 ) /*0x8985a4*/
        break; /*0x8985a4*/
      v5 = *NodeVoid_GetDataAddRef(v27, &v28); /*0x8985b8*/
      if ( v28 ) /*0x8985c0*/
      {
        v6 = (void (__thiscall ***)(void *, int))v28; /*0x8985c2*/
        if ( !InterlockedDecrement((volatile LONG *)v28 + 1) ) /*0x8985c8*/
          (**v6)(v6, 1); /*0x8985de*/
      }
      v7 = v5[2]; /*0x8985e0*/
      v8 = v29; /*0x8985e9*/
      v9 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*v29 + 0x1C))(v29, *(float *)&dword_BA7B98[1]); /*0x8985f8*/
      v10 = dbl_A3C770; /*0x898600*/
      v11 = *(float *)&dword_BA7B98[1] * v10; /*0x898606*/
      v12 = v10; /*0x898608*/
      v13 = v9; /*0x898608*/
      v14 = v12; /*0x898608*/
      v19 = v11 + v13; /*0x89860c*/
      if ( v19 < 0.0 ) /*0x89861b*/
        v19 = 0.0; /*0x89861d*/
      if ( flt_B2E8A8 < (double)v19 ) /*0x898638*/
        v19 = flt_B2E8A8; /*0x89863a*/
      v20 = v19 * v31; /*0x898652*/
      v21 = v14 * unk_B3F9A4; /*0x89865c*/
      v22 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*v8 + 0x1C))(v8, LODWORD(v21)); /*0x898669*/
      v23 = *(float *)&dword_BA7B98[2] + v22; /*0x898677*/
      v15 = v23; /*0x89867b*/
      v16 = unk_B3F9A0; /*0x89867f*/
      if ( v16 >= v23 ) /*0x89868c*/
      {
        if ( v15 >= 0.0 ) /*0x8986a5*/
        {
          v17 = 0.0; /*0x898737*/
        }
        else
        {
          v25 = v15 + v16; /*0x8986b1*/
          v17 = 0.0; /*0x8986b9*/
          v15 = v25; /*0x8986b9*/
        }
      }
      else
      {
        v24 = v15 - v16; /*0x898690*/
        v15 = v24; /*0x898694*/
        v17 = 0.0; /*0x898698*/
      }
      v33.m128_f32[0] = v17; /*0x8986bb*/
      v33.m128_f32[1] = v20; /*0x8986c8*/
      v33.m128_f32[2] = v17; /*0x8986cc*/
      v33.m128_f32[3] = v17; /*0x8986d0*/
      v32.m128_f32[0] = v17; /*0x8986d4*/
      v32.m128_f32[1] = v17; /*0x8986d8*/
      v32.m128_f32[2] = 1.0; /*0x8986de*/
      v32.m128_f32[3] = v17; /*0x8986e2*/
      v18 = v15; /*0x8986e6*/
      sub_8B1EB0(v35[0].m128_f32, &v32, v18); /*0x8986ee*/
      hkBasis_TransformVector(&v34, v35, &v33); /*0x898701*/
      if ( v7 ) /*0x898708*/
      {
        sub_8A6410(v7); /*0x89870c*/
        (*(void (__stdcall **)(_DWORD, __m128 *))(**(_DWORD **)(v7 + 0x50) + 0x6C))(LODWORD(a2), &v34); /*0x898725*/
      }
      v27 = v27->next; /*0x89872e*/
    }
  }
}
