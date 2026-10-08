void __userpurge EffectItem_Initialize_::CheckOnSelf(int a1@<ebx>, int a2@<esi>, double a3@<st0>, int a4)
{
  int v4; // eax

  v4 = *(_DWORD *)(*(_DWORD *)(a2 + 0x1C) + 0x58); /*0x414873*/
  if ( (v4 & 0x10) != 0 ) /*0x41487e*/
  {
    *(_DWORD *)(a2 + 0x10) = a1; /*0x414880*/
    EffectItem_Initialize_::Done(a2, a3, a4); /*0x414881*/
  }
  else
  {
    EffectItem_Initialize_::CheckOnTouch(v4, a2, a3, a4); /*0x41487e*/
  }
}
