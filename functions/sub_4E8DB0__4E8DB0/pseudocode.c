char *__stdcall sub_4E8DB0(float *a1, int *a2, float *a3)
{
  int *v3; // esi
  int i; // ebp
  int v5; // edi
  float *v6; // eax
  float v8; // [esp+8h] [ebp-10h]
  float v9; // [esp+Ch] [ebp-Ch]
  float v10; // [esp+10h] [ebp-8h]
  float v11; // [esp+14h] [ebp-4h]
  float v12; // [esp+20h] [ebp+8h]
  float v13; // [esp+20h] [ebp+8h]

  v8 = flt_A32048;
  v3 = a2;
  for ( i = 0; v3; v3 = (int *)v3[1] )
  {
    if ( !v3[1] && !*v3 )
      break;
    v5 = *v3;
    v6 = (float *)sub_4BEF40((char *)*v3);
    v9 = *v6 - *a1;
    v10 = v6[1] - a1[1];
    v11 = v6[2] - a1[2];
    v12 = v9 * v9 + v10 * v10 + v11 * v11;
    v13 = sqrt(v12);
    if ( v8 > (double)v13 )
    {
      v8 = v13;
      i = v5;
    }
  }
  *a3 = v8;
  return (char *)i;
}
