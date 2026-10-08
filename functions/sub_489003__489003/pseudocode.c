void __usercall sub_489003(signed int a1@<eax>, int a2@<ebx>, int a3@<esi>, int a4, int a5, int a6, float a7)
{
  int v7; // esi
  int v8; // esi
  float v9; // [esp+10h] [ebp+10h]

  v7 = *(_DWORD *)(a3 + 8); /*0x489009*/
  v9 = *(float *)(a2 + 0x94) * (double)a1 + a7; /*0x48901a*/
  if ( !v7 || (v8 = v7 - 4) == 0 ) /*0x489027*/
    JUMPOUT(0x488EF4); /*0x488ef4*/
  sub_488FD3(v8, a4, a5, a6, v9); /*0x489027*/
}
