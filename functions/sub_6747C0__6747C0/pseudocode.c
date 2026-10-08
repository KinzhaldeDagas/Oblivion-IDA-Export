// ShadowPass-only candidate-list limiter. Operates on the BSSimpleList at ProcessLists +0x60, repeatedly removes the last non-null actor until the count is <= g_uMaxShadowActorCandidates, and returns the list head used for shadow admission.
int *__thiscall ProcessLists__TrimShadowCandidateListToLimit(int *this)
{
  int *v1; // esi
  int *result; // eax
  unsigned int v3; // ecx

  v1 = this + 0x18; /*0x6747c1*/
LABEL_2:
  while ( 1 ) /*0x6747c4*/
  {
    result = v1; /*0x6747c4*/
    v3 = 0; /*0x6747c6*/
    if ( !v1 ) /*0x6747ca*/
      return result; /*0x674810*/
    do /*0x6747dd*/
    {
      if ( *result ) /*0x6747d0*/
        ++v3; /*0x6747d5*/
      result = (int *)result[1]; /*0x6747d8*/
    }
    while ( result ); /*0x6747dd*/
    result = v1; /*0x6747e5*/
    if ( v3 <= g_uMaxShadowActorCandidates ) /*0x6747e7*/
      return result; /*0x674810*/
    while ( *result ) /*0x6747f3*/
    {
      if ( !result[1] ) /*0x6747fa*/
      {
        BSSimpleList_Remove(v1, *result); /*0x674809*/
        goto LABEL_2; /*0x67480e*/
      }
      result = (int *)result[1]; /*0x6747fc*/
    }
  }
}
