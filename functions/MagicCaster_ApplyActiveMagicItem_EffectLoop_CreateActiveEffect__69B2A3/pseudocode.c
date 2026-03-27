int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_CreateActiveEffect@<eax>(
        int a1@<ebp>,
        int *a2@<esi>,
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
        float a14,
        int a15,
        int a16,
        int a17,
        __int64 a18,
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
        char a33)
{
  int v34; // edi
  int v35; // eax
  int v36; // edi
  float v38; // [esp+30h] [ebp+30h]

  v34 = *a2;
  v35 = (*(int (__thiscall **)(int *, int, int))(*a2 + 0x30))(a2, a1, a32);
  v36 = (*(int (__thiscall **)(int *, int))(v34 + 0x40))(a2, v35);
  v38 = *(float *)(*(_DWORD *)(*(_DWORD *)(v36 + 0xC) + 0x1C) + 0x5C);
  if ( a33 )
    *(_DWORD *)(v36 + 0x14) |= 0x14u;
  return MagicCaster_ApplyActiveMagicItem_::EffectLoop_CheckIngredient(
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
           LODWORD(v38),
           a15,
           a16,
           a17,
           a18);
}
