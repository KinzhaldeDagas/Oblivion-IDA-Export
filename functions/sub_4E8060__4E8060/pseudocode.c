// Verified preferred-node setter: sets/clears the least-significant bit of the Z float at graph-node+0x1C while preserving the remaining position bits. PathGrid candidate search temporarily clears/restores it around actor-aware cost evaluation.
void __thiscall PathGraphNode_SetPreferred(void *this, bool preferred)
{
  double v2; // st7
  int v3; // [esp+0h] [ebp-8h]

  v3 = (int)*((float *)this + 7); /*0x4e806e*/
  if ( preferred ) /*0x4e8076*/
    v2 = (double)(v3 | 1); /*0x4e8082*/
  else
    v2 = (double)(int)(v3 & 0xFFFFFFFE); /*0x4e8099*/
  *((float *)this + 7) = v2; /*0x4e8086*/
}
