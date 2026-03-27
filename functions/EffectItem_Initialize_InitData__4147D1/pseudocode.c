int __usercall EffectItem_Initialize_::InitData@<eax>(
        _DWORD *a1@<eax>,
        _DWORD *a2@<esi>,
        int ebx0@<ebx>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27)
{
  int v27; // ecx

  if ( (a1[0x16] & 0x1180000) != 0 )
    v27 = a1[0x18];
  else
    v27 = 0x48;
  a2[5] = v27;
  *((float *)a2 + 8) = -1.0;
  if ( a1[0x26] == 0x46464553 )
    return EffectItem_Initialize_::AllocateSCIT(
             ebx0,
             a2,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20,
             a21,
             a22,
             a23,
             a24,
             a25,
             a26,
             a27);
  else
    return EffectItem_Initialize_::NoSCITBlock();
}
