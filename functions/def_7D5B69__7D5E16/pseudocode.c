// positive sp value has been detected, the output may be wrong!
char __userpurge def_7D5B69@<al>(
        NiCamera *a1@<ebx>,
        unsigned int a2@<esi>,
        float a3,
        float a4,
        float a5,
        int a6,
        int a7,
        int a8)
{
  char v8; // bl
  BSCubeMapCamera_ShadowLayout v10; // [esp-154h] [ebp-15Ch] BYREF
  unsigned int v11; // [esp+4h] [ebp-4h]

  BSCubeMapCamera::BSCubeMapCamera((BSCubeMapCamera *)&v10, 0); /*0x7d5e1c*/
  *(float *)&v10.base_000[0x58] = a4; /*0x7d5e36*/
  v11 = 0; /*0x7d5e42*/
  *(float *)&v10.base_000[0x54] = a3; /*0x7d5e4d*/
  *(float *)&v10.base_000[0x5C] = a5; /*0x7d5e54*/
  BSCubeMapCamera_OrientFace(&v10, a2); /*0x7d5e5b*/
  NiAVObject_UpdateNiAVObject((NiAVObject *)&v10, 0.0, 1); /*0x7d5e6c*/
  v8 = ShadowCameraVolumesOverlap(a1, (NiCamera *)&v10); /*0x7d5e82*/
  v11 = 0xFFFFFFFF; /*0x7d5e84*/
  BSCubeMapCamera::~BSCubeMapCamera((BSCubeMapCamera *)&v10); /*0x7d5e8f*/
  return v8; /*0x7d5eae*/
}
