char __cdecl sub_897490(int a1, int *a2, float a3)
{
  int *v3; // edi
  unsigned int v4; // ebx
  int *i; // esi
  int v7[3]; // [esp+14h] [ebp-18h] BYREF
  int v8[3]; // [esp+20h] [ebp-Ch] BYREF

  v3 = a2; /*0x89749b*/
  v4 = 0; /*0x8974a1*/
  for ( i = (int *)(a1 + 8); ; i += 3 ) /*0x8974a3*/
  {
    v8[0] = i[0xFFFFFFFE]; /*0x8974ac*/
    v8[1] = i[0xFFFFFFFF]; /*0x8974bb*/
    v8[2] = *i; /*0x8974c1*/
    v7[0] = *v3; /*0x8974c7*/
    v7[1] = v3[1]; /*0x8974ce*/
    v7[2] = *(int *)((char *)a2 + (_DWORD)i - a1); /*0x8974d5*/
    if ( !sub_8904E0((float *)v8, (float *)v7, a3) ) /*0x8974e2*/
      break; /*0x8974e2*/
    ++v4; /*0x8974ee*/
    v3 += 3; /*0x8974f4*/
    if ( v4 >= 3 ) /*0x8974fa*/
      return 1; /*0x897505*/
  }
  return 0; /*0x8974fc*/
}
