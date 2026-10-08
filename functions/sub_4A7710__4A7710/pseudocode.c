char __thiscall sub_4A7710(float **this, int a2, float a3)
{
  float *v4; // ecx
  unsigned int v5; // eax

  if ( !a2 ) /*0x4a771d*/
    return 0; /*0x4a771d*/
  v4 = *this; /*0x4a771f*/
  if ( *this ) /*0x4a771f*/
  {
    if ( a3 * a3 > sub_4A6A60(v4, (float *)a2) ) /*0x4a7740*/
      return 0; /*0x4a7788*/
  }
  BSSimpleList_PushFront(this, a2); /*0x4a7745*/
  if ( sub_4A7270(this, 0) ) /*0x4a774e*/
  {
    v5 = (unsigned int)*(this + 1); /*0x4a7757*/
    if ( v5 ) /*0x4a775c*/
    {
      *(this + 1) = *(float **)(v5 + 4); /*0x4a7761*/
      *this = *(float **)v5; /*0x4a7767*/
      FormHeapFree(v5); /*0x4a7769*/
      return 0; /*0x4a7778*/
    }
    *this = 0; /*0x4a777b*/
    return 0; /*0x4a777b*/
  }
  *(this + 9) = (float *)((char *)*(this + 9) + 1); /*0x4a778b*/
  if ( *((float *)this + 4) > (double)*(float *)a2 ) /*0x4a779b*/
    *(this + 4) = *(float **)a2; /*0x4a779f*/
  if ( *((float *)this + 5) > (double)*(float *)(a2 + 4) ) /*0x4a77af*/
    *(this + 5) = *(float **)(a2 + 4); /*0x4a77b4*/
  if ( *((float *)this + 6) < (double)*(float *)a2 ) /*0x4a77c3*/
    *(this + 6) = *(float **)a2; /*0x4a77c7*/
  if ( *((float *)this + 7) < (double)*(float *)(a2 + 4) ) /*0x4a77d7*/
    *(this + 7) = *(float **)(a2 + 4); /*0x4a77dc*/
  return 1; /*0x4a7771*/
}
