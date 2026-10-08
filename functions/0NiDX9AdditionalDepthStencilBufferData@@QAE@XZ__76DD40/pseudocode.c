NiDX9AdditionalDepthStencilBufferData *__thiscall NiDX9AdditionalDepthStencilBufferData::NiDX9AdditionalDepthStencilBufferData(
        NiDX9AdditionalDepthStencilBufferData *this)
{
  DWORD CurrentThreadId; // eax
  _DWORD *v3; // eax
  bool v4; // zf

  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x76dd4b*/
  *((_DWORD *)this + 1) = 0; /*0x76dd51*/
  InterlockedIncrement((volatile LONG *)&MEMORY[0xB3F9B0][0xED]); /*0x76dd54*/
  *((_DWORD *)this + 2) = 0; /*0x76dd5f*/
  *((_DWORD *)this + 3) = 0; /*0x76dd62*/
  *((_DWORD *)this + 4) = 0; /*0x76dd65*/
  *(_DWORD *)this = &NiDX9AdditionalDepthStencilBufferData::`vftable'; /*0x76dd68*/
  *((_DWORD *)this + 5) = 0; /*0x76dd6e*/
  EnterCriticalSection(&unk_B42680); /*0x76dd71*/
  CurrentThreadId = GetCurrentThreadId(); /*0x76dd77*/
  ++unk_B426FC; /*0x76dd7d*/
  unk_B426F8 = CurrentThreadId; /*0x76dd84*/
  v3 = (_DWORD *)((int (__thiscall *)(void ***))list[1])(&list); /*0x76dd96*/
  v3[2] = this; /*0x76dd98*/
  v3[1] = 0; /*0x76dd9b*/
  *v3 = dword_B294F4; /*0x76dda4*/
  if ( dword_B294F4 ) /*0x76dda6*/
    *(_DWORD *)(dword_B294F4 + 4) = v3; /*0x76ddb0*/
  else
    dword_B294F8 = (int)v3; /*0x76ddb5*/
  ++dword_B294FC; /*0x76ddba*/
  v4 = unk_B426FC-- == 1; /*0x76ddc1*/
  dword_B294F4 = (int)v3; /*0x76ddc8*/
  if ( v4 ) /*0x76ddcd*/
    unk_B426F8 = 0; /*0x76ddcf*/
  LeaveCriticalSection(&unk_B42680); /*0x76ddda*/
  return this; /*0x76dde0*/
}
