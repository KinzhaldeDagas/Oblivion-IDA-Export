// positive sp value has been detected, the output may be wrong!
int ***__usercall def_4EACCA@<eax>(
        char a1@<bl>,
        int a2@<ebp>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        int a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int ***a21,
        int a22,
        int a23,
        float a24,
        float a25,
        float a26,
        float a27,
        int a28,
        int a29,
        int a30,
        float a31,
        float a32,
        float a33,
        float a34,
        float a35,
        float a36,
        float a37,
        float a38,
        float a39,
        float a40)
{
  double v40; // st6
  double v41; // st7
  int v42; // ecx
  double v43; // st6
  double v44; // st5
  double v45; // st4
  int v46; // eax
  float *v47; // ecx
  double v48; // st7
  int ***v49; // edx
  double v50; // st6
  double v51; // st6
  int v52; // ecx
  int ***result; // eax
  float v54; // [esp+8h] [ebp+8h]
  float v55; // [esp+Ch] [ebp+Ch]
  float v56; // [esp+Ch] [ebp+Ch]
  float v57; // [esp+Ch] [ebp+Ch]
  float v58; // [esp+18h] [ebp+18h]

  v55 = (float)Double_To_SInt32(a3); /*0x4eade4*/
  v40 = a3 - v55; /*0x4eadf0*/
  v41 = v55; /*0x4eadf0*/
  if ( v40 < dbl_A2FC68 ) /*0x4eadfd*/
    v41 = v41 - dbl_A2F928; /*0x4eadff*/
  a13 = v41; /*0x4eae07*/
  if ( a1 ) /*0x4eae15*/
    sub_4C3540(*(TESObjectCELL ***)(a2 + 0x14), (int)&a40, (int)&a14, &a24); /*0x4eae22*/
  else
    sub_4406A0(MEMORY[0xB333A0], &a11, &a14, &a24); /*0x4eae34*/
  v42 = *(_DWORD *)(a2 + 0x30); /*0x4eae39*/
  if ( *(_BYTE *)(v42 + 0x1E) ) /*0x4eae3c*/
  {
    if ( *(_BYTE *)(v42 + 0x1C) ) /*0x4eae47*/
    {
      a14 = a24; /*0x4eae59*/
      a15 = a25; /*0x4eae5d*/
      a16 = a26; /*0x4eae61*/
    }
    else
    {
      v56 = a24 + a14; /*0x4eae7c*/
      v58 = a25 + a15; /*0x4eae88*/
      v54 = a26 + a16; /*0x4eae94*/
      a33 = v56; /*0x4eae9c*/
      a14 = v56; /*0x4eaeae*/
      a34 = v58; /*0x4eaeb2*/
      a15 = v58; /*0x4eaec4*/
      a35 = v54; /*0x4eaec8*/
      a16 = v54; /*0x4eaed6*/
      Vector3_NormalizeInPlace(&a14); /*0x4eaede*/
    }
  }
  if ( a36 <= (double)a16 && a32 >= (double)a16 ) /*0x4eaf0b*/
  {
    v43 = dbl_A2FAA0; /*0x4eaf1f*/
    a14 = a14 * v43 + v43; /*0x4eaf21*/
    v44 = dbl_A46B18; /*0x4eaf33*/
    v45 = kDistantLODNormalLimit_097; /*0x4eaf38*/
    if ( v44 <= a14 ) /*0x4eaf3e*/
      a14 = kDistantLODNormalLimit_097; /*0x4eaf40*/
    a15 = a15 * v43 + v43; /*0x4eaf4c*/
    if ( a15 >= v44 ) /*0x4eaf5b*/
      a15 = v45; /*0x4eaf5d*/
    a16 = v43 + a16 * v43; /*0x4eaf69*/
    if ( a16 >= v44 ) /*0x4eaf78*/
      a16 = v45; /*0x4eaf7a*/
    a11 = a14 + a11; /*0x4eaf8c*/
    a12 = a15 + a12; /*0x4eaf98*/
    a13 = a16 + a13; /*0x4eafa4*/
    a27 = 0.0; /*0x4eafaa*/
    *(float *)&a28 = 0.0; /*0x4eafae*/
    *(float *)&a29 = 0.0; /*0x4eafb2*/
    *(float *)&a30 = 0.0; /*0x4eafb6*/
    if ( a1 ) /*0x4eafba*/
      sub_4C4B70(*(_DWORD **)(a2 + 0x14), (int)&a40, (int)&a27); /*0x4eafcc*/
    else
      sub_4407A0(MEMORY[0xB333A0], &a11, &a27); /*0x4eafe3*/
    v46 = (unsigned __int16)a21; /*0x4eb000*/
    v47 = (float *)(unk_B36098 + 0xC * (unsigned __int16)a21); /*0x4eb00c*/
    v48 = a27 * dbl_A47A48 + *(float *)&a28 * dbl_A47A40; /*0x4eb013*/
    v49 = (int ***)((char *)a21 + 1); /*0x4eb015*/
    v50 = *(float *)&a29; /*0x4eb018*/
    *v47 = a11; /*0x4eb01c*/
    v51 = v50 * dbl_A47A38; /*0x4eb01e*/
    v47[1] = a12; /*0x4eb028*/
    v47[2] = a13; /*0x4eb031*/
    v52 = unk_B3609C; /*0x4eb034*/
    a21 = v49; /*0x4eb03a*/
    v57 = v48 + v51; /*0x4eb03e*/
    *(float *)(v52 + 4 * v46) = v57; /*0x4eb046*/
  }
  if ( ++a19 < a17 ) /*0x4eb062*/
    JUMPOUT(0x4EAA64); /*0x4eaa64*/
  if ( ++a18 < a17 ) /*0x4eb075*/
    JUMPOUT(0x4EAA30); /*0x4eaa30*/
  result = a21; /*0x4eb07b*/
  if ( (_WORD)a21 ) /*0x4eb082*/
    return sub_7C4F50( /*0x4eb0a6*/
             *(int ***)(a2 + 0x18),
             *(_DWORD *)(a2 + 8),
             *(_DWORD *)(a2 + 0xC),
             *(_DWORD *)(a2 + 0x20),
             *(_DWORD *)(a2 + 0x30),
             unk_B36098,
             unk_B3609C,
             (int)a21);
  return result; /*0x4eb0c3*/
}
