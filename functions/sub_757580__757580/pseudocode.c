void __thiscall sub_757580(int this, float a2, int a3)
{
  int v4; // ecx
  double v5; // st7
  int v6; // edx
  double v7; // st7
  float *v8; // edi
  double v9; // st6
  bool v10; // zf
  float *v11; // eax
  float v12; // ecx
  float v13; // eax
  long double v14; // st5
  double v15; // st7
  float v16; // [esp+18h] [ebp-138h]
  float v17; // [esp+18h] [ebp-138h]
  float v18; // [esp+18h] [ebp-138h]
  float v19; // [esp+18h] [ebp-138h]
  float v20; // [esp+18h] [ebp-138h]
  int v21; // [esp+28h] [ebp-128h]
  NiTransform v22; // [esp+2Ch] [ebp-124h] BYREF
  float v23; // [esp+60h] [ebp-F0h]
  float v24; // [esp+64h] [ebp-ECh]
  float v25; // [esp+68h] [ebp-E8h]
  float v26; // [esp+6Ch] [ebp-E4h]
  float v27; // [esp+70h] [ebp-E0h]
  float v28; // [esp+74h] [ebp-DCh]
  double v29; // [esp+78h] [ebp-D8h]
  NiTransform out; // [esp+80h] [ebp-D0h] BYREF
  NiTransform local; // [esp+B4h] [ebp-9Ch] BYREF
  float v32[13]; // [esp+E8h] [ebp-68h] BYREF
  NiTransform parent; // [esp+11Ch] [ebp-34h] BYREF
  NiPoint3 pos; // 0:^1C.12

  if ( 0.0 != *(float *)(this + 0x1C) ) /*0x75759b*/
  {
    if ( *(_WORD *)(a3 + 0x48) ) /*0x7575a4*/
    {
      v4 = *(_DWORD *)(this + 0x18); /*0x7575af*/
      if ( v4 ) /*0x7575b4*/
      {
        if ( *(_BYTE *)(this + 0x24) || 0.0 != *(float *)(this + 0x20) ) /*0x7575c8*/
        {
          qmemcpy(&local, (const void *)(v4 + 0x64), sizeof(local)); /*0x7575f3*/
          qmemcpy(v32, (const void *)(*(_DWORD *)(this + 0x10) + 0x64), sizeof(v32)); /*0x75760e*/
          sub_718A80(v32, &parent); /*0x757618*/
          NiTransform_Compose(&parent, &out, &local); /*0x757631*/
          v5 = *(float *)(this + 0x20) * dbl_A2FAA0; /*0x757647*/
          *(NiPoint3 *)&v22.rot.data[1][0] = out.pos; /*0x757654*/
          v25 = v5; /*0x75765c*/
          sub_7101F0(&out, &v22, (NiPoint3 *)(this + 0x3C)); /*0x757674*/
          v6 = 0; /*0x75767c*/
          v21 = 0; /*0x757682*/
          if ( *(_WORD *)(a3 + 0x48) ) /*0x75767e*/
          {
            v7 = 0.0; /*0x75768c*/
            do /*0x75783d*/
            {
              v8 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * (unsigned __int16)v6); /*0x7576a0*/
              v16 = a2 - v8[5]; /*0x7576a6*/
              v9 = v16; /*0x7576b4*/
              if ( v16 != v7 ) /*0x7576b9*/
              {
                v10 = *(_BYTE *)(this + 0x24) == 0; /*0x7576bf*/
                v11 = (float *)(*(_DWORD *)(a3 + 0x1C) + 0xC * (unsigned __int16)v6); /*0x7576c9*/
                v22.scale = *v11; /*0x7576ce*/
                v12 = v11[1]; /*0x7576da*/
                v13 = v11[2]; /*0x7576dd*/
                v23 = v12; /*0x7576e0*/
                v26 = v22.scale - v22.rot.data[1][0]; /*0x7576e4*/
                v24 = v13; /*0x7576e8*/
                v27 = v12 - v22.rot.data[1][1]; /*0x7576f4*/
                v28 = v13 - v22.rot.data[1][2]; /*0x757700*/
                v17 = v27 * v27 + v26 * v26 + v28 * v28; /*0x757720*/
                v14 = v17; /*0x757724*/
                if ( v10 || *(float *)(this + 0x2C) >= v14 ) /*0x757734*/
                {
                  if ( v7 == *(float *)(this + 0x20) || v7 == v14 ) /*0x757753*/
                  {
                    v20 = v9 * *(float *)(this + 0x1C); /*0x7577d0*/
                    v22.pos.x = v22.rot.data[0][0] * v20; /*0x7577e2*/
                    v22.pos.y = v22.rot.data[0][1] * v20; /*0x7577f4*/
                    v22.pos.z = v20 * v22.rot.data[0][2]; /*0x757804*/
                    pos = v22.pos; /*0x75780c*/
                  }
                  else
                  {
                    v29 = v9 * *(float *)(this + 0x1C); /*0x75775a*/
                    v18 = pow(v14, v25); /*0x757767*/
                    v15 = Min_Float(1.0, v18); /*0x75777b*/
                    v19 = v29 / v15; /*0x757787*/
                    v22.rot.data[2][0] = v19 * v22.rot.data[0][0]; /*0x757795*/
                    v22.rot.data[2][1] = v22.rot.data[0][1] * v19; /*0x7577a7*/
                    v6 = v21; /*0x7577b7*/
                    v22.rot.data[2][2] = v19 * v22.rot.data[0][2]; /*0x7577bb*/
                    v7 = 0.0; /*0x7577c3*/
                    pos = *(NiPoint3 *)&v22.rot.data[2][0]; /*0x7577c5*/
                  }
                  *v8 = *v8 + pos.x; /*0x757816*/
                  v8[1] = v8[1] + pos.y; /*0x75781f*/
                  v8[2] = pos.z + v8[2]; /*0x757829*/
                }
              }
              v21 = ++v6; /*0x757839*/
            }
            while ( (unsigned __int16)v6 < *(_WORD *)(a3 + 0x48) ); /*0x75783d*/
          }
        }
        else
        {
          sub_7573E0((float *)this, a2, a3); /*0x7575d4*/
        }
      }
    }
  }
}
