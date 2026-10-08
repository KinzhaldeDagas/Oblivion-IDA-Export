int __cdecl sub_91FF70(int a1, char *a2, int a3)
{
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  return def_91FFAB(
           a2 + 0x18,
           *((__m128 **)a2 + 1),
           (int)&savedregs,
           *((__m128 **)a2 + 4),
           *((__m128 **)a2 + 3),
           a1,
           (int)a2,
           a3);
}
