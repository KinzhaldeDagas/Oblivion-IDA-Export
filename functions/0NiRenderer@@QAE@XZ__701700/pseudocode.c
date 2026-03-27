NiRenderer *__thiscall NiRenderer::NiRenderer(NiRenderer *this)
{
  void (__stdcall *v2)(LPCRITICAL_SECTION); // edi

  NiObject_constr((NiObject *)this);
  v2 = InitializeCriticalSection;
  this->__vftable = (NiRendererVtbl *)&NiRenderer::`vftable';
  this->members.accumulator = 0;
  this->members.RendererLockCriticalSection.curThread = 0;
  this->members.RendererLockCriticalSection.entryCount = 0;
  v2((LPCRITICAL_SECTION)&this->members.RendererLockCriticalSection);
  this->members.PrecacheCriticalSection.curThread = 0;
  this->members.PrecacheCriticalSection.entryCount = 0;
  v2((LPCRITICAL_SECTION)&this->members.PrecacheCriticalSection);
  this->members.SourceDataCriticalSection.curThread = 0;
  this->members.SourceDataCriticalSection.entryCount = 0;
  v2((LPCRITICAL_SECTION)&this->members.SourceDataCriticalSection);
  this->members.SceneState1 = 0;
  this->members.SceneState2 = 0;
  this->members.unk208 = 0;
  this->members.IsReady = 0;
  this->members.unk20D = 0;
  g_Renderer = (NiDX9Renderer *)this;
  return this;
}
