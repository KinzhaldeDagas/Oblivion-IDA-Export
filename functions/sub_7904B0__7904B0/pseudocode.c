void __cdecl sub_7904B0(int *a1, int *a2, int *a3)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  int *v7; // edx
  int *v9; // [esp+8h] [ebp+4h]
  unsigned int v10; // [esp+10h] [ebp+Ch]

  v4 = a3 - a1;
  if ( v4 <= 0x28 )
  {
    sub_790350(a1, a2, a3);
  }
  else
  {
    v5 = (v4 + 1) / 8;
    v10 = 8 * v5;
    v6 = 4 * v5;
    v7 = &a1[2 * v5];
    v9 = &a1[v5];
    sub_790350(a1, v9, v7);
    sub_790350(&a2[v6 / 0xFFFFFFFC], a2, &a2[v6 / 4]);
    sub_790350(&a3[v10 / 0xFFFFFFFC], &a3[v6 / 0xFFFFFFFC], a3);
    sub_790350(v9, a2, &a3[v6 / 0xFFFFFFFC]);
  }
}
