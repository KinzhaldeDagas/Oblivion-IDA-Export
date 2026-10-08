int __usercall MagicTarget_AddEffect_::CheckIsWearableEnch@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int esi0@<esi>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        void *a13,
        float a14)
{
  if ( (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable((_DWORD *)a1) ) /*0x6a2ae1*/
    return MagicTarget_AddEffect_::CheckIsSummonObj(a1, a2, a6, a7, a8, a9, a10, a11, a12, a13, a14); /*0x6a2ae9*/
  else
    return MagicTarget_AddEffect_::CheckEnchantment( /*0x6a2ae8*/
             a1,
             a2,
             esi0,
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
             SLODWORD(a14));
}
