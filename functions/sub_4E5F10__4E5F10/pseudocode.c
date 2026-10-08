// Verified preload reset clears linkedPointsDisabled bit 0x20 on every PathGrid point before applying saved indices.
int __thiscall TESPathGrid_ClearModifiedPointFlags(_DWORD *this)
{
  int result; // eax
  unsigned int i; // esi
  void *v4; // ecx

  result = *(this + 9); /*0x4e5f13*/
  if ( result ) /*0x4e5f18*/
  {
    for ( i = 0; i < *(unsigned __int16 *)(result + 0xA); ++i ) /*0x4e5f1d*/
    {
      v4 = *(void **)(*(_DWORD *)(result + 4) + 4 * i); /*0x4e5f26*/
      if ( v4 ) /*0x4e5f2b*/
        PathGraphNode_SetLinkedPointsDisabled(v4, 0); /*0x4e5f2f*/
      result = *(this + 9); /*0x4e5f34*/
    }
  }
  return result; /*0x4e5f43*/
}
