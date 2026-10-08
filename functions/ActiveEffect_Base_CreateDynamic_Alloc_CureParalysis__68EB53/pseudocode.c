// Verified allocation for CUPA: creates the shared CureEffect class and passes internal MgefCode PARA to CureEffect_constr_MgefCode; exact internal subtype naming beyond the direct constructor call remains Unknown.
void __usercall ActiveEffect_Base_CreateDynamic_::Alloc_CureParalysis(
        EffectItem *a1@<esi>,
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
        MagicCaster *a24,
        MagicItem *a25,
        int a26,
        int a27)
{
  ActiveEffect *v27; // eax
  ActiveEffect *v28; // eax
  int v29; // [esp+64h] [ebp+64h]

  v27 = (ActiveEffect *)FormHeapAlloc(0x40u); /*0x68eb55*/
  v29 = (int)v27; /*0x68eb5d*/
  if ( v27 ) /*0x68eb6b*/
  {
    v28 = CureEffect_constr_MgefCode(v27, a24, a25, a1, 0x41524150); /*0x68eb83*/
    ActiveEffect_Base_CreateDynamic_::Wrapup( /*0x68eb88*/
      (int)v28,
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
      4,
      a23,
      (int)a24,
      (int)a25,
      v29,
      a27);
  }
  else
  {
    ActiveEffect_Base_CreateDynamic_::Return_0( /*0x68eb6b*/
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
      4,
      a23,
      (int)a24,
      (int)a25,
      0,
      a27);
  }
}
