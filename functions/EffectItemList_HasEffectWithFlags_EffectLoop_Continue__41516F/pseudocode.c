void __thiscall EffectItemList_HasEffectWithFlags_::EffectLoop_Continue(_DWORD *this, int a2)
{
  int v2; // ecx

  v2 = *(this + 2); /*0x41516f*/
  if ( v2 ) /*0x415174*/
  {
    if ( v2 != 4 ) /*0x415179*/
      JUMPOUT(0x415150); /*0x415150*/
  }
  EffectItemList_HasEffectWithFlags_::Done(a2); /*0x41517b*/
}
