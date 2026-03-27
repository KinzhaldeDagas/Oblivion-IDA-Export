int __usercall MagicCaster_ApplyActiveMagicItem_::GetAreaTargetList_@<eax>(
        char *a1@<esi>,
        TESObjectREFR *ebx0@<ebx>,
        TESObjectREFR *a3@<ebp>,
        char *a4@<edi>,
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
        __int64 a20,
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
        int a35)
{
  TESObjectREFRVtbl *vtbl; // edx
  TESObjectREFR *v36; // ecx
  int v37; // eax

  if ( ebx0 != a3 )
  {
    vtbl = ebx0->vtbl;
    v36 = ebx0;
LABEL_7:
    v37 = ((int (__fastcall *)(TESObjectREFR *))vtbl->GetPos)(v36);
    MagicCaster_GetTargetsInArea_(a1, a4, 1, *(float *)v37, *(_QWORD *)(v37 + 4), &a21);
    return MagicCaster_ApplyActiveMagicItem_::EffectItemLoop_Before(
             (int)a1,
             ebx0,
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
             a27,
             a28,
             a29,
             a30,
             a31,
             a32,
             a33,
             a34,
             a35);
  }
  v36 = (TESObjectREFR *)a10;
  if ( a10 && a15 && *(char *)(a15 + 0x40) < 0 )
  {
    vtbl = *(TESObjectREFRVtbl **)a10;
    goto LABEL_7;
  }
  return MagicCaster_ApplyActiveMagicItem_::EffectItemLoop_Before(
           (int)a1,
           ebx0,
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
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35);
}
