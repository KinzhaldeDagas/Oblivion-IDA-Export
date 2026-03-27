_DWORD *sub_790B00()
{
  char *v0; // ecx
  char *v1; // eax
  char *v2; // ebx
  char *v3; // edi
  int v5; // [esp+Ch] [ebp-8h] BYREF

  v0 = (char *)dword_B429E4;
  v1 = (char *)dword_B429E0;
  v2 = (char *)dword_B429E4;
  if ( dword_B429E0 > dword_B429E4 )
  {
    _invalid_parameter_noinfo();
    v0 = (char *)dword_B429E4;
    v1 = (char *)dword_B429E0;
  }
  v3 = v1;
  if ( v1 > v0 )
    _invalid_parameter_noinfo();
  return sub_439050(&dword_B429DC, (int)v2, &v5, (int)&dword_B429DC, v3, (int)&dword_B429DC, v2);
}
