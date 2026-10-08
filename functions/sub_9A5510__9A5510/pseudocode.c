float *__cdecl sub_9A5510(float *a1, float *a2, char a3, char a4)
{
  float *result; // eax

  result = a2; /*0x9a5510*/
  if ( a2 ) /*0x9a5516*/
  {
    *a1 = *a2; /*0x9a5524*/
    a1[4] = a2[1]; /*0x9a5529*/
    a1[8] = 0.0; /*0x9a552e*/
    a1[0xC] = a2[2]; /*0x9a5534*/
    a1[1] = a2[3]; /*0x9a553a*/
    a1[5] = a2[4]; /*0x9a5540*/
    a1[9] = 0.0; /*0x9a5543*/
    a1[0xD] = a2[5]; /*0x9a5549*/
    a1[0xE] = 0.0; /*0x9a554c*/
    a1[0xA] = 0.0; /*0x9a554f*/
    a1[6] = 0.0; /*0x9a5552*/
    a1[2] = 0.0; /*0x9a5555*/
    a1[0xF] = 0.0; /*0x9a5558*/
    a1[0xB] = 0.0; /*0x9a555b*/
    a1[7] = 0.0; /*0x9a555e*/
    a1[3] = 0.0; /*0x9a5561*/
    if ( a3 ) /*0x9a5564*/
      result = (float *)D3DXMatrixInverse_0((int)a1, 0, (int)a1); /*0x9a556a*/
    if ( a4 ) /*0x9a5574*/
      return (float *)D3DXMatrixTranspose_0((int)a1, (int)a1); /*0x9a5578*/
  }
  else
  {
    a1[0xE] = 0.0; /*0x9a5585*/
    a1[0xD] = 0.0; /*0x9a5588*/
    a1[0xC] = 0.0; /*0x9a558b*/
    a1[0xB] = 0.0; /*0x9a558e*/
    a1[9] = 0.0; /*0x9a5591*/
    a1[8] = 0.0; /*0x9a5594*/
    a1[7] = 0.0; /*0x9a5597*/
    a1[6] = 0.0; /*0x9a559a*/
    a1[4] = 0.0; /*0x9a559d*/
    a1[3] = 0.0; /*0x9a55a0*/
    a1[2] = 0.0; /*0x9a55a3*/
    a1[1] = 0.0; /*0x9a55a6*/
    a1[0xF] = 1.0; /*0x9a55ab*/
    a1[0xA] = 1.0; /*0x9a55ae*/
    a1[5] = 1.0; /*0x9a55b1*/
    *a1 = 1.0; /*0x9a55b4*/
    return a1; /*0x9a557f*/
  }
  return result; /*0x9a557e*/
}
