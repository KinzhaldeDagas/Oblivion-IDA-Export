void __thiscall NiRenderer::~NiRenderer(NiRenderer *this)
{
  void (__stdcall *v2)(LPCRITICAL_SECTION); // edi
  NiAccumulator *accumulator; // edi

  this->__vftable = (NiRendererVtbl *)&NiRenderer::`vftable'; /*0x7017b9*/
  v2 = DeleteCriticalSection; /*0x7017bf*/
  renderer = 0; /*0x7017d4*/
  v2((LPCRITICAL_SECTION)&this->members.SourceDataCriticalSection); /*0x7017de*/
  v2((LPCRITICAL_SECTION)&this->members.PrecacheCriticalSection); /*0x7017e7*/
  v2((LPCRITICAL_SECTION)&this->members.RendererLockCriticalSection); /*0x7017f0*/
  accumulator = this->members.accumulator; /*0x7017f2*/
  if ( accumulator ) /*0x7017f7*/
  {
    if ( !InterlockedDecrement((volatile LONG *)accumulator + 1) ) /*0x7017fd*/
      (**(void (__thiscall ***)(NiAccumulator *, int))accumulator)(accumulator, 1); /*0x701813*/
  }
  NiRefObject_destr(this); /*0x70181f*/
}
