// Oblivion-authoritative lost-device state machine. TestCooperativeLevel: DEVICENOTRESET invokes full recreation and updates lostDevice; DEVICELOST transitions once into lost state and invokes lost-device callbacks; all other results are renderable.
bool __thiscall NiDX9Renderer_LostDeviceRestore(NiDX9Renderer *this)
{
  HRESULT v2; // eax
  bool result; // al
  unsigned int end; // ebx
  int v5; // edi
  unsigned __int8 (__cdecl *v6)(_DWORD); // eax
  void *v7; // ecx

  v2 = this->member.device->lpVtbl->TestCooperativeLevel(this->member.device); /*0x76b3ff*/
  if ( v2 == (HRESULT)0x88760869 ) /*0x76b406*/
  {
    result = NiDX9Renderer_RecreateDevice(this); /*0x76b40a*/
    this->member.lostDevice = !result; /*0x76b414*/
  }
  else if ( v2 == (HRESULT)0x88760868 ) /*0x76b421*/
  {
    if ( !this->member.lostDevice ) /*0x76b423*/
    {
      end = this->member.lostDeviceCallbacks.end; /*0x76b42e*/
      v5 = 0; /*0x76b435*/
      this->member.lostDevice = 1; /*0x76b439*/
      if ( end ) /*0x76b440*/
      {
        while ( 1 ) /*0x76b448*/
        {
          v6 = *((unsigned __int8 (__cdecl **)(_DWORD))this->member.lostDeviceCallbacks.data + v5); /*0x76b448*/
          if ( v6 ) /*0x76b456*/
          {
            if ( !v6(*((_DWORD *)this->member.lostDeviceCallbacksRefcons.data + v5)) ) /*0x76b459*/
              break; /*0x76b459*/
          }
          if ( ++v5 >= end ) /*0x76b467*/
            return 0; /*0x76b46e*/
        }
        Shared_NoOpVirtual_60D0A0(v7); /*0x76b474*/
      }
    }
    return 0; /*0x76b47e*/
  }
  else
  {
    return 1; /*0x76b482*/
  }
  return result; /*0x76b41a*/
}
