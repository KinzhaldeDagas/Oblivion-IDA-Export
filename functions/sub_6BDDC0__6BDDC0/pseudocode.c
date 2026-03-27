char __cdecl sub_6BDDC0(float a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v6; // [esp+Ch] [ebp-14h]

  if ( !a4 )
    return byte_B3C468;
  if ( *(float *)a2 > (double)a1 )
    return *(_BYTE *)(a2 + 4);
  if ( *(float *)(a5 * (a4 - 1) + a2) < (double)a1 )
    return *(_BYTE *)(a5 * (a4 - 1) + a2 + 4);
  v6 = a4;
  a4 = 0;
  return sub_6BDBA0(a1, a2, a3, v6, &a4, a5);
}
