double __userpurge Actor_MagicTarget_CalcResFactor_::CheckIsWearable@<st0>(
        void *ebx0@<ebx>,
        int a2@<edi>,
        double result@<st0>,
        int a4,
        int a5,
        int a6,
        float a7,
        void *a8,
        _DWORD *a9,
        int a10)
{
  if ( (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable(a9) ) /*0x5e525f*/
    return Actor_MagicTarget_CalcResFactor_::Return_1f(a4, a5, a6); /*0x5e5266*/
  Actor_MagicTarget_CalcResFactor_::CheckIsEdibleIngredient(ebx0, (int)a9, a2, result, a4, a5, a6, a7, a8, (int)a9, a10); /*0x5e5267*/
  return result;
}
