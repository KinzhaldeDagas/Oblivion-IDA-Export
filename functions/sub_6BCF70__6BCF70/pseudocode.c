// Oblivion quaternion rotation key-track evaluator. One key/sentinel time normally returns key quaternion at +4; interpolation type 4 uses its dedicated evaluator even for that case. Otherwise performs cursor-assisted timestamp bracketing, normalized segment-time evaluation through the rotation dispatch table, and writes back the lower-key cursor.
_DWORD *__cdecl NiRotKey_EvaluateTrack(_DWORD *a1, float a2, int a3, int a4, int a5, int *a6, char a7)
{
  double v7; // st7
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ebp
  int v14; // edi
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  float *v17; // ebx
  float *v18; // ebp
  int v19; // esi
  double v20; // st6
  float *v21; // esi
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // edx
  float v26; // [esp+20h] [ebp-30h]
  float *v27; // [esp+24h] [ebp-2Ch]
  float *v28; // [esp+28h] [ebp-28h]
  unsigned int v29; // [esp+2Ch] [ebp-24h]
  _DWORD v30[4]; // [esp+30h] [ebp-20h] BYREF
  _DWORD v31[4]; // [esp+40h] [ebp-10h] BYREF
  int v32; // [esp+64h] [ebp+14h]
  int v33; // [esp+64h] [ebp+14h]
  int v34; // [esp+64h] [ebp+14h]
  int v35; // [esp+64h] [ebp+14h]
  int v36; // [esp+64h] [ebp+14h]
  float v37; // [esp+64h] [ebp+14h]

  v7 = a2; /*0x6bcf70*/
  if ( a5 == 1 || -flt_A7DEB4 == v7 ) /*0x6bcf92*/
  {
    if ( a4 != 4 ) /*0x6bcf9b*/
    {
      *a1 = *(_DWORD *)(a3 + 4); /*0x6bcfaa*/
      a1[1] = *(_DWORD *)(a3 + 8); /*0x6bcfaf*/
      v9 = *(_DWORD *)(a3 + 0x10); /*0x6bcfb5*/
      a1[2] = *(_DWORD *)(a3 + 0xC); /*0x6bcfb8*/
      a1[3] = v9; /*0x6bcfbb*/
      return a1; /*0x6bcfc2*/
    }
    goto LABEL_6; /*0x6bcf9b*/
  }
  if ( a4 == 4 ) /*0x6bcfc8*/
  {
LABEL_6:
    (*(void (__cdecl **)(_DWORD, int, _DWORD, _DWORD *))(4 * a4 + 0xB3D028))(LODWORD(a2), a3, 0, v30); /*0x6bcfcc*/
    v10 = v30[1]; /*0x6bcff1*/
    *a1 = v30[0]; /*0x6bcff5*/
    v11 = v30[2]; /*0x6bcff7*/
    a1[1] = v10; /*0x6bcffb*/
    v12 = v30[3]; /*0x6bcffe*/
    a1[2] = v11; /*0x6bd005*/
    a1[3] = v12; /*0x6bd008*/
    return a1; /*0x6bd00f*/
  }
  v13 = a3; /*0x6bd01c*/
  v14 = *a6; /*0x6bd022*/
  v15 = a5 - 1; /*0x6bd029*/
  v29 = a5 - 1; /*0x6bd02c*/
  v26 = *(float *)(*a6 * (unsigned __int8)a7 + a3); /*0x6bd033*/
  if ( v26 > v7 ) /*0x6bd042*/
  {
    v14 = 0; /*0x6bd047*/
    v26 = *(float *)a3; /*0x6bd049*/
  }
  v16 = v14 + 1; /*0x6bd04d*/
  if ( (int)(v15 - v14) < 4 ) /*0x6bd05a*/
  {
    v20 = *(float *)&a5; /*0x6bd160*/
LABEL_17:
    if ( v16 <= v15 ) /*0x6bd130*/
    {
      v21 = (float *)(v13 + v16 * (unsigned __int8)a7); /*0x6bd137*/
      do /*0x6bd15c*/
      {
        v36 = *(int *)v21; /*0x6bd13d*/
        v20 = *(float *)&v36; /*0x6bd141*/
        if ( *(float *)&v36 >= v7 ) /*0x6bd14c*/
          break; /*0x6bd14c*/
        ++v16; /*0x6bd14e*/
        v26 = *(float *)&v36; /*0x6bd151*/
        ++v14; /*0x6bd155*/
        v21 = (float *)((char *)v21 + (unsigned __int8)a7); /*0x6bd158*/
      }
      while ( v16 <= v15 ); /*0x6bd15c*/
    }
  }
  else
  {
    v28 = (float *)(a3 + (unsigned __int8)a7 * (v14 + 4)); /*0x6bd068*/
    v17 = (float *)(a3 + v16 * (unsigned __int8)a7); /*0x6bd079*/
    v18 = (float *)(a3 + (unsigned __int8)a7 * (v14 + 2)); /*0x6bd081*/
    v19 = 4 * (unsigned __int8)a7; /*0x6bd085*/
    v27 = (float *)(a3 + (unsigned __int8)a7 * (v14 + 3)); /*0x6bd08c*/
    while ( 1 ) /*0x6bd096*/
    {
      v32 = *(int *)v17; /*0x6bd096*/
      v20 = *(float *)&v32; /*0x6bd09a*/
      if ( *(float *)&v32 >= v7 ) /*0x6bd0a5*/
        break; /*0x6bd0a5*/
      v26 = *(float *)&v32; /*0x6bd0ab*/
      v33 = *(int *)v18; /*0x6bd0b2*/
      v20 = *(float *)&v33; /*0x6bd0b6*/
      if ( *(float *)&v33 >= v7 ) /*0x6bd0c1*/
      {
        ++v16; /*0x6bd166*/
        ++v14; /*0x6bd169*/
        break; /*0x6bd16c*/
      }
      v26 = *(float *)&v33; /*0x6bd0cb*/
      v34 = *(int *)v27; /*0x6bd0d1*/
      v20 = *(float *)&v34; /*0x6bd0d5*/
      if ( *(float *)&v34 >= v7 ) /*0x6bd0e0*/
      {
        v16 += 2; /*0x6bd16e*/
        v14 += 2; /*0x6bd171*/
        break; /*0x6bd174*/
      }
      v26 = *(float *)&v34; /*0x6bd0ea*/
      v35 = *(int *)v28; /*0x6bd0f0*/
      v20 = *(float *)&v35; /*0x6bd0f4*/
      if ( *(float *)&v35 >= v7 ) /*0x6bd0ff*/
      {
        v16 += 3; /*0x6bd176*/
        v14 += 3; /*0x6bd179*/
        break; /*0x6bd179*/
      }
      v26 = *(float *)&v35; /*0x6bd105*/
      v27 = (float *)((char *)v27 + v19); /*0x6bd109*/
      v28 = (float *)((char *)v28 + v19); /*0x6bd10d*/
      v16 += 4; /*0x6bd111*/
      v14 += 4; /*0x6bd117*/
      v17 = (float *)((char *)v17 + v19); /*0x6bd11a*/
      v18 = (float *)((char *)v18 + v19); /*0x6bd11c*/
      if ( v16 > v29 - 3 ) /*0x6bd120*/
      {
        v15 = v29; /*0x6bd126*/
        v13 = a3; /*0x6bd12a*/
        goto LABEL_17; /*0x6bd12a*/
      }
    }
    v13 = a3; /*0x6bd17c*/
  }
  v37 = (v7 - v26) / (v20 - v26); /*0x6bd199*/
  (*(void (__cdecl **)(_DWORD, int, unsigned int, _DWORD *))(4 * a4 + 0xB3D028))( /*0x6bd1b4*/
    LODWORD(v37),
    v13 + v14 * (unsigned __int8)a7,
    v13 + v16 * (unsigned __int8)a7,
    v31);
  v22 = v31[0]; /*0x6bd1ba*/
  v23 = v31[1]; /*0x6bd1be*/
  *a6 = v14; /*0x6bd1c5*/
  *a1 = v22; /*0x6bd1cc*/
  v24 = v31[2]; /*0x6bd1ce*/
  a1[1] = v23; /*0x6bd1d2*/
  v25 = v31[3]; /*0x6bd1d5*/
  a1[2] = v24; /*0x6bd1db*/
  a1[3] = v25; /*0x6bd1de*/
  return a1; /*0x6bcfc2*/
}
