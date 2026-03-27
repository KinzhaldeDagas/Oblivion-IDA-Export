// positive sp value has been detected, the output may be wrong!
char __userpurge def_7D5B69@<al>(
        NiCamera *a1@<ebx>,
        int a2@<esi>,
        float a3,
        float a4,
        float a5,
        int a6,
        int a7,
        int a8)
{
  char v8; // bl
  NiCamera v10; // [esp-154h] [ebp-15Ch] BYREF
  unsigned int v11; // [esp+4h] [ebp-4h]

  BSCubeMapCamera::BSCubeMapCamera((BSCubeMapCamera *)&v10, 0);
  v10.members.super.m_localTransform.pos.y = a4;
  v11 = 0;
  v10.members.super.m_localTransform.pos.x = a3;
  v10.members.super.m_localTransform.pos.z = a5;
  sub_812EF0((float *)&v10, a2);
  NiAVObject_UpdateNiAVObject((NiAVObject *)&v10, 0.0, 1);
  v8 = sub_7D34C0(a1, &v10);
  v11 = 0xFFFFFFFF;
  BSCubeMapCamera::~BSCubeMapCamera((BSCubeMapCamera *)&v10);
  return v8;
}
