NiFrustumPlanes *__thiscall sub_716DB0(NiFrustumPlanes *this)
{
  NiFrustumPlanes *result; // eax
  float z; // ecx

  result = this; /*0x716db2*/
  this->CullingPlanes[0].Normal.x = g_zeroNiPoint3.x; /*0x716dba*/
  this->CullingPlanes[0].Normal.y = g_zeroNiPoint3.y; /*0x716dc2*/
  z = g_zeroNiPoint3.z; /*0x716dc5*/
  result->CullingPlanes[0].Constant = 0.0; /*0x716dcb*/
  result->CullingPlanes[0].Normal.z = z; /*0x716dce*/
  return result; /*0x716dd1*/
}
