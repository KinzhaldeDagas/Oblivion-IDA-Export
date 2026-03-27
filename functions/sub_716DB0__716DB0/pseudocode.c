NiFrustumPlanes *__thiscall sub_716DB0(NiFrustumPlanes *this)
{
  NiFrustumPlanes *result; // eax
  float v2; // ecx

  result = this;
  this->CullingPlanes[0].Normal.x = Vector3_InitValue_;
  this->CullingPlanes[0].Normal.y = *(&Vector3_InitValue_ + 1);
  v2 = dword_B3F9B0;
  result->CullingPlanes[0].Constant = 0.0;
  result->CullingPlanes[0].Normal.z = v2;
  return result;
}
