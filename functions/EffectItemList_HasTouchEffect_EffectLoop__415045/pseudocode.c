int __usercall EffectItemList_HasTouchEffect_::EffectLoop@<eax>(_DWORD *this@<ecx>, char a2@<al>)
{
  if ( a2 )
    return EffectItemList_HasTouchEffect_::Done(this);
  else
    return EffectItemList_HasTouchEffect_::EffectLoop_Next(this);
}
