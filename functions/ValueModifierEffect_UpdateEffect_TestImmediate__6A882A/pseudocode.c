int __userpurge ValueModifierEffect_UpdateEffect_::TestImmediate@<eax>(int a1@<esi>, int a2)
{
  if ( (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable((_DWORD *)a1)
    || *(float *)(a1 + 0x1C) > 0.0
    || *(_DWORD *)(a1 + 0x28) == 4 )
  {
    return ValueModifierEffect_UpdateEffect_::ApplyEffect(a2);
  }
  else
  {
    return ValueModifierEffect_UpdateEffect_::Done_(a2);
  }
}
