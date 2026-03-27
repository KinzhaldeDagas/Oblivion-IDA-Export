int **__thiscall sub_6D8070(int **this, char a2)
{
  int *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1);
  *this = (int *)&NiTArray<NiPointer<NiTransformController>>::`vftable';
  if ( v3 )
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFF);
    _LN21(v3, 4u, v3[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v4);
  }
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
