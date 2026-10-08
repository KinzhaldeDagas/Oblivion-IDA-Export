// Morph transition wrapper used by ActorAnimData_PlaySequence only after Oblivion confirms matching nonzero TESAnimGroup morph keys and equal controlled-block counts. Delegates to the sequence morph implementation at 0x6C9E00.
char __stdcall NiControllerSequence_Morph(
        NiControllerSequence *a1,
        NiD3DPass *a2,
        float a3,
        char a4,
        float a5,
        float a6)
{
  return sub_6C9E00(a1, a2, a3, a4, a5, a6); /*0x6c408d*/
}
