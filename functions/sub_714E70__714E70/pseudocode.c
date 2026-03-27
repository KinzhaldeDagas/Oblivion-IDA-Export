float *__cdecl sub_714E70(float *a1, float *a2, float *a3, float *a4)
{
  float *v4; // eax
  float *v5; // edi
  float *v6; // eax
  float *v7; // eax
  float *v8; // eax
  int v10; // [esp+10h] [ebp-8Ch]
  int v11; // [esp+14h] [ebp-88h]
  int v12; // [esp+18h] [ebp-84h]
  float v13[4]; // [esp+1Ch] [ebp-80h] BYREF
  int v14[4]; // [esp+2Ch] [ebp-70h] BYREF
  float v15[4]; // [esp+3Ch] [ebp-60h] BYREF
  float v16[4]; // [esp+4Ch] [ebp-50h] BYREF
  float v17[4]; // [esp+5Ch] [ebp-40h] BYREF
  float v18[4]; // [esp+6Ch] [ebp-30h] BYREF
  float v19[4]; // [esp+7Ch] [ebp-20h] BYREF
  int v20[4]; // [esp+8Ch] [ebp-10h] BYREF

  v13[0] = *a3;
  v13[1] = -a3[1];
  v13[2] = -a3[2];
  v13[3] = -a3[3];
  v4 = sub_714CF0(v13, v17, a4);
  v5 = sub_714DB0(v19, v4);
  v6 = sub_714CF0(v13, v16, a2);
  v7 = sub_714DB0(v18, v6);
  *(float *)&v11 = v5[1] + v7[1];
  *(float *)&v12 = v5[2] + v7[2];
  *(float *)&v10 = v5[3] + v7[3];
  *(float *)v14 = *v5 + *v7;
  v14[1] = v11;
  v14[2] = v12;
  v14[3] = v10;
  v8 = (float *)sub_72F990((int)v20, flt_A7EAB4, (int)v14);
  sub_72F9F0(v15, v8);
  sub_714CF0(a3, a1, v15);
  return a1;
}
