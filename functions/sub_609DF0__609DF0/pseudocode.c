int __thiscall sub_609DF0(
        void *this,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10)
{
  int v10; // ebx
  int v11; // eax
  int v12; // edi
  int v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  float v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  float v23; // esi
  float v24; // edi
  float v25; // ebx
  int v26; // ecx
  int result; // eax
  char v28; // [esp+1Bh] [ebp-165h]
  float v29; // [esp+1Ch] [ebp-164h] BYREF
  int v30; // [esp+20h] [ebp-160h] BYREF
  int v31; // [esp+24h] [ebp-15Ch]
  int v32; // [esp+28h] [ebp-158h]
  unsigned int v33; // [esp+2Ch] [ebp-154h]
  void *v34; // [esp+30h] [ebp-150h]
  float v35[3]; // [esp+34h] [ebp-14Ch] BYREF
  __m128 v36; // [esp+40h] [ebp-140h] BYREF
  __m128 v37[4]; // [esp+50h] [ebp-130h] BYREF
  float v38[5]; // [esp+90h] [ebp-F0h] BYREF
  float v39; // [esp+A4h] [ebp-DCh]
  __m128 v40; // [esp+B0h] [ebp-D0h] BYREF
  __m128 v41; // [esp+C0h] [ebp-C0h] BYREF
  __m128 v42; // [esp+D0h] [ebp-B0h] BYREF
  int v43; // [esp+E0h] [ebp-A0h]
  int v44; // [esp+E4h] [ebp-9Ch]
  __m128 v45[4]; // [esp+F0h] [ebp-90h] BYREF
  __m128 v46[3]; // [esp+130h] [ebp-50h] BYREF
  __int128 v47; // [esp+160h] [ebp-20h]

  v10 = a2;
  v34 = this;
  v31 = a2;
  v32 = a9;
  v28 = 0;
  if ( !a2 )
    return 0;
  v11 = sub_47FAC0(a2);
  v12 = v11;
  if ( v11 )
  {
    v13 = *(_DWORD *)(v11 + 0x10);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      if ( v14 && v14 != 0xFFFFFFEC && (v15 = *(_DWORD *)(v14 + 0x14)) != 0 )
        v16 = *(_DWORD *)(v15 + 8);
      else
        v16 = 0;
      if ( v16 )
      {
        if ( v14 && (v17 = v14 + 0x14) != 0 )
          v18 = *(_DWORD *)(v17 + 0x1C);
        else
          LOBYTE(v18) = 0;
        if ( (v18 & 0x3F) == 8
          && (*sub_497340((_DWORD *)v13, &v29) & 0x1F00) != 0x1600
          && (*sub_497340((_DWORD *)v13, &v29) & 0x1F00) != 0x1200
          && (*sub_497340((_DWORD *)v13, &v29) & 0x1F00) != 0x1300
          && (*sub_497340((_DWORD *)v13, &v29) & 0x1F00) != 0x1400
          && (*sub_497340((_DWORD *)v13, &v29) & 0x1F00) != 0x1500
          && (!(_BYTE)a10 || (*sub_497340((_DWORD *)v13, &v29) & 0x1F00) != 0x100) )
        {
          sub_4529E0(v40.m128_f32, &a3);
          v29 = *(float *)v32;
          v36.m128_f32[0] = a6 * v29;
          v36.m128_f32[1] = a7 * v29;
          v36.m128_f32[2] = v29 * a8;
          v35[0] = a3 + v36.m128_f32[0];
          v35[1] = a4 + v36.m128_f32[1];
          v35[2] = a5 + v36.m128_f32[2];
          sub_4529E0(v36.m128_f32, v35);
          v39 = 1.0;
          v43 = 0;
          v44 = 0;
          if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_BA7A20, (NiObject *)v12)
            && (!sub_607840((_DWORD *)v13) || 1.0 == *(float *)(v12 + 0x14)) )
          {
            sub_5398E0((int)v37, (float *)(v31 + 0x64));
            if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_BA8018, (NiObject *)v13) )
            {
              v45[0] = v37[0];
              v45[1] = v37[1];
              v45[2] = v37[2];
              v45[3] = v37[3];
              sub_8B1DD0(v46[0].m128_f32, (float *)(v13 + 0x20));
              v47 = *(_OWORD *)(v13 + 0x30);
              sub_8B1F70(v37, v45, v46);
            }
          }
          else
          {
            (*(void (__stdcall **)(__m128 *))(*(_DWORD *)v13 + 0xAC))(v37);
          }
          sub_88FD10(&v41, v37, &v40);
          sub_88FD10(&v42, v37, &v36);
          (*(void (__thiscall **)(_DWORD, char *, __m128 *, float *))(**(_DWORD **)(v16 + 8) + 0x14))(
            *(_DWORD *)(v16 + 8),
            (char *)&v30 + 3,
            &v41,
            v38);
          if ( *sub_538A70(v38, (bool *)&v30 + 3) )
          {
            v28 = 1;
            *(float *)v32 = v39 * *(float *)v32;
          }
        }
      }
      v10 = v31;
    }
  }
  *(float *)&v19 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10));
  v20 = *(float *)&v19;
  v29 = *(float *)&v19;
  if ( *(float *)&v19 == 0.0 || (v21 = *(unsigned __int16 *)(v19 + 0xB6), v22 = 0, v33 = 0, !v21) )
  {
LABEL_41:
    if ( v28 )
      return v10;
    return 0;
  }
  v23 = a8;
  v24 = a7;
  v25 = a6;
  while ( 1 )
  {
    v26 = v21 > v22 ? *(_DWORD *)(*(_DWORD *)(LODWORD(v20) + 0xB0) + 4 * v22) : 0;
    result = sub_609DF0(v34, v26, a3, a4, a5, v25, v24, v23, v32, a10);
    if ( result )
      return result;
    v21 = *(unsigned __int16 *)(LODWORD(v29) + 0xB6);
    if ( ++v33 >= v21 )
    {
      v10 = v31;
      goto LABEL_41;
    }
    v22 = v33;
    v20 = v29;
  }
}
