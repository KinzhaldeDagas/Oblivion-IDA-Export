void __usercall EffectItemList_HasTouchEffect_::EffectLoop_Next(_DWORD *this@<ecx>, char a2@<al>)
{
  int v2; // ecx
  _DWORD *v3; // ecx

  v2 = *(this + 2); /*0x415066*/
  if ( v2 && (v3 = (_DWORD *)(v2 - 4)) != 0 ) /*0x415070*/
    EffectItemList_HasTouchEffect_::EffectLoop(v3, a2); /*0x415070*/
  else
    EffectItemList_HasTouchEffect_::Done(); /*0x415071*/
}
