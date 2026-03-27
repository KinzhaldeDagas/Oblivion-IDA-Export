NiDX9AdditionalDepthStencilBufferData *__thiscall NiDX9AdditionalDepthStencilBufferData::NiDX9AdditionalDepthStencilBufferData(
        NiDX9AdditionalDepthStencilBufferData *this)
{
  DWORD CurrentThreadId; // eax
  _DWORD *v3; // eax
  bool v4; // zf

  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &NiDX9AdditionalDepthStencilBufferData::`vftable';
  *((_DWORD *)this + 5) = 0;
  EnterCriticalSection(&stru_B42680);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B426FC;
  dword_B426F8 = CurrentThreadId;
  v3 = (_DWORD *)((int (__thiscall *)(void ***))off_B294F0[1])(&off_B294F0);
  v3[2] = this;
  v3[1] = 0;
  *v3 = dword_B294F4;
  if ( dword_B294F4 )
    *(_DWORD *)(dword_B294F4 + 4) = v3;
  else
    dword_B294F8 = (int)v3;
  ++dword_B294FC;
  v4 = dword_B426FC-- == 1;
  dword_B294F4 = (int)v3;
  if ( v4 )
    dword_B426F8 = 0;
  LeaveCriticalSection(&stru_B42680);
  return this;
}
