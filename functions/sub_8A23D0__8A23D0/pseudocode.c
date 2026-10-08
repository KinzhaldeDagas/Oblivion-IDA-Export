int __userpurge sub_8A23D0@<eax>(__m128 **this@<ecx>, char a2@<bpl>, _BYTE *a3)
{
  FreeEntry *v4; // eax
  unsigned __int8 v5; // cl
  float *v6; // eax
  __m128 *inited; // eax
  bool v8; // zf
  int v10; // [esp+0h] [ebp-4h]

  if ( *(this + 3) ) /*0x8a23d3*/
  {
    *a3 = 0; /*0x8a2422*/
    return (int)*(this + 3); /*0x8a2425*/
  }
  else
  {
    v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000060uLL, v10); /*0x8a23e2*/
    v5 = 0x10 - ((unsigned __int8)v4 & 0xF); /*0x8a23ee*/
    v6 = (float *)((char *)v4 + v5); /*0x8a23f3*/
    *((_BYTE *)v6 + 0xFFFFFFFF) = v5; /*0x8a23f5*/
    inited = (__m128 *)OB_bhkTransformShapeCinfo_InitIdentity_010201A0(v6); /*0x8a23fa*/
    v8 = *(this + 2) == 0; /*0x8a23ff*/
    *(this + 3) = inited; /*0x8a2403*/
    if ( !v8 ) /*0x8a2406*/
      sub_8A20A0(this, (int)inited); /*0x8a240b*/
    *a3 = 1; /*0x8a2414*/
    return (int)*(this + 3); /*0x8a2417*/
  }
}
