// positive sp value has been detected, the output may be wrong!
int __usercall ActiveEffect_Base_CreateDynamic_::Constr_CurePD@<eax>(
        ActiveEffect *a1@<eax>,
        int a2,
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
        int a27)
{
  ActiveEffect *v27; // eax
  int v29; // [esp-4h] [ebp-8h]
  int v30; // [esp+0h] [ebp-4h]

  v27 = CureEffect_constr_MagicType(a1, a24, a25, v29, v30);
  return ActiveEffect_Base_CreateDynamic_::Wrapup(
           (int)v27,
           a2,
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
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27);
}
