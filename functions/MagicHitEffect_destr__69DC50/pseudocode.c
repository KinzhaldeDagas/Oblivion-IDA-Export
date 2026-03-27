LONG __thiscall MagicHitEffect_destr(_DWORD *this)
{
  int v2; // eax
  int *v3; // eax

  v2 = *(this + 6);
  *this = &MagicHitEffect::`vftable';
  *(this + 7) = 0;
  if ( v2 )
  {
    v3 = *(int **)(v2 + 0x34);
    if ( v3 )
      BSSimpleList_Remove(v3, (int)this);
  }
  *(this + 6) = 0;
  return BSTempEffect_destr(this);
}
