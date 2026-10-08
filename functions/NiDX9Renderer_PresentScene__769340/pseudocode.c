// Process the renderer pending-surface list at the scene presentation boundary by invoking each queued buffer's vtable+0x28 update/resolve operation. The shadow texture buffer is never queued because its predicate is false.
// DX11 retirement audit 2026-10-01: this PresentScene body drains atDisplayFrame and dispatches each buffer virtual+28; it does not itself acquire the renderer critical section. Do not infer lock ownership from being at Present. The default implicit-buffer Present dispatch is76D6D0 and uses its device+4C.
bool __thiscall NiDX9Renderer::PresentScene(NiDX9Renderer *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  NiTList_void *p_atDisplayFrame; // edi
  NiTList_Entry *head; // ebp
  NiTList_Entry *next; // eax
  bool v5; // zf
  volatile LONG *data; // esi

  if ( !this->member.lostDevice ) /*0x769341*/
  {
    if ( this->member.atDisplayFrame.numItems ) /*0x769353*/
    {
      v1 = InterlockedDecrement; /*0x76935c*/
      p_atDisplayFrame = &this->member.atDisplayFrame; /*0x769365*/
      do /*0x7693c7*/
      {
        head = p_atDisplayFrame->head; /*0x769372*/
        next = head->next; /*0x769375*/
        v5 = head->next == 0; /*0x769378*/
        p_atDisplayFrame->head = head->next; /*0x76937a*/
        if ( v5 ) /*0x76937d*/
          p_atDisplayFrame->end = 0; /*0x769384*/
        else
          next->prev = 0; /*0x76937f*/
        data = (volatile LONG *)head->data; /*0x769387*/
        if ( data ) /*0x76938c*/
          InterlockedIncrement(data + 1); /*0x769392*/
        (*((void (__thiscall **)(NiTList_void *, NiTList_Entry *))p_atDisplayFrame->vtlb + 2))(p_atDisplayFrame, head); /*0x7693a0*/
        --p_atDisplayFrame->numItems; /*0x7693a2*/
        (*(void (__thiscall **)(volatile LONG *))(*data + 0x28))(data);// Deferred surface update/resolve dispatch for an item queued by EndUsingRenderTargetGroup. /*0x7693ad*/
        if ( !v1(data + 1) ) /*0x7693b3*/
          (**(void (__thiscall ***)(volatile LONG *, int))data)(data, 1); /*0x7693c1*/
      }
      while ( this->member.atDisplayFrame.numItems ); /*0x7693c7*/
    }
  }
  return 1; /*0x7693d7*/
}
