int __usercall ActiveEffect_Base_LoadEffect_::MagicModelHitEffect@<eax>(
        float *a1@<ebx>,
        int ebp0@<ebp>,
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
        int a14,
        int a15,
        int a16,
        int a17)
{
  float *v17; // eax
  float *v18; // eax
  int v20; // [esp+28h] [ebp+28h]

  v17 = (float *)FormHeapAlloc(0x38u);
  v20 = (int)v17;
  if ( v17 == a1 )
    return ActiveEffect_Base_LoadEffect_::FailedAlloc(a3, a4, a5, a6, a7, a8, a9, a10, a11, v17, a13, a14, a1);
  v18 = MagicModelHitEffect_constr(v17);
  return ActiveEffect_Base_LoadEffect_::LoadHitEffect_(
           (int)v18,
           a1,
           ebp0,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           v20,
           a13,
           a14,
           (int)a1,
           a16,
           a17);
}
