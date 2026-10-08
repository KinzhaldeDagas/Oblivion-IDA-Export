// Clone model geometry and apply both EGM position banks at scale 1.0. The wrapper returns the deformed geometry without regenerating normals.
bool __thiscall BSFaceGenModel_CreateMorphedGeometry(
        void *this,
        const FaceGenHeadParameters *parameters,
        NiGeometry **outGeometry)
{
  NiGeometry *v5; // esi

  if ( !parameters ) /*0x55987a*/
    return 0; /*0x559880*/
  if ( !BSFaceGenModel_CloneGeometry(this, outGeometry) ) /*0x559890*/
    return 0; /*0x559890*/
  if ( !BSFaceGenModel_ApplyEGMMorph(this, parameters, *outGeometry, 1.0, 0) )// CreateMorphedGeometry failure boundary: false from EGM causes cloned output geometry refcount release, outGeometry=0, and false return. Prettier Faces 1.19.11 rejects prelocked streams before entering native EGM during character refresh; this call's caller already handles rejection. /*0x5598a0*/
  {
    v5 = *outGeometry; /*0x5598a9*/
    if ( *outGeometry ) /*0x5598a9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v5->member) ) /*0x5598b3*/
      {
        if ( v5 ) /*0x5598bf*/
          v5->__vftable->super.super.super.Destructor((NiRefObject *)v5, 1); /*0x5598c9*/
      }
      *outGeometry = 0; /*0x5598cb*/
    }
    return 0; /*0x5598d6*/
  }
  return 1; /*0x55987c*/
}
