NiCamera *__thiscall SetCameraViewProj(NiDX9Renderer *this, NiCamera *a2)
{
  NiCamera *result; // eax
  bool v3; // zf
  float v4[3]; // [esp+0h] [ebp-24h] BYREF
  float v5[3]; // [esp+Ch] [ebp-18h] BYREF
  float v6[3]; // [esp+18h] [ebp-Ch] BYREF

  result = a2;
  v3 = this->member.super.SceneState1 == 1;
  v4[0] = a2->members.super.m_worldTransform.rot.data[0][2];
  v4[1] = a2->members.super.m_worldTransform.rot.data[1][2];
  v4[2] = a2->members.super.m_worldTransform.rot.data[2][2];
  v5[0] = a2->members.super.m_worldTransform.rot.data[0][1];
  v5[1] = a2->members.super.m_worldTransform.rot.data[1][1];
  v5[2] = a2->members.super.m_worldTransform.rot.data[2][1];
  v6[0] = a2->members.super.m_worldTransform.rot.data[0][0];
  v6[1] = a2->members.super.m_worldTransform.rot.data[1][0];
  v6[2] = a2->members.super.m_worldTransform.rot.data[2][0];
  if ( (v3 || this->member.super.SceneState2 == 1) && this->member.super.IsReady == 1 )
    return (NiCamera *)((int (__thiscall *)(NiDX9Renderer *, NiPoint3 *, float *, float *, float *, NiFrustum *, NiViewport *))this->__vftable->super.SetupCamera)(
                         this,
                         &a2->members.super.m_worldTransform.pos,
                         v6,
                         v5,
                         v4,
                         &a2->members.Frustum,
                         &a2->members.ViewPort);
  return result;
}
