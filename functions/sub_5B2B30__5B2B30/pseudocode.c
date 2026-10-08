void __thiscall sub_5B2B30(void **this)
{
  void **v1; // edi
  int *i; // esi

  v1 = this + 0x10; /*0x5b2b32*/
  sub_5B1D70((unsigned int *)this + 0x10); /*0x5b2b37*/
  for ( i = (int *)reference->super.super.magicTarget.vtbl->GetActiveEffectList(&reference->super.super.magicTarget); /*0x5b2b51*/
        i;
        i = (int *)i[1] )
  {
    sub_5B22E0(v1, *i); /*0x5b2b58*/
  }
}
