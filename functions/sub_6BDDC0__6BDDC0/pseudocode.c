char __cdecl sub_6BDDC0(float a1, int a2, int a3, float a4, char a5)
{
  float v6; // [esp+Ch] [ebp-14h]

  if ( a4 == 0.0 ) /*0x6bddc6*/
    return unk_B3C468; /*0x6bde2f*/
  if ( *(float *)a2 > (double)a1 ) /*0x6bddd9*/
    return *(_BYTE *)(a2 + 4); /*0x6bdddd*/
  if ( *(float *)((unsigned __int8)a5 * (LODWORD(a4) - 1) + a2) < (double)a1 ) /*0x6bddfa*/
    return *(_BYTE *)((unsigned __int8)a5 * (LODWORD(a4) - 1) + a2 + 4); /*0x6bde04*/
  v6 = a4; /*0x6bde11*/
  a4 = 0.0; /*0x6bde1c*/
  return sub_6BDBA0(a1, a2, a3, v6, (int *)&a4, a5); /*0x6bdde0*/
}
