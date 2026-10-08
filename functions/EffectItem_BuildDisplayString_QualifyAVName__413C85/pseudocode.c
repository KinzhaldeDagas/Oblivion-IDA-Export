// positive sp value has been detected, the output may be wrong!
int __userpurge EffectItem_BuildDisplayString_::QualifyAVName@<eax>(
        unsigned int a1@<ebx>,
        int ebp0@<ebp>,
        BSStringT *a3@<edi>,
        int *a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        int a11,
        int a12,
        char a2,
        int a14,
        int a15,
        int a16,
        char a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44)
{
  const char **Name; // eax
  unsigned int v45; // ecx
  const char *v46; // ebp
  const char *v47; // eax
  int v49; // [esp-24h] [ebp-24h]
  int v50; // [esp-20h] [ebp-20h]
  BSStringT v51; // [esp-1Ch] [ebp-1Ch]
  int v52; // [esp-14h] [ebp-14h]
  int v53[4]; // [esp-10h] [ebp-10h] BYREF

  Name = (const char **)EffectItem_GetName( /*0x413c8c*/
                          a4,
                          (int)v53,
                          v49,
                          v50,
                          v51,
                          v52,
                          v53[0],
                          v53[1],
                          v53[2],
                          (BSStringT *)v53[3]);
  v45 = a4[5]; /*0x413c91*/
  a41 = ebp0; /*0x413c94*/
  v46 = *Name; /*0x413c9b*/
  v47 = (const char *)ActorValue_GetName(v45); /*0x413c9e*/
  _sprintf(&a2, "%s %s", v46, v47); /*0x413caf*/
  LOBYTE(a41) = a1; /*0x413cb9*/
  FormHeapFree(a9); /*0x413cc0*/
  BSStringT_Set(a3, &a2, a1); /*0x413cd0*/
  return EffectItem_BuildDisplayString_::CheckMagnitudeType(
           a1,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a2,
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
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44);
}
