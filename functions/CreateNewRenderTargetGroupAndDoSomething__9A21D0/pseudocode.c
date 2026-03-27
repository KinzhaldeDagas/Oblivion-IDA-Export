NiRenderTargetGroup *__cdecl CreateNewRenderTargetGroupAndDoSomething(
        Ni2DBuffer *a1,
        NiRenderer *a2,
        NiDepthStencilBuffer *a3)
{
  NiRenderTargetGroup *v4; // eax
  NiRenderTargetGroup *v5; // esi
  bool (__thiscall *AttachBuffer)(NiRenderTargetGroup *, Ni2DBuffer *, UInt32); // edx

  if ( !a2 || !a1 || !((int (*)(void))a2->__vftable->Unk_27)() )
    return 0;
  v4 = (NiRenderTargetGroup *)FormHeapAlloc(0x24u);
  if ( v4 )
    v5 = NiRenderTargetGroup::NiRenderTargetGroup(v4);
  else
    v5 = 0;
  AttachBuffer = v5->vtbl->AttachBuffer;
  v5->members.numRenderTargets = 1;
  AttachBuffer(v5, a1, 0);
  if ( a3 )
    v5->vtbl->AttachDepthStencilBuffer(v5, a3);
  return v5;
}
