LONG __thiscall MagicHitEffect_destr(struct MagicHitEffectVtbl **this)
{
  int v2; // eax
  int *v3; // eax

  v2 = (int)*(this + 6); /*0x69dc53*/
  *this = &MagicHitEffect::`vftable'; /*0x69dc58*/
  *(this + 7) = 0; /*0x69dc5e*/
  if ( v2 ) /*0x69dc65*/
  {
    v3 = *(int **)(v2 + 0x34); /*0x69dc67*/
    if ( v3 ) /*0x69dc6c*/
      BSSimpleList_Remove(v3, (int)this); /*0x69dc71*/
  }
  *(this + 6) = 0; /*0x69dc76*/
  return BSTempEffect_Destructor((BSTempEffect *)this); /*0x69dc7f*/
}
