int __cdecl sub_6BD2D0(int a1, int a2, int a3, _DWORD *a4)
{
  float *v4; // eax
  int result; // eax
  float v6[4]; // [esp+10h] [ebp-10h] BYREF

  v4 = sub_714C40(v6, 1.0, 0.0, 0.0, 0.0);
  *a4 = *(_DWORD *)v4;
  a4[1] = *((_DWORD *)v4 + 1);
  a4[2] = *((_DWORD *)v4 + 2);
  result = *((_DWORD *)v4 + 3);
  a4[3] = result;
  return result;
}
