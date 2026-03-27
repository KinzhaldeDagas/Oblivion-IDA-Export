void __thiscall NiDX9AdditionalDepthStencilBufferData::~NiDX9AdditionalDepthStencilBufferData(
        NiDX9AdditionalDepthStencilBufferData *this)
{
  int v3; // eax
  NiDX9AdditionalDepthStencilBufferData *v4; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)this = &NiDX9AdditionalDepthStencilBufferData::`vftable';
  EnterCriticalSection(&stru_B42680);
  dword_B426F8 = GetCurrentThreadId();
  ++dword_B426FC;
  v4 = this;
  sub_776690(&off_B294F0, (int *)&v4);
  if ( dword_B426FC-- == 1 )
    dword_B426F8 = 0;
  LeaveCriticalSection(&stru_B42680);
  v3 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &NiDX92DBufferData::`vftable';
  if ( v3 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
    *((_DWORD *)this + 3) = 0;
  }
  FormHeapFree(*((_DWORD *)this + 4));
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
