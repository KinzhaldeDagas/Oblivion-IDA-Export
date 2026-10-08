// Oblivion 3-component position/vector key-track evaluator. One key or sentinel time returns key value at +4. Otherwise cursor-assisted bracket search uses the supplied byte stride, normalized segment time selects the interpolation-type dispatch table, and the lower-key cursor is written back.
_DWORD *__cdecl NiPosKey_EvaluateTrack(_DWORD *a1, float a2, int a3, int a4, int a5, int *a6, char a7)
{
  double v7; // st7
  int v8; // ebp
  int v9; // edi
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  float *v12; // ebx
  float *v13; // ebp
  int v14; // edx
  double v15; // st6
  float *v16; // edx
  int v17; // ecx
  int v18; // edx
  int v20; // ecx
  int v21; // ecx
  float v22; // [esp+20h] [ebp-1Ch]
  float *v23; // [esp+24h] [ebp-18h]
  float *v24; // [esp+28h] [ebp-14h]
  unsigned int v25; // [esp+2Ch] [ebp-10h]
  _DWORD v26[3]; // [esp+30h] [ebp-Ch] BYREF
  int v27; // [esp+50h] [ebp+14h]
  int v28; // [esp+50h] [ebp+14h]
  int v29; // [esp+50h] [ebp+14h]
  int v30; // [esp+50h] [ebp+14h]
  int v31; // [esp+50h] [ebp+14h]
  float v32; // [esp+50h] [ebp+14h]

  if ( a5 == 1 || (v7 = a2, -flt_A7DEB4 == a2) ) /*0x6bbbc4*/
  {
    *a1 = *(_DWORD *)(a3 + 4); /*0x6bbda4*/
    v21 = *(_DWORD *)(a3 + 0xC); /*0x6bbda9*/
    a1[1] = *(_DWORD *)(a3 + 8); /*0x6bbdac*/
    a1[2] = v21; /*0x6bbdaf*/
    return a1; /*0x6bbda0*/
  }
  else
  {
    v8 = a3; /*0x6bbbcf*/
    v9 = *a6; /*0x6bbbda*/
    v10 = a5 - 1; /*0x6bbbe1*/
    v25 = a5 - 1; /*0x6bbbe4*/
    v22 = *(float *)(*a6 * (unsigned __int8)a7 + a3); /*0x6bbbeb*/
    if ( v22 > v7 ) /*0x6bbbfa*/
    {
      v9 = 0; /*0x6bbbff*/
      v22 = *(float *)a3; /*0x6bbc01*/
    }
    v11 = v9 + 1; /*0x6bbc05*/
    if ( (int)(v10 - v9) < 4 ) /*0x6bbc12*/
    {
      v15 = *(float *)&a5; /*0x6bbd18*/
LABEL_13:
      if ( v11 <= v10 ) /*0x6bbce8*/
      {
        v16 = (float *)(v8 + v11 * (unsigned __int8)a7); /*0x6bbcef*/
        do /*0x6bbd14*/
        {
          v31 = *(int *)v16; /*0x6bbcf5*/
          v15 = *(float *)&v31; /*0x6bbcf9*/
          if ( *(float *)&v31 >= v7 ) /*0x6bbd04*/
            break; /*0x6bbd04*/
          ++v11; /*0x6bbd06*/
          v22 = *(float *)&v31; /*0x6bbd09*/
          ++v9; /*0x6bbd0d*/
          v16 = (float *)((char *)v16 + (unsigned __int8)a7); /*0x6bbd10*/
        }
        while ( v11 <= v10 ); /*0x6bbd14*/
      }
    }
    else
    {
      v24 = (float *)(a3 + (unsigned __int8)a7 * (v9 + 4)); /*0x6bbc20*/
      v12 = (float *)(a3 + v11 * (unsigned __int8)a7); /*0x6bbc31*/
      v13 = (float *)(a3 + (unsigned __int8)a7 * (v9 + 2)); /*0x6bbc39*/
      v14 = 4 * (unsigned __int8)a7; /*0x6bbc3d*/
      v23 = (float *)(a3 + (unsigned __int8)a7 * (v9 + 3)); /*0x6bbc44*/
      while ( 1 ) /*0x6bbc4e*/
      {
        v27 = *(int *)v12; /*0x6bbc4e*/
        v15 = *(float *)&v27; /*0x6bbc52*/
        if ( *(float *)&v27 >= v7 ) /*0x6bbc5d*/
          break; /*0x6bbc5d*/
        v22 = *(float *)&v27; /*0x6bbc63*/
        v28 = *(int *)v13; /*0x6bbc6a*/
        v15 = *(float *)&v28; /*0x6bbc6e*/
        if ( *(float *)&v28 >= v7 ) /*0x6bbc79*/
        {
          ++v11; /*0x6bbd1e*/
          ++v9; /*0x6bbd21*/
          break; /*0x6bbd24*/
        }
        v22 = *(float *)&v28; /*0x6bbc83*/
        v29 = *(int *)v23; /*0x6bbc89*/
        v15 = *(float *)&v29; /*0x6bbc8d*/
        if ( *(float *)&v29 >= v7 ) /*0x6bbc98*/
        {
          v11 += 2; /*0x6bbd26*/
          v9 += 2; /*0x6bbd29*/
          break; /*0x6bbd2c*/
        }
        v22 = *(float *)&v29; /*0x6bbca2*/
        v30 = *(int *)v24; /*0x6bbca8*/
        v15 = *(float *)&v30; /*0x6bbcac*/
        if ( *(float *)&v30 >= v7 ) /*0x6bbcb7*/
        {
          v11 += 3; /*0x6bbd2e*/
          v9 += 3; /*0x6bbd31*/
          break; /*0x6bbd31*/
        }
        v22 = *(float *)&v30; /*0x6bbcbd*/
        v23 = (float *)((char *)v23 + v14); /*0x6bbcc1*/
        v24 = (float *)((char *)v24 + v14); /*0x6bbcc5*/
        v11 += 4; /*0x6bbcc9*/
        v9 += 4; /*0x6bbccf*/
        v12 = (float *)((char *)v12 + v14); /*0x6bbcd2*/
        v13 = (float *)((char *)v13 + v14); /*0x6bbcd4*/
        if ( v11 > v25 - 3 ) /*0x6bbcd8*/
        {
          v10 = v25; /*0x6bbcde*/
          v8 = a3; /*0x6bbce2*/
          goto LABEL_13; /*0x6bbce2*/
        }
      }
      v8 = a3; /*0x6bbd34*/
    }
    v32 = (v7 - v22) / (v15 - v22); /*0x6bbd51*/
    (*(void (__cdecl **)(_DWORD, int, unsigned int, _DWORD *))(4 * a4 + 0xB3D010))( /*0x6bbd6c*/
      LODWORD(v32),
      v8 + v9 * (unsigned __int8)a7,
      v8 + v11 * (unsigned __int8)a7,
      v26);
    v17 = v26[0]; /*0x6bbd72*/
    v18 = v26[1]; /*0x6bbd76*/
    *a6 = v9; /*0x6bbd7d*/
    *a1 = v17; /*0x6bbd84*/
    v20 = v26[2]; /*0x6bbd86*/
    a1[1] = v18; /*0x6bbd8c*/
    a1[2] = v20; /*0x6bbd8f*/
    return a1; /*0x6bbd7f*/
  }
}
