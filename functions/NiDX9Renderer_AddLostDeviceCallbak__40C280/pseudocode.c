unsigned int __thiscall NiDX9Renderer::AddLostDeviceCallbak(NiDX9Renderer *this, int a2, int a3)
{
  unsigned int end; // esi
  NiTArray_void *p_lostDeviceCallbacks; // edi

  end = this->member.lostDeviceCallbacks.end; /*0x40c284*/
  p_lostDeviceCallbacks = &this->member.lostDeviceCallbacks; /*0x40c295*/
  if ( end >= this->member.lostDeviceCallbacks.capacity ) /*0x40c29b*/
    NiTArray_SetSize((unsigned __int16 *)p_lostDeviceCallbacks, end + this->member.lostDeviceCallbacks.growSize); /*0x40c2a6*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)p_lostDeviceCallbacks, end, &a2); /*0x40c2b3*/
  if ( end >= this->member.lostDeviceCallbacksRefcons.capacity ) /*0x40c2c7*/
    NiTArray_SetSize( /*0x40c2d2*/
      (unsigned __int16 *)&this->member.lostDeviceCallbacksRefcons,
      end + this->member.lostDeviceCallbacksRefcons.growSize);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)&this->member.lostDeviceCallbacksRefcons, end, &a3); /*0x40c2df*/
  return end; /*0x40c2e4*/
}
