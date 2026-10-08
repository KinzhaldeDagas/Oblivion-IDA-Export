// Native NiDX9Renderer scene begin: restore a lost device if needed, flush prepacked geometry state, initialize shader/light state, call IDirect3DDevice9::BeginScene, and clean any stale pending-surface references.
bool __thiscall NiDX9Renderer_BeginScene(NiDX9Renderer *this)
{
  NiTList_Entry *head; // ebx
  NiTList_Entry *next; // eax
  bool v5; // zf
  volatile LONG *data; // edi

  if ( NiDX9Renderer_LostDeviceRestore(this) ) /*0x76be03*/
  {
    sub_769030(this); /*0x76be12*/
    Shared_NoOpVirtual_60D0A0(this->member.defaultShader); /*0x76be1d*/
    sub_7762D0((_DWORD *)this->member.lightMgr); /*0x76be28*/
    if ( (int)this->member.device->lpVtbl->BeginScene(this->member.device) < 0 ) /*0x76be40*/
      return 0; /*0x76be45*/
    while ( this->member.atDisplayFrame.numItems ) /*0x76be46*/
    {
      head = this->member.atDisplayFrame.head; /*0x76be62*/
      next = head->next; /*0x76be65*/
      v5 = head->next == 0; /*0x76be67*/
      this->member.atDisplayFrame.head = head->next; /*0x76be69*/
      if ( v5 ) /*0x76be6c*/
        this->member.atDisplayFrame.end = 0; /*0x76be73*/
      else
        next->prev = 0; /*0x76be6e*/
      data = (volatile LONG *)head->data; /*0x76be76*/
      if ( data ) /*0x76be7b*/
        InterlockedIncrement(data + 1); /*0x76be81*/
      (*((void (__thiscall **)(NiTList_void *, NiTList_Entry *))this->member.atDisplayFrame.vtlb + 2))( /*0x76be8f*/
        &this->member.atDisplayFrame,
        head);
      --this->member.atDisplayFrame.numItems; /*0x76be91*/
      if ( data ) /*0x76be97*/
      {
        if ( !InterlockedDecrement(data + 1) ) /*0x76be9d*/
          (**(void (__thiscall ***)(void *, int))data)((void *)data, 1); /*0x76beaf*/
      }
    }
  }
  return 1; /*0x76be44*/
}
