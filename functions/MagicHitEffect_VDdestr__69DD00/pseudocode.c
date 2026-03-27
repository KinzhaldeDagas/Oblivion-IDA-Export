_DWORD *__thiscall MagicHitEffect_VDdestr(_DWORD *this, char a2)
{
  int v3; // eax
  int *v4; // eax

  v3 = *(this + 6);
  *this = &MagicHitEffect::`vftable';
  *(this + 7) = 0;
  if ( v3 )
  {
    v4 = *(int **)(v3 + 0x34);
    if ( v4 )
      BSSimpleList_Remove(v4, (int)this);
  }
  *(this + 6) = 0;
  BSTempEffect_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
