int __usercall MagicItem_GetFXEffect_::FindStrongestEffect@<eax>(int a1@<edi>, int a2, int a3, int a4, int a5)
{
  if ( a1 )
    return MagicItem_GetFXEffect_::EffectLoop(a1, 0xFFFFFFFF, a5, a2, a3, a4, a5);
  else
    return MagicItem_GetFXEffect_::Return_0(a2);
}
