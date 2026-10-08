// Creates an empty NiRenderTargetGroup with a requested color-target count. Rejects null renderer, counts above renderer capability, and counts above Oblivion's hard MRT limit of four.
NiRenderTargetGroup *__cdecl NiRenderTargetGroup::Create(unsigned int targetCount, NiRenderer *renderer)
{
  NiRenderTargetGroup *result; // eax
  NiRenderTargetGroup *v3; // eax

  if ( !renderer || renderer->__vftable->Unk_27(renderer) < targetCount || targetCount > 4 ) /*0x9a2181*/
    return 0; /*0x9a2159*/
  v3 = (NiRenderTargetGroup *)FormHeapAlloc(0x24u); /*0x9a2185*/
  if ( v3 ) /*0x9a219b*/
  {
    result = NiRenderTargetGroup::NiRenderTargetGroup(v3); /*0x9a219f*/
    result->members.numRenderTargets = targetCount; /*0x9a21a4*/
  }
  else
  {
    MEMORY[0x18] = targetCount; /*0x9a21ba*/
    return 0; /*0x9a21b8*/
  }
  return result; /*0x9a215b*/
}
