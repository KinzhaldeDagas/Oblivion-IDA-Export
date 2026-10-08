// Verified version 0x2A+ ActiveEffect load reads the hit-effect count and reconstructs each BSTempEffect into the list at +0x34. Type codes 5 and 6 dispatch MagicModelHitEffect and MagicShaderHitEffect loaders; each allocated node is eight bytes.
int __userpurge ActiveEffect_Base_LoadEffect_::LoadHitEffectList@<eax>(
        int a1@<ebp>,
        TESSaveLoadGame_SerializationView *a2@<ecx>,
        float *a3@<ebx>,
        int a4,
        int a5,
        int a6,
        int a7,
        int Dst,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18)
{
  SaveLoad_LoadData(a2, (char *)&Dst + 2, 1u); /*0x68e4a5*/
  a9 = (int)a3; /*0x68e4ae*/
  if ( BYTE2(Dst) <= (unsigned __int8)a3 ) /*0x68e4b2*/
    return ActiveEffect_Base_LoadEffect_::LoadUnk14_(a1, a4); /*0x68e4b2*/
  else
    return ActiveEffect_Base_LoadEffect_::LoopBody( /*0x68e4b3*/
             a3,
             a1,
             a4,
             a5,
             a6,
             a7,
             Dst,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18);
}
