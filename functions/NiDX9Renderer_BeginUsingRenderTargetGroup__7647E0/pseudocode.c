// NiDX9Renderer render-target-group bind. Binds color and depth/stencil surfaces, records the current group, and performs the requested clear; kClear_ALL therefore clears shadow color/depth/stencil after the producer sets white clear color.
bool __thiscall NiDX9Renderer::BeginUsingRenderTargetGroup(
        NiDX9Renderer *this,
        NiRenderTargetGroup *group,
        unsigned int clearFlags)
{
  UInt32 v4; // ebx
  void *v5; // esi
  int v6; // eax
  char v7; // al
  void *v8; // eax
  void *v9; // eax
  void *v10; // esi
  int v11; // eax
  char v12; // al
  void *v13; // eax
  void *v14; // ecx
  void *v16; // esi
  int v17; // eax
  char v18; // al

  if ( !this->member.lostDevice )
  {
    UnsetRenderTarget(this->member.device, 1);  // Explicitly unbind MRT color slots 1, 2, and 3 before binding the new group. /*0x7647fc*/
    UnsetRenderTarget(this->member.device, 2); /*0x76480a*/
    UnsetRenderTarget(this->member.device, 3); /*0x764818*/
    v4 = 0; /*0x76482b*/
    if ( group->vtbl->GetBufferCount(group) )
    {
      do
      {
        v5 = group->vtbl->GetRenderTargetData(group, v4); /*0x764840*/
        if ( v5 )
        {
          v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)v5 + 0x10))(v5); /*0x76484d*/
          if ( v6 ) /*0x764851*/
          {
            while ( (BSStringT *)v6 != &stru_B42654 ) /*0x764858*/
            {
              v6 = *(_DWORD *)(v6 + 4); /*0x76485e*/
              if ( !v6 ) /*0x764863*/
                goto LABEL_7; /*0x764863*/
            }
            v7 = 1; /*0x76492c*/
          }
          else
          {
LABEL_7:
            v7 = 0; /*0x764865*/
          }
          v8 = v7 != 0 ? v5 : 0;
          if ( v8 ) /*0x76486d*/
          {                                     // Bind this group color buffer directly as its D3D render-target surface.
            if ( !(*(unsigned __int8 (__thiscall **)(void *, IDirect3DDevice9 *, UInt32))(*(_DWORD *)v8 + 0x34))( /*0x76487e*/
                    v8,
                    this->member.device,
                    v4) )
              goto LABEL_23; /*0x764882*/
          }
        }
      }
      while ( ++v4 < group->vtbl->GetBufferCount(group) );
    }
    v9 = group->vtbl->GetDepthStencilBufferRendererData(group); /*0x764898*/
    v10 = v9; /*0x7648a4*/
    if ( !v9 ) /*0x7648a8*/
      goto LABEL_36; /*0x7648a8*/
    v11 = (*(int (__thiscall **)(void *))(*(_DWORD *)v9 + 0x10))(v9); /*0x7648b5*/
    if ( v11 ) /*0x7648b9*/
    {
      while ( (BSStringT *)v11 != &stru_B4263C ) /*0x7648c5*/
      {
        v11 = *(_DWORD *)(v11 + 4); /*0x7648cb*/
        if ( !v11 ) /*0x7648d0*/
          goto LABEL_15; /*0x7648d0*/
      }
      v12 = 1; /*0x764967*/
    }
    else
    {
LABEL_15:
      v12 = 0; /*0x7648d2*/
    }
    v13 = v12 != 0 ? v10 : 0;
    if ( v13 ) /*0x7648da*/
    {                                           // Bind the group's shared compatible D3D depth/stencil surface.
      if ( !(*(unsigned __int8 (__thiscall **)(void *, IDirect3DDevice9 *))(*(_DWORD *)v13 + 0x38))( /*0x7648ee*/
              v13,
              this->member.device) )
        goto LABEL_23; /*0x7648f2*/
    }
    else
    {
LABEL_36:
      if ( !NiDX92DBufferData::UnsetDepthStencilSurface(this->member.device) ) /*0x764975*/
      {
LABEL_23:
        this->__vftable->super.BeginUsingRenderTargetGroup( /*0x764981*/
          (NiRenderer *)this,
          this->member.currentRTGroup,
          (ClearFlags)clearFlags);              // Binding failure rollback: rebind the previously recorded current group.
        Shared_NoOpVirtual_60D0A0(v14); /*0x7649a4*/
        return 0; /*0x7649b2*/
      }
    }
    this->member.currentRTGroup = group;        // Record the successfully bound group as current; EndUsingRenderTargetGroup does not clear this pointer. /*0x7649b5*/
    v16 = group->vtbl->GetRenderTargetData(group, 0); /*0x7649c9*/
    if ( v16 )
    {
      v17 = (*(int (__thiscall **)(void *))(*(_DWORD *)v16 + 0x10))(v16); /*0x7649d6*/
      if ( v17 ) /*0x7649da*/
      {
        while ( (_UNKNOWN *)v17 != &stru_B4265C ) /*0x7649e5*/
        {
          v17 = *(_DWORD *)(v17 + 4); /*0x7649e7*/
          if ( !v17 ) /*0x7649ec*/
            goto LABEL_28; /*0x7649ec*/
        }
        v18 = 1; /*0x764a1b*/
      }
      else
      {
LABEL_28:
        v18 = 0; /*0x7649ee*/
      }
      if ( (v18 != 0 ? (unsigned int)v16 : 0) != 0 )
        this->member.currentscreenRTGroup = group; /*0x7649f8*/
    }
    this->__vftable->super.Clear((NiRenderer *)this, 0, clearFlags);// Clear the newly bound group using the requested engine clear flags. /*0x764a10*/
  }
  return 1; /*0x764923*/
}
