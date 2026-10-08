// End the current target group without unbinding it. Color buffers whose class predicate at vtable+0x24 is true are queued once for PresentScene vtable+0x28 processing. NiDX9TextureBufferData returns false, so the R32F shadow map is neither queued, copied, nor resolved.
bool __thiscall NiDX9Renderer::EndUsingRenderTargetGroup(NiDX9Renderer *this)
{
  UInt32 v2; // esi
  volatile LONG *v3; // esi
  int v4; // eax
  char v5; // al
  NiTList_Entry *head; // eax
  bool v7; // zf
  NiTList_Entry *v8; // edx
  bool v9; // bl
  UInt32 i; // [esp+Ch] [ebp-8h]
  volatile LONG *v12; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x768d72*/
  for ( i = 0; i < this->member.currentRTGroup->vtbl->GetBufferCount(this->member.currentRTGroup); v2 = i )
  {
    v3 = (volatile LONG *)this->member.currentRTGroup->vtbl->GetRenderTargetData(this->member.currentRTGroup, v2); /*0x768da1*/
    if ( v3 )
    {
      v4 = (*(int (__thiscall **)(volatile LONG *))(*v3 + 0x10))(v3); /*0x768dae*/
      if ( v4 ) /*0x768db2*/
      {
        while ( (BSStringT *)v4 != &stru_B42654 ) /*0x768db9*/
        {
          v4 = *(_DWORD *)(v4 + 4); /*0x768dbf*/
          if ( !v4 ) /*0x768dc4*/
            goto LABEL_6; /*0x768dc4*/
        }
        v5 = 1; /*0x768e7b*/
      }
      else
      {
LABEL_6:
        v5 = 0; /*0x768dc6*/
      }
      v3 = v5 != 0 ? v3 : 0;
    }
    if ( (*(unsigned __int8 (__thiscall **)(volatile LONG *))(*v3 + 0x24))(v3) )// Ask this color-buffer class whether it requires deferred presentation-boundary processing. /*0x768dd7*/
    {
      InterlockedIncrement(v3 + 1); /*0x768de1*/
      head = this->member.atDisplayFrame.head; /*0x768de7*/
      if ( head ) /*0x768def*/
      {
        while ( 1 ) /*0x768df1*/
        {
          v7 = v3 == head->data; /*0x768df1*/
          v8 = head; /*0x768df7*/
          head = head->next; /*0x768df9*/
          if ( v7 ) /*0x768dfb*/
            break; /*0x768dfb*/
          if ( !head ) /*0x768dff*/
            goto LABEL_12; /*0x768dff*/
        }
      }
      else
      {
LABEL_12:
        v8 = 0; /*0x768e01*/
      }
      v9 = v8 == 0; /*0x768e06*/
      if ( !InterlockedDecrement(v3 + 1) ) /*0x768e09*/
        (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1); /*0x768e1b*/
      if ( v9 ) /*0x768e1f*/
      {
        v12 = v3; /*0x768e22*/
        InterlockedIncrement(v3 + 1); /*0x768e26*/
        NiTRefPointerList__AddTail(&this->member.atDisplayFrame.vtlb, (int *)&v12);// Queue a qualifying buffer once with strong-reference ownership for PresentScene processing. /*0x768e37*/
        if ( !InterlockedDecrement(v3 + 1) ) /*0x768e3d*/
          (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1); /*0x768e4f*/
      }
    }
    ++i; /*0x768e63*/
  }
  return 1;                                     // Target end returns after deferred-list bookkeeping; it does not unbind color/depth surfaces, clear currentRTGroup, or restore viewport/scissor state. /*0x768e73*/
}
