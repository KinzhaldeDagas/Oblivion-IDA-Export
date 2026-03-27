void __usercall sub_9759A0(float *a1@<edx>, float *a2@<ecx>, float *a3@<esi>)
{
  double v3; // st7
  double v4; // st7
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+0h] [ebp-4h]
  float v7; // [esp+0h] [ebp-4h]
  float v8; // [esp+0h] [ebp-4h]
  float v9; // [esp+0h] [ebp-4h]
  float v10; // [esp+0h] [ebp-4h]

  if ( -a1[0xC] <= *a2 )
  {
    if ( a1[0xC] >= (double)*a2 )
      goto LABEL_6;
    v6 = *a2 - a1[0xC];
    *a3 = v6 * v6 + *a3;
    v3 = a1[0xC];
  }
  else
  {
    v5 = a1[0xC] + *a2;
    *a3 = v5 * v5 + *a3;
    v3 = -a1[0xC];
  }
  *a2 = v3;
LABEL_6:
  if ( -a1[0xD] <= a2[1] )
  {
    if ( a1[0xD] >= (double)a2[1] )
      goto LABEL_11;
    v8 = a2[1] - a1[0xD];
    *a3 = v8 * v8 + *a3;
    v4 = a1[0xD];
  }
  else
  {
    v7 = a1[0xD] + a2[1];
    *a3 = v7 * v7 + *a3;
    v4 = -a1[0xD];
  }
  a2[1] = v4;
LABEL_11:
  if ( -a1[0xE] <= a2[2] )
  {
    if ( a1[0xE] < (double)a2[2] )
    {
      v10 = a2[2] - a1[0xE];
      *a3 = v10 * v10 + *a3;
      a2[2] = a1[0xE];
    }
  }
  else
  {
    v9 = a1[0xE] + a2[2];
    *a3 = v9 * v9 + *a3;
    a2[2] = -a1[0xE];
  }
}
