float *__stdcall sub_6FE5A0(int a1, float *a2, float *a3)
{
  int v4; // eax
  int v5; // esi
  float v6; // ebx
  float x; // eax
  int v8; // edx
  int v9; // ecx
  float *result; // eax
  int v11; // ecx
  int v12; // esi
  NiTransform *v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double y; // st6
  NiPoint3 v18; // [esp+8h] [ebp-18h] BYREF
  float v19; // [esp+14h] [ebp-Ch] BYREF
  float v20; // [esp+18h] [ebp-8h]
  float v21; // [esp+1Ch] [ebp-4h]
  float v22; // [esp+24h] [ebp+4h]
  float v23; // [esp+28h] [ebp+8h]
  float v24; // [esp+28h] [ebp+8h]
  float v25; // [esp+28h] [ebp+8h]

  if ( a1 && (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0xC))(a1), (v5 = v4) != 0) ) /*0x6fe5be*/
  {
    LODWORD(v6) = (*(unsigned __int16 (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 0xB4) + 0x50))(*(_DWORD *)(v4 + 0xB4)); /*0x6fe5d5*/
    v18.x = v6; /*0x6fe5d8*/
    v22 = (double)rand() / dbl_A3D5A8; /*0x6fe5ef*/
    *(_QWORD *)&v18.x = (__int64)(v22 * (double)SLODWORD(v6)); /*0x6fe611*/
    x = v18.x; /*0x6fe615*/
    if ( LODWORD(v18.x) == LODWORD(v6) ) /*0x6fe61f*/
      LODWORD(x) = LODWORD(v18.x) - 1; /*0x6fe621*/
    v8 = *(_DWORD *)(*(_DWORD *)(v5 + 0xB4) + 0x1C); /*0x6fe62a*/
    v9 = 3 * LODWORD(x); /*0x6fe62d*/
    result = a2; /*0x6fe630*/
    v11 = 4 * v9; /*0x6fe636*/
    *a2 = *(float *)(v11 + v8); /*0x6fe63b*/
    a2[1] = *(float *)(v11 + v8 + 4); /*0x6fe641*/
    a2[2] = *(float *)(v11 + v8 + 8); /*0x6fe648*/
    v23 = *(float *)(a1 + 0x94); /*0x6fe651*/
    *result = *result * v23; /*0x6fe662*/
    result[1] = result[1] * v23; /*0x6fe669*/
    result[2] = v23 * result[2]; /*0x6fe66f*/
    v12 = *(_DWORD *)(v5 + 0xB4); /*0x6fe672*/
    if ( *(_DWORD *)(v12 + 0x20) ) /*0x6fe678*/
    {
      v18 = *(NiPoint3 *)(v11 + *(_DWORD *)(v12 + 0x20)); /*0x6fe688*/
      v13 = sub_7101F0((NiTransform *)(a1 + 0x64), (NiTransform *)&v19, &v18); /*0x6fe6a9*/
      v14 = a3[1]; /*0x6fe6b2*/
      v15 = *a3; /*0x6fe6b7*/
      v18.x = v13->rot.data[0][0]; /*0x6fe6b9*/
      v16 = a3[2]; /*0x6fe6bd*/
      v18.y = v13->rot.data[0][1]; /*0x6fe6c5*/
      v18.z = v13->rot.data[0][2]; /*0x6fe6ce*/
      v24 = v14 * v14 + v15 * v15 + v16 * v16; /*0x6fe6de*/
      v25 = sqrt(v24); /*0x6fe6eb*/
      v19 = v18.x * v25; /*0x6fe706*/
      y = v18.y; /*0x6fe70e*/
      *a3 = v19; /*0x6fe712*/
      v20 = y * v25; /*0x6fe716*/
      a3[1] = v20; /*0x6fe71e*/
      v21 = v25 * v18.z; /*0x6fe725*/
      result = (float *)LODWORD(v21); /*0x6fe729*/
      a3[2] = v21; /*0x6fe72d*/
    }
  }
  else
  {
    *a2 = g_zeroNiPoint3.x; /*0x6fe741*/
    a2[1] = g_zeroNiPoint3.y; /*0x6fe749*/
    a2[2] = g_zeroNiPoint3.z; /*0x6fe752*/
    return a2; /*0x6fe73d*/
  }
  return result; /*0x6fe730*/
}
