void __thiscall sub_7D4570(float this, NiCamera *arg0, int a3)
{
  NiCamera *v3; // ebx
  BSRenderedTexture *DefaultRenderTarget; // edi
  NiRenderTargetGroup *v6; // eax
  NiRenderTargetGroupVtbl *vtbl; // esi
  int *v8; // ecx
  int v9; // eax
  _DWORD *v10; // eax
  LONG (__stdcall *v11)(volatile LONG *); // edi
  NiCamera *v12; // esi
  float *v13; // eax
  float v14; // edx
  float v15; // edx
  NiCamera *v16; // eax
  bool v17; // zf
  NiCamera *v18; // esi
  void (__thiscall *Destructor)(NiRefObject *, bool); // edx
  int a2[7]; // [esp+8h] [ebp-1Ch] BYREF

  v3 = arg0;
  if ( arg0 )
  {
    if ( *(float *)(LODWORD(this) + 0xD8) > 0.0 )
    {
      if ( !*(_DWORD *)(LODWORD(this) + 0x114) )
      {
        DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 0x16);
        v6 = BSRenderedTexture::UseTextureToRender(DefaultRenderTarget);
        vtbl = v6->vtbl;
        v8 = (int *)g_textureManager;
        arg0 = (NiCamera *)v6;
        v9 = sub_7C1360(v8);
        vtbl->AttachDepthStencilBuffer((NiRenderTargetGroup *)arg0, (NiDepthStencilBuffer *)v9);
        sub_499310((_DWORD *)LODWORD(this), (int)DefaultRenderTarget);
      }
      sub_7C5A60(v3, *(_DWORD *)(LODWORD(this) + 0x114));
      qmemcpy(a2, &v3->members.Frustum, sizeof(a2));
      v10 = sub_405AD0((_DWORD *)LODWORD(this), &arg0);
      v11 = InterlockedDecrement;
      a2[5] = *(int *)(*v10 + 0xF8);
      if ( arg0 )
      {
        v12 = arg0;
        if ( !v11((volatile LONG *)&arg0->members) )
          v12->vtbl->super.super.Destructor((NiRefObject *)v12, 1);
      }
      Camera_SetFrustum(v3, (int)a2);
      v13 = (float *)*sub_405AD0((_DWORD *)LODWORD(this), &arg0);
      v14 = v13[0x22];
      v13 += 0x22;
      v3->members.super.m_localTransform.pos.x = v14;
      v3->members.super.m_localTransform.pos.y = v13[1];
      v15 = v13[2];
      v16 = arg0;
      v17 = arg0 == 0;
      v3->members.super.m_localTransform.pos.z = v15;
      if ( !v17 )
      {
        v18 = v16;
        if ( !v11((volatile LONG *)&v16->members) )
        {
          if ( v18 )
            v18->vtbl->super.super.Destructor((NiRefObject *)v18, 1);
        }
      }
      Destructor = v3->vtbl[1].super.super.Destructor;
      v3[1].members.super.m_kWorldBound.Center.x = this;
      Destructor((NiRefObject *)v3, 0xFFFFFFFF);
    }
  }
}
