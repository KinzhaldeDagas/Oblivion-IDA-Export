float *__stdcall sub_7A50B0(float *a1, float *a2, float *a3, float *a4)
{
  int v6; // edx
  int v7; // ecx
  float v8; // [esp+4h] [ebp-18h] BYREF
  float v9; // [esp+8h] [ebp-14h]
  float v10; // [esp+Ch] [ebp-10h]
  float v11; // [esp+10h] [ebp-Ch]
  float v12; // [esp+14h] [ebp-8h]
  float v13; // [esp+18h] [ebp-4h]
  float v14; // [esp+24h] [ebp+8h]

  if ( *a3 == *a2 && a3[1] == a2[1] && a3[2] == a2[2] )
  {
    v6 = *((_DWORD *)a2 + 1);
    *a1 = *a2;
    v7 = *((_DWORD *)a2 + 2);
    *((_DWORD *)a1 + 1) = v6;
    *((_DWORD *)a1 + 2) = v7;
    return a1;
  }
  else
  {
    v8 = *a3 - *a2;
    v9 = a3[1] - a2[1];
    v10 = a3[2] - a2[2];
    sub_78ED70(&v8);
    v11 = *a4 - *a2;
    v12 = a4[1] - a2[1];
    v13 = a4[2] - a2[2];
    v14 = v13 * v10 + v12 * v9 + v11 * v8;
    v11 = v8 * v14;
    v12 = v9 * v14;
    v13 = v10 * v14;
    *a1 = *a2 + v11;
    a1[1] = a2[1] + v12;
    a1[2] = v13 + a2[2];
    return a1;
  }
}
