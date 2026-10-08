Ni2DBuffer *__cdecl sub_701400(NiSourceTexture *a1, int a2)
{
  Ni2DBuffer *(__cdecl *v3)(int, int); // eax

  if ( a2 >= 0 ) /*0x701406*/
    return 0; /*0x701408*/
  v3 = (Ni2DBuffer *(__cdecl *)(int, int))off_B256A0; /*0x70140b*/
  if ( !off_B256A0 ) /*0x70140b*/
  {
    v3 = sub_701020; /*0x701414*/
    off_B256A0 = (int (__cdecl *)(int, int))sub_701020; /*0x701419*/
  }
  return v3((int)a1, a2); /*0x70140a*/
}
