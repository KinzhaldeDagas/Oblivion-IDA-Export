char __thiscall NiRenderer_BeginScene_0(NiDX9Renderer *this)
{
  NiTList_Entry *head; // ebx
  NiTList_Entry *next; // eax
  bool v5; // zf
  volatile LONG *data; // edi

  if ( sub_76B3F0(this) )
  {
    sub_769030(this);
    TESTexture::ClearComponentReferences(this->member.defaultShader);
    sub_7762D0((_DWORD *)this->member.lightMgr);
    if ( (int)this->member.device->lpVtbl->BeginScene(this->member.device) < 0 )
      return 0;
    while ( this->member.atDisplayFrame.numItems )
    {
      head = this->member.atDisplayFrame.head;
      next = head->next;
      v5 = head->next == 0;
      this->member.atDisplayFrame.head = head->next;
      if ( v5 )
        this->member.atDisplayFrame.end = 0;
      else
        next->prev = 0;
      data = (volatile LONG *)head->data;
      if ( data )
        InterlockedIncrement(data + 1);
      (*((void (__thiscall **)(NiTList_void *, NiTList_Entry *))this->member.atDisplayFrame.vtlb + 2))(
        &this->member.atDisplayFrame,
        head);
      --this->member.atDisplayFrame.numItems;
      if ( data )
      {
        if ( !InterlockedDecrement(data + 1) )
          (**(void (__thiscall ***)(void *, int))data)((void *)data, 1);
      }
    }
  }
  return 1;
}
