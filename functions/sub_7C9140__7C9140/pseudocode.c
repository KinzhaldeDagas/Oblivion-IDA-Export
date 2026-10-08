Ni2DBuffer *__stdcall sub_7C9140(int a1, float a2, int a3, int a4)
{
  Ni2DBuffer **v5; // edi
  float *v6; // esi
  Ni2DBuffer *result; // eax
  float v8; // [esp+10h] [ebp-18h] BYREF
  float v9; // [esp+14h] [ebp-14h]
  float v10; // [esp+18h] [ebp-10h]
  float v11[3]; // [esp+1Ch] [ebp-Ch] BYREF
  float v12; // [esp+38h] [ebp+10h]

  v5 = &dword_B45040; /*0x7c914f*/
  v6 = 0; /*0x7c9154*/
  do /*0x7c921c*/
  {
    result = *v5; /*0x7c9160*/
    if ( LOBYTE((*v5)->members.width) ) /*0x7c9162*/
    {
      v11[0] = v6[0x2D194A]; /*0x7c9173*/
      v11[1] = v6[0x2D194B]; /*0x7c9182*/
      v11[2] = v6[0x2D194C]; /*0x7c9191*/
      result = (Ni2DBuffer *)D3DXVec3TransformCoord_0((int)&v8, (int)v11, a1); /*0x7c9195*/
      v12 = v6[0x2D196A]; /*0x7c91a2*/
      if ( !a4 ) /*0x7c91a6*/
      {
        result = (Ni2DBuffer *)(a3 - 0x177); /*0x7c91ac*/
        if ( (unsigned int)(a3 - 0x177) > 2 ) /*0x7c91b4*/
        {
          v12 = v12 / a2; /*0x7c91e4*/
        }
        else
        {
          v8 = v8 * a2; /*0x7c91c4*/
          v9 = v9 * a2; /*0x7c91ce*/
          v10 = a2 * v10; /*0x7c91d6*/
        }
      }
      v6[0x2D13F6] = v8; /*0x7c91ec*/
      v6[0x2D13F7] = v9; /*0x7c91f6*/
      v6[0x2D13F8] = v10; /*0x7c9200*/
      v6[0x2D13F9] = v12; /*0x7c920a*/
    }
    ++v5; /*0x7c9210*/
    v6 += 4; /*0x7c9213*/
  }
  while ( (int)v5 < (int)&dword_B4504C ); /*0x7c921c*/
  return result; /*0x7c9222*/
}
