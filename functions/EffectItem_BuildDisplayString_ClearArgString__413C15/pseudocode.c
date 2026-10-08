int __thiscall EffectItem_BuildDisplayString_::ClearArgString(
        void *this,
        int a2,
        int a3,
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
        int a40)
{
  *(_DWORD *)a40 = 0; /*0x413c28*/
  *(_WORD *)(a40 + 4) = 0; /*0x413c2a*/
  *(_WORD *)(a40 + 6) = 0; /*0x413c2e*/
  FormHeapFree(0); /*0x413c43*/
  *(_DWORD *)a40 = 0; /*0x413c48*/
  *(_WORD *)(a40 + 6) = 0; /*0x413c4a*/
  *(_WORD *)(a40 + 4) = 0; /*0x413c4e*/
  return EffectItem_BuildDisplayString_::CheckNameQualifier((int)this);
}
