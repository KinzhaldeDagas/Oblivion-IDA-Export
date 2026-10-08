struct MagicHitEffectVtbl **__thiscall MagicHitEffect_VDdestr(struct MagicHitEffectVtbl **this, char a2)
{
  int v3; // eax
  int *v4; // eax

  v3 = (int)*(this + 6); /*0x69dd03*/
  *this = &MagicHitEffect::`vftable'; /*0x69dd08*/
  *(this + 7) = 0; /*0x69dd0e*/
  if ( v3 ) /*0x69dd15*/
  {
    v4 = *(int **)(v3 + 0x34); /*0x69dd17*/
    if ( v4 ) /*0x69dd1c*/
      BSSimpleList_Remove(v4, (int)this); /*0x69dd21*/
  }
  *(this + 6) = 0; /*0x69dd28*/
  BSTempEffect_Destructor((BSTempEffect *)this); /*0x69dd2f*/
  if ( (a2 & 1) != 0 ) /*0x69dd39*/
    FormHeapFree((unsigned int)this); /*0x69dd3c*/
  return this; /*0x69dd46*/
}
