_DWORD *__cdecl sub_8F0F70(int a1, int *a2, int a3, int a4)
{
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // edi
  _DWORD *result; // eax

  v4 = (_DWORD *)a2[1]; /*0x8f0f74*/
  v5 = *a2; /*0x8f0f77*/
  v6 = *(_DWORD *)(a1 + 0x18); /*0x8f0f7f*/
  v4[3] = *(_DWORD *)(a1 + 0x14); /*0x8f0f85*/
  v4[2] = a3; /*0x8f0f8c*/
  v4[4] = v6; /*0x8f0f93*/
  v4[5] = a4; /*0x8f0f96*/
  *v4 = 0x11801; /*0x8f0f99*/
  v4[1] = v5; /*0x8f0f9f*/
  result = v4 + 6; /*0x8f0fa2*/
  a2[1] = (int)result; /*0x8f0fa6*/
  return result; /*0x8f0fa5*/
}
