void __thiscall NiRenderer::~NiRenderer(NiRenderer *this)
{
  void (__stdcall *v2)(LPCRITICAL_SECTION); // edi
  NiAccumulator *accumulator; // edi

  this->__vftable = (NiRendererVtbl *)&NiRenderer::`vftable';
  v2 = DeleteCriticalSection;
  g_Renderer = 0;
  v2((LPCRITICAL_SECTION)&this->members.SourceDataCriticalSection);
  v2((LPCRITICAL_SECTION)&this->members.PrecacheCriticalSection);
  v2((LPCRITICAL_SECTION)&this->members.RendererLockCriticalSection);
  accumulator = this->members.accumulator;
  if ( accumulator )
  {
    if ( !InterlockedDecrement((volatile LONG *)accumulator + 1) )
      (**(void (__thiscall ***)(NiAccumulator *, int))accumulator)(accumulator, 1);
  }
  NiRefObject_destr(this);
}
