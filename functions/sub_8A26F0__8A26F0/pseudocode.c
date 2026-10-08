signed int __userpurge sub_8A26F0@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  float *v3; // eax

  if ( !a1 ) /*0x8a26f5*/
    return 1; /*0x8a26f5*/
  v3 = *(float **)(a1 + 8); /*0x8a26f7*/
  if ( !v3 ) /*0x8a26fc*/
    return 1; /*0x8a2719*/
  sub_8B6550(a2, v3, *(float *)(a3 + 4), a3); /*0x8a270b*/
  return 0; /*0x8a2715*/
}
