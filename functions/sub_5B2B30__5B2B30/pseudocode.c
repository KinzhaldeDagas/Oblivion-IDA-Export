void __thiscall sub_5B2B30(void **this)
{
  void **v1; // edi
  int *i; // esi

  v1 = this + 0x10;
  sub_5B1D70((unsigned int *)this + 0x10);
  for ( i = (int *)TESDataHandler_g_PlayerRef->super.super.magicTarget.vtbl->GetEffectList(&TESDataHandler_g_PlayerRef->super.super.magicTarget);
        i;
        i = (int *)i[1] )
  {
    sub_5B22E0(v1, *i);
  }
}
