_DWORD *__thiscall NiRenderer_SetRenderState(NiDX9Renderer *this, int a2, _DWORD *a3, char a4)
{
  _DWORD *result; // eax

  if ( (_DWORD *)this->member.super.PrecacheCriticalSection.pad018[2 * a2 + 2] != a3 )
    result = (_DWORD *)(*(int (__stdcall **)(_DWORD, int, _DWORD *))(**((_DWORD **)this + 0x3FE) + 0xE4))(
                         *((_DWORD *)this + 0x3FE),
                         a2,
                         a3);
  if ( a4 )
  {
    result = (_DWORD *)this->member.super.PrecacheCriticalSection.pad018[2 * a2 + 2];
    this->member.super.PrecacheCriticalSection.pad018[2 * a2 + 3] = (UInt32)result;
  }
  this->member.super.PrecacheCriticalSection.pad018[2 * a2 + 2] = (UInt32)a3;
  return result;
}
