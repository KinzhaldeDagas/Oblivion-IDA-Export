_DWORD *__cdecl sub_8F0F70(int a1, int *a2, int a3, int a4)
{
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // edi
  _DWORD *result; // eax

  v4 = (_DWORD *)a2[1];
  v5 = *a2;
  v6 = *(_DWORD *)(a1 + 0x18);
  v4[3] = *(_DWORD *)(a1 + 0x14);
  v4[2] = a3;
  v4[4] = v6;
  v4[5] = a4;
  *v4 = 0x11801;
  v4[1] = v5;
  result = v4 + 6;
  a2[1] = (int)result;
  return result;
}
