Ni2DBuffer *__cdecl sub_701400(NiSourceTexture *a1, int a2)
{
  Ni2DBuffer *(__cdecl *v3)(int, int); // eax

  if ( a2 >= 0 )
    return 0;
  v3 = (Ni2DBuffer *(__cdecl *)(int, int))off_B256A0;
  if ( !off_B256A0 )
  {
    v3 = sub_701020;
    off_B256A0 = (int (__cdecl *)(int, int))sub_701020;
  }
  return v3((int)a1, a2);
}
