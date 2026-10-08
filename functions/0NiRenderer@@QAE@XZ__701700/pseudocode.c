NiRenderer *__thiscall NiRenderer::NiRenderer(NiRenderer *this)
{
  void (__stdcall *v2)(LPCRITICAL_SECTION); // edi

  NiObject_constr((NiObject *)this); /*0x701705*/
  v2 = InitializeCriticalSection; /*0x70170a*/
  this->__vftable = (NiRendererVtbl *)&NiRenderer::`vftable'; /*0x701716*/
  this->members.accumulator = 0; /*0x70171e*/
  this->members.RendererLockCriticalSection.curThread = 0; /*0x701722*/
  this->members.RendererLockCriticalSection.entryCount = 0; /*0x701725*/
  v2((LPCRITICAL_SECTION)&this->members.RendererLockCriticalSection); /*0x701728*/
  this->members.PrecacheCriticalSection.curThread = 0; /*0x701731*/
  this->members.PrecacheCriticalSection.entryCount = 0; /*0x701734*/
  v2((LPCRITICAL_SECTION)&this->members.PrecacheCriticalSection); /*0x701737*/
  this->members.SourceDataCriticalSection.curThread = 0; /*0x701740*/
  this->members.SourceDataCriticalSection.entryCount = 0; /*0x701743*/
  v2((LPCRITICAL_SECTION)&this->members.SourceDataCriticalSection); /*0x701746*/
  this->members.SceneState1 = 0; /*0x701748*/
  this->members.SceneState2 = 0; /*0x70174e*/
  this->members.unk208 = 0; /*0x701754*/
  this->members.IsReady = 0; /*0x70175a*/
  this->members.unk20D = 0; /*0x701760*/
  renderer = (NiDX9Renderer *)this; /*0x701767*/
  return this; /*0x701766*/
}
