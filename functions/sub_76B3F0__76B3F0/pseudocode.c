char __thiscall sub_76B3F0(NiDX9Renderer *this)
{
  HRESULT v2; // eax
  char result; // al
  unsigned int end; // ebx
  int v5; // edi
  unsigned __int8 (__cdecl *v6)(_DWORD); // eax
  void *v7; // ecx

  v2 = this->member.device->lpVtbl->TestCooperativeLevel(this->member.device);
  if ( v2 == (HRESULT)0x88760869 )
  {
    result = sub_76A970(this);
    this->member.lostDevice = result == 0;
  }
  else if ( v2 == (HRESULT)0x88760868 )
  {
    if ( !this->member.lostDevice )
    {
      end = this->member.lostDeviceCallbacks.end;
      v5 = 0;
      this->member.lostDevice = 1;
      if ( end )
      {
        while ( 1 )
        {
          v6 = *((unsigned __int8 (__cdecl **)(_DWORD))this->member.lostDeviceCallbacks.data + v5);
          if ( v6 )
          {
            if ( !v6(*((_DWORD *)this->member.lostDeviceCallbacksRefcons.data + v5)) )
              break;
          }
          if ( ++v5 >= end )
            return 0;
        }
        TESTexture::ClearComponentReferences(v7);
      }
    }
    return 0;
  }
  else
  {
    return 1;
  }
  return result;
}
