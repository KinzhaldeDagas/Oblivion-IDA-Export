// CULLING audit 2026-09-27 (observed Oblivion behavior): ABI: __thiscall(self, camera, NiAVObject root, optional visible array), RET 0x0C. Installs camera(+0x0C) and rebuilds its frustum before traversal. Explicit array temporarily replaces +0x08; null configured array uses accumulator begin(+0x4C), traversal, flush(+0x50), release. Restores explicit-array replacement but CLEARS Camera on normal completion; it does not restore an outer camera/frustum for same-process nesting. Native +0x57F3F3 caller is a direct call, not Process-vtable dispatch.
void __thiscall NiCullingProcess::Process(
        NiCullingProcess *self,
        NiCamera *camera,
        NiAVObject *root,
        CullingVisibleGeometryArray *visibleArray)
{
  NiCamera *v5; // ebx
  NiCamera *v6; // edi
  CullingVisibleGeometryArray *v7; // ebp
  NiFrustum *p_Frustum; // [esp-4h] [ebp-28h]
  CullingVisibleGeometryArray *VisibleGeo; // [esp+14h] [ebp-10h]

  v5 = camera; /*0x70e0c7*/
  v6 = 0; /*0x70e0cb*/
  if ( camera ) /*0x70e0cf*/
  {
    if ( root ) /*0x70e0d9*/
    {
      p_Frustum = &camera->members.Frustum; /*0x70e0e5*/
      self->Camera = camera; /*0x70e0e6*/
      NiCullingProcess::SetFrustum(self, p_Frustum); /*0x70e0e9*/
      v7 = visibleArray; /*0x70e0ee*/
      VisibleGeo = 0; /*0x70e0f4*/
      if ( visibleArray ) /*0x70e0f8*/
      {
        VisibleGeo = self->VisibleGeo; /*0x70e0fd*/
        self->VisibleGeo = visibleArray; /*0x70e101*/
      }
      camera = 0; /*0x70e104*/
      if ( !self->VisibleGeo ) /*0x70e108*/
      {
        NiSmartPointer_Set__((Ni2DBuffer **)&camera, (Ni2DBuffer *)renderer->member.super.accumulator); /*0x70e124*/
        v6 = camera; /*0x70e129*/
        if ( camera ) /*0x70e12f*/
          ((void (__thiscall *)(NiCamera *, NiCamera *))camera->vtbl->UpdateControllers)(camera, v5); /*0x70e139*/
      }
      NiAVObject_Render(root, self); /*0x70e140*/
      if ( v6 ) /*0x70e147*/
        v6->vtbl->Unk_14((NiAVObject *)v6); /*0x70e150*/
      if ( v7 ) /*0x70e154*/
        self->VisibleGeo = VisibleGeo; /*0x70e15a*/
      self->Camera = 0; /*0x70e15f*/
      if ( v6 ) /*0x70e16e*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v6->members) ) /*0x70e174*/
          v6->vtbl->super.super.Destructor((NiRefObject *)v6, 1); /*0x70e186*/
      }
    }
  }
}
