int __userpurge Actor_MagicTarget_CalcResFactor_::CheckIsWearable@<eax>(
        void *ebx0@<ebx>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  if ( (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable(a7) )
    return Actor_MagicTarget_CalcResFactor_::Return_1f(a2, a3, a4);
  else
    return Actor_MagicTarget_CalcResFactor_::CheckIsEdibleIngredient(ebx0, a2, a3, a4);
}
