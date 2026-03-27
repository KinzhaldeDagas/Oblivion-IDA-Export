int **__thiscall sub_436830(int **this, char a2)
{
  int *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1);
  *this = (int *)&NiTArray<NiPointer<QueuedFile>>::`vftable';
  if ( v3 )
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFF);
    _LN21(v3, 4u, v3[0xFFFFFFFF], sub_4BDDC0);
    FormHeapFree(v4);
  }
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
