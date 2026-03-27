unsigned int __thiscall NiDX9Renderer::AddLostDeviceCallbak(NiDX9Renderer *this, int a2, int a3)
{
  unsigned int end; // esi
  NiTArray_void *p_lostDeviceCallbacks; // edi

  end = this->member.lostDeviceCallbacks.end;
  p_lostDeviceCallbacks = &this->member.lostDeviceCallbacks;
  if ( end >= this->member.lostDeviceCallbacks.capacity )
    NiTArray_SetSize((unsigned __int16 *)p_lostDeviceCallbacks, end + this->member.lostDeviceCallbacks.growSize);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)p_lostDeviceCallbacks, end, &a2);
  if ( end >= this->member.lostDeviceCallbacksRefcons.capacity )
    NiTArray_SetSize(
      (unsigned __int16 *)&this->member.lostDeviceCallbacksRefcons,
      end + this->member.lostDeviceCallbacksRefcons.growSize);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)&this->member.lostDeviceCallbacksRefcons, end, &a3);
  return end;
}
