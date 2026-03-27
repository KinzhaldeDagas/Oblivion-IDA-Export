char __thiscall sub_4A7710(float **this, int a2, float a3)
{
  float *v4; // ecx
  unsigned int v5; // eax

  if ( !a2 )
    return 0;
  v4 = *this;
  if ( *this )
  {
    if ( a3 * a3 > sub_4A6A60(v4, (float *)a2) )
      return 0;
  }
  BSSimpleList_PushFront(this, a2);
  if ( sub_4A7270(this, 0) )
  {
    v5 = (unsigned int)*(this + 1);
    if ( v5 )
    {
      *(this + 1) = *(float **)(v5 + 4);
      *this = *(float **)v5;
      FormHeapFree(v5);
      return 0;
    }
    *this = 0;
    return 0;
  }
  *(this + 9) = (float *)((char *)*(this + 9) + 1);
  if ( *((float *)this + 4) > (double)*(float *)a2 )
    *(this + 4) = *(float **)a2;
  if ( *((float *)this + 5) > (double)*(float *)(a2 + 4) )
    *(this + 5) = *(float **)(a2 + 4);
  if ( *((float *)this + 6) < (double)*(float *)a2 )
    *(this + 6) = *(float **)a2;
  if ( *((float *)this + 7) < (double)*(float *)(a2 + 4) )
    *(this + 7) = *(float **)(a2 + 4);
  return 1;
}
