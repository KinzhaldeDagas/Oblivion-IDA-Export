int __cdecl sub_714F80(int a1, float a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v8; // [esp+Ch] [ebp-28h]
  int v9[4]; // [esp+14h] [ebp-20h] BYREF
  int v10[4]; // [esp+24h] [ebp-10h] BYREF
  float v11; // [esp+3Ch] [ebp+8h]

  v8 = sub_72FC00((int)v9, a2, a4, a5);
  v6 = sub_72FC00((int)v10, a2, a3, a6);
  v11 = (1.0 - a2) * (a2 + a2);
  sub_72FC00(a1, v11, v6, v8);
  return a1;
}
