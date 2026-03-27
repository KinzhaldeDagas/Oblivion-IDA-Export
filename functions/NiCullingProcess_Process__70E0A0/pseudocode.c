void __thiscall NiCullingProcess::Process(NiCullingProcess *this, NiCamera *a2, NiAVObject *a3, void *a4)
{
  NiCamera *v5; // ebx
  NiCamera *v6; // edi
  void *v7; // ebp
  NiFrustum *p_Frustum; // [esp-4h] [ebp-28h]
  void *VisibleGeo; // [esp+14h] [ebp-10h]

  v5 = a2;
  v6 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      p_Frustum = &a2->members.Frustum;
      this->Camera = a2;
      NiCullingProcess::SetFrustum(this, p_Frustum);
      v7 = a4;
      VisibleGeo = 0;
      if ( a4 )
      {
        VisibleGeo = this->VisibleGeo;
        this->VisibleGeo = a4;
      }
      a2 = 0;
      if ( !this->VisibleGeo )
      {
        NiSmartPointer_Set__((Ni2DBuffer **)&a2, (Ni2DBuffer *)g_Renderer->member.super.accumulator);
        v6 = a2;
        if ( a2 )
          ((void (__thiscall *)(NiCamera *, NiCamera *))a2->vtbl->UpdateControllers)(a2, v5);
      }
      NiAVObject_Render(a3, this);
      if ( v6 )
        v6->vtbl->Unk_14((NiAVObject *)v6);
      if ( v7 )
        this->VisibleGeo = VisibleGeo;
      this->Camera = 0;
      if ( v6 )
      {
        if ( !InterlockedDecrement((volatile LONG *)&v6->members) )
          v6->vtbl->super.super.Destructor((NiRefObject *)v6, 1);
      }
    }
  }
}
