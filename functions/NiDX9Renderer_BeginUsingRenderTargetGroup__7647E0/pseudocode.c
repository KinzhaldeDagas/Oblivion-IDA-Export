char __thiscall NiDX9Renderer::BeginUsingRenderTargetGroup(NiDX9Renderer *this, NiRenderTargetGroup *a2, int a3)
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
    UnsetRenderTarget(this->member.device, 1);
    UnsetRenderTarget(this->member.device, 2);
    UnsetRenderTarget(this->member.device, 3);
    v4 = 0;
    if ( a2->vtbl->GetBufferCount(a2) )
    {
      do
      {
        v5 = a2->vtbl->GetRenderTargetData(a2, v4);
        if ( v5 )
        {
          v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)v5 + 0x10))(v5);
          if ( v6 )
          {
            while ( (_UNKNOWN *)v6 != &unk_B42654 )
            {
              v6 = *(_DWORD *)(v6 + 4);
              if ( !v6 )
                goto LABEL_7;
            }
            v7 = 1;
          }
          else
          {
LABEL_7:
            v7 = 0;
          }
          v8 = v7 != 0 ? v5 : 0;
          if ( v8 )
          {
            if ( !(*(unsigned __int8 (__thiscall **)(void *, IDirect3DDevice9 *, UInt32))(*(_DWORD *)v8 + 0x34))(
                    v8,
                    this->member.device,
                    v4) )
              goto LABEL_23;
          }
        }
      }
      while ( ++v4 < a2->vtbl->GetBufferCount(a2) );
    }
    v9 = a2->vtbl->GetDepthStencilBufferRendererData(a2);
    v10 = v9;
    if ( !v9 )
      goto LABEL_36;
    v11 = (*(int (__thiscall **)(void *))(*(_DWORD *)v9 + 0x10))(v9);
    if ( v11 )
    {
      while ( (_UNKNOWN *)v11 != &unk_B4263C )
      {
        v11 = *(_DWORD *)(v11 + 4);
        if ( !v11 )
          goto LABEL_15;
      }
      v12 = 1;
    }
    else
    {
LABEL_15:
      v12 = 0;
    }
    v13 = v12 != 0 ? v10 : 0;
    if ( v13 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(void *, IDirect3DDevice9 *))(*(_DWORD *)v13 + 0x38))(
              v13,
              this->member.device) )
        goto LABEL_23;
    }
    else
    {
LABEL_36:
      if ( !sub_76D4C0((int)this->member.device) )
      {
LABEL_23:
        this->__vftable->super.BeginUsingRenderTargetGroup(
          (NiRenderer *)this,
          this->member.currentRTGroup,
          (ClearFlags)a3);
        TESTexture::ClearComponentReferences(v14);
        return 0;
      }
    }
    this->member.currentRTGroup = a2;
    v16 = a2->vtbl->GetRenderTargetData(a2, 0);
    if ( v16 )
    {
      v17 = (*(int (__thiscall **)(void *))(*(_DWORD *)v16 + 0x10))(v16);
      if ( v17 )
      {
        while ( (_UNKNOWN *)v17 != &unk_B4265C )
        {
          v17 = *(_DWORD *)(v17 + 4);
          if ( !v17 )
            goto LABEL_28;
        }
        v18 = 1;
      }
      else
      {
LABEL_28:
        v18 = 0;
      }
      if ( (v18 != 0 ? (unsigned int)v16 : 0) != 0 )
        this->member.currentscreenRTGroup = a2;
    }
    this->__vftable->super.Clear((NiRenderer *)this, 0, a3);
  }
  return 1;
}
