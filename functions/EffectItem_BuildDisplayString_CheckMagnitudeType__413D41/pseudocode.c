int __userpurge EffectItem_BuildDisplayString_::CheckMagnitudeType@<eax>(
        int a1@<ebx>,
        _DWORD *a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11,
        int a12,
        int a13,
        int a14,
        char a15,
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
        int a40,
        int a41,
        int a42)
{
  int v42; // eax
  int v44; // [esp+14h] [ebp+14h]

  if ( a42 == 8 )
    return EffectItem_BuildDisplayString_::Done(a3, a4, a5, a6, a7, a8);
  v42 = a2[7];
  if ( (*(_DWORD *)(v42 + 0x58) & 0x100) != 0 || a2[1] == a1 )
    return EffectItem_BuildDisplayString_::CheckArea(a3, a4, a5, a6, a7, a8);
  v44 = a2[1];
  if ( *a2 == 0x4E45504F || *a2 == 0x4B434F4C )
    return EffectItem_BuildDisplayString_::LockMagnitude(a3, a4, a5, a6, v44, a8, a9, a10, a11);
  if ( (*(_DWORD *)(v42 + 0x58) & 8) != 0 )
    return EffectItem_BuildDisplayString_::PercentMagnitude(a3, a4, a5, a6, v44, a8, a9, a10, a11, a12, a13, a14, a15);
  return EffectItem_BuildDisplayString_::LevelMagnitude(v42, a3, a4, a5, a6, v44, a8, a9, a10, a11, a12, a13, a14, a15);
}
