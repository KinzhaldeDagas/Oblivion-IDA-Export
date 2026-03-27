int __usercall EffectItemList_HasTouchEffect_::EffectLoop_Next@<eax>(_DWORD *this@<ecx>, char a2@<al>)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)*(this + 2);
  if ( v2 && (v2 += 0xFFFFFFFF) != 0 )
    return EffectItemList_HasTouchEffect_::EffectLoop(v2, a2);
  else
    return EffectItemList_HasTouchEffect_::Done(v2);
}
