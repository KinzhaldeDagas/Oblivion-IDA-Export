unsigned int __cdecl sub_8FF120(int a1, int a2, int a3)
{
  int *v3; // ebp
  __m128 *v4; // esi
  __m128 *v6; // [esp-4h] [ebp-14h]

  v3 = **(int ***)a1;
  v4 = **(__m128 ***)(a1 + 4);
  v6 = (__m128 *)(a1 + 0x10);
  if ( (*(int (__thiscall **)(__m128 *))(v4->m128_i32[0] + 8))(v4) == 6 )
    sub_93EF30((_WORD *)a3, a3, v3, v4, v6);
  else
    sub_93EE40((_WORD *)a3, v3, (int *)v4, v6);
  *(_BYTE *)(a2 + 2) = 0;
  *(_DWORD *)(a3 + 0xC) = 0;
  return a3
       + ((2 * (*(unsigned __int8 *)(a3 + 0xC) + *(unsigned __int8 *)(a3 + 0xD) + 4 * *(unsigned __int8 *)(a3 + 0xE))
         + 0x1F)
        & 0xFFFFFFF0);
}
