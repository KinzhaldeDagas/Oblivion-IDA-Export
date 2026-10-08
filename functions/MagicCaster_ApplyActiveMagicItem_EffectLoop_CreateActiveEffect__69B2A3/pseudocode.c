int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_CreateActiveEffect@<eax>(
        int a1@<ebp>,
        int *a2@<esi>,
        TESObjectREFR *a3@<ebx>,
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
        float a15,
        int a16,
        int a17,
        int a18,
        __int64 a19,
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
        float a32,
        int a33,
        int a34)
{
  int v34; // edi
  int v35; // eax
  int v36; // edi
  float v38; // [esp+30h] [ebp+30h]

  v34 = *a2; /*0x69b2a7*/
  v35 = (*(int (__thiscall **)(int *, int, int))(*a2 + 0x30))(a2, a1, a33); /*0x69b2b0*/
  v36 = (*(int (__thiscall **)(int *, int))(v34 + 0x40))(a2, v35); /*0x69b2c2*/
  v38 = *(float *)(*(_DWORD *)(*(_DWORD *)(v36 + 0xC) + 0x1C) + 0x5C); /*0x69b2cd*/
  if ( (_BYTE)a34 ) /*0x69b2d1*/
    *(_DWORD *)(v36 + 0x14) |= 0x14u; /*0x69b2d3*/
  return MagicCaster_ApplyActiveMagicItem_::EffectLoop_CheckIngredient(
           v36,
           a1,
           (int)a2,
           a3,
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
           v38,
           a16,
           a17,
           a18,
           a19,
           SHIDWORD(a19),
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
           a34);
}
