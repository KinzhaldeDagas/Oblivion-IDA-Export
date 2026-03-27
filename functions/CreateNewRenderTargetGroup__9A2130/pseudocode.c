NiRenderTargetGroup *__cdecl CreateNewRenderTargetGroup(UInt32 maxTargets, NiRenderer *a2)
{
  NiRenderTargetGroup *result; // eax
  NiRenderTargetGroup *v3; // eax

  if ( !a2 || a2->__vftable->Unk_27(a2) < maxTargets || maxTargets > 4 )
    return 0;
  v3 = (NiRenderTargetGroup *)FormHeapAlloc(0x24u);
  if ( v3 )
  {
    result = NiRenderTargetGroup::NiRenderTargetGroup(v3);
    result->members.numRenderTargets = maxTargets;
  }
  else
  {
    MEMORY[0x18] = maxTargets;
    return 0;
  }
  return result;
}
