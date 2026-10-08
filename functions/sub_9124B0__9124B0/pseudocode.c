int __stdcall sub_9124B0(int **a1, int **a2, int a3, int a4, int a5, int a6)
{
  int *v6; // ecx
  int v7; // edx
  int *v8; // eax
  int result; // eax
  __m128 v10; // [esp+10h] [ebp-20h] BYREF
  int v11; // [esp+20h] [ebp-10h]
  int v12; // [esp+24h] [ebp-Ch]
  float v13[2]; // [esp+28h] [ebp-8h] BYREF

  v6 = *a1 + 1; /*0x9124be*/
  *a1 = v6; /*0x9124c1*/
  v7 = *v6++; /*0x9124c3*/
  *a1 = v6; /*0x9124c8*/
  sub_943230( /*0x9124fe*/
    (__m128 *)(a4 + 0x10 * (v7 + 5)),
    (__m128 *)(a4 + 0x10 * (v7 + 8)),
    (__m128 *)(a4 + 0x10 * (*v6 + 5)),
    (__m128 *)(a4 + 0x10 * (*v6 + 8)),
    &v10,
    v13);
  v8 = *a2; /*0x912506*/
  *a2 += 4; /*0x91250b*/
  v11 = *v8; /*0x91250f*/
  v12 = v8[1]; /*0x91251d*/
  sub_8F1B60(&v10, a5, a6); /*0x912527*/
  result = *(_DWORD *)(a4 + 0xB8) + 1; /*0x912535*/
  *(_DWORD *)(a4 + 0xB8) = result; /*0x912536*/
  return result; /*0x91253c*/
}
