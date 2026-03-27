int __cdecl sub_6BF8F0(float a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // eax
  int result; // eax
  int v6[4]; // [esp+Ch] [ebp-10h] BYREF

  v4 = (_DWORD *)sub_72FC00((int)v6, a1, a2 + 4, a3 + 4);
  *a4 = *v4;
  a4[1] = v4[1];
  a4[2] = v4[2];
  result = v4[3];
  a4[3] = result;
  return result;
}
