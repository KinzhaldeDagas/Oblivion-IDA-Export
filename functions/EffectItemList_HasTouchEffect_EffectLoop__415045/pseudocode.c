void __usercall EffectItemList_HasTouchEffect_::EffectLoop(_DWORD *this@<ecx>, char a2@<al>)
{
  int v2; // edx

  if ( a2 ) /*0x415047*/
  {
    EffectItemList_HasTouchEffect_::Done(); /*0x415047*/
  }
  else
  {
    v2 = *(this + 1); /*0x415049*/
    if ( v2 && *(_DWORD *)(v2 + 0x10) == 1 && (*(_DWORD *)(*(_DWORD *)(v2 + 0x1C) + 0x58) & 0x400000) == 0 ) /*0x415062*/
      EffectItemList_HasTouchEffect_::EffectLoop_Next(this, 1); /*0x415065*/
    else
      EffectItemList_HasTouchEffect_::EffectLoop_Next(this, 0); /*0x415062*/
  }
}
