int __thiscall EffectItemList_HasEffectWithFlags_::EffectLoop_Continue(_DWORD *this, int a2)
{
  int v2; // ecx

  v2 = *(this + 2);
  if ( v2 )
  {
    if ( v2 != 4 )
      JUMPOUT(0x415150);
  }
  return EffectItemList_HasEffectWithFlags_::Done(a2);
}
