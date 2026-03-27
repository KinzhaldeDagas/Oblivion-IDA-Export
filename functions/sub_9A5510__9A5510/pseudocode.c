float *__cdecl sub_9A5510(float *a1, float *a2, char a3, char a4)
{
  float *result; // eax

  result = a2;
  if ( a2 )
  {
    *a1 = *a2;
    a1[4] = a2[1];
    a1[8] = 0.0;
    a1[0xC] = a2[2];
    a1[1] = a2[3];
    a1[5] = a2[4];
    a1[9] = 0.0;
    a1[0xD] = a2[5];
    a1[0xE] = 0.0;
    a1[0xA] = 0.0;
    a1[6] = 0.0;
    a1[2] = 0.0;
    a1[0xF] = 0.0;
    a1[0xB] = 0.0;
    a1[7] = 0.0;
    a1[3] = 0.0;
    if ( a3 )
      result = (float *)D3DXMatrixInverse_0((int)a1, 0, (int)a1);
    if ( a4 )
      return (float *)D3DXMatrixTranspose_0((int)a1, (int)a1);
  }
  else
  {
    a1[0xE] = 0.0;
    a1[0xD] = 0.0;
    a1[0xC] = 0.0;
    a1[0xB] = 0.0;
    a1[9] = 0.0;
    a1[8] = 0.0;
    a1[7] = 0.0;
    a1[6] = 0.0;
    a1[4] = 0.0;
    a1[3] = 0.0;
    a1[2] = 0.0;
    a1[1] = 0.0;
    a1[0xF] = 1.0;
    a1[0xA] = 1.0;
    a1[5] = 1.0;
    *a1 = 1.0;
    return a1;
  }
  return result;
}
