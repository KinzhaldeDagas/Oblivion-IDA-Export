int __usercall MagicTarget_AddEffect_::CheckIsWearableEnch@<eax>(
        _DWORD *a1@<ebp>,
        int a2@<edi>,
        int esi0@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        void *a11,
        float a12)
{
  if ( (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable(a1) )
    return MagicTarget_AddEffect_::CheckIsSummonObj((int)a1, a2, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  else
    return MagicTarget_AddEffect_::CheckEnchantment((int)a1, a2, esi0, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
