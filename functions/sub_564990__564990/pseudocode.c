//
// [2026-10-06 directional billboard] Verified: child-slot 2 parent, detach previous billboard, attach supplied object, smart-pointer update at node+0xE8. Fallout named SetBillboard 0x8246E3A0 has equivalent ownership flow.
void __thiscall BSTreeNode_SetBillboard(BSTreeNode_OblivionLayout_0F0 *this, NiTriBasedGeom *billboard)
{
  NiObjectNET *v2; // ebx
  UInt32 v4; // esi
  NiTriBasedGeom *billboardGeometry; // eax
  NiTriBasedGeom **p_billboardGeometry; // edi
  NiTriBasedGeom *v7; // ebp

  v2 = (NiObjectNET *)billboard; /*0x564991*/
  if ( billboard ) /*0x56499a*/
  {
    v4 = this->base.vtbl[1].super.super.Unk_03((NiObject *)this); /*0x5649a7*/
    if ( v4 ) /*0x5649ab*/
    {
      NiObjectNET_SetName(v2, "Billboard"); /*0x5649b4*/
      billboardGeometry = this->billboardGeometry; /*0x5649b9*/
      p_billboardGeometry = &this->billboardGeometry; /*0x5649bf*/
      if ( billboardGeometry ) /*0x5649c7*/
      {
        (*(void (__thiscall **)(UInt32, NiTriBasedGeom **, NiTriBasedGeom *))(*(_DWORD *)v4 + 0x88))( /*0x5649da*/
          v4,
          &billboard,
          billboardGeometry);
        v7 = billboard; /*0x5649dc*/
        if ( billboard ) /*0x5649e2*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&billboard->vtbl.super.super.GetType) ) /*0x5649e8*/
          {
            if ( v7 ) /*0x5649f4*/
              (*(void (__thiscall **)(NiTriBasedGeom *, int))v7->vtbl.super.super.super.Destructor)(v7, 1); /*0x5649ff*/
          }
        }
      }
      (*(void (__thiscall **)(UInt32, NiObjectNET *, int))(*(_DWORD *)v4 + 0x84))(v4, v2, 1); /*0x564a0f*/
      NiSmartPointer_Set__((Ni2DBuffer **)p_billboardGeometry, (Ni2DBuffer *)v2); /*0x564a14*/
    }
  }
}
