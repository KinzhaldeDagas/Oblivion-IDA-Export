void __userpurge EffectItem_Initialize_::CheckOnTouch(char eax0@<al>, int a1@<esi>, double a2@<st0>, int a3)
{
  if ( (eax0 & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 0x10) = 1;
    EffectItem_Initialize_::Done(a1, a2, a3);
  }
  else
  {
    EffectItem_Initialize_::CheckOnTarget(eax0, a1, a3);
  }
}
