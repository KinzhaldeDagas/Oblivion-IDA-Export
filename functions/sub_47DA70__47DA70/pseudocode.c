signed int __thiscall sub_47DA70(NiBound *this, NiFrustumPlanes *a2)
{
  float v4; // [esp+4h] [ebp+4h]
  float v5; // [esp+4h] [ebp+4h]

  v4 = a2->CullingPlanes[0].Normal.y * this->Center.y
     + a2->CullingPlanes[0].Normal.x * this->Center.x
     + a2->CullingPlanes[0].Normal.z * this->Center.z;
  v5 = v4 - a2->CullingPlanes[0].Constant;
  if ( -this->Radius < v5 )
    return this->Radius <= (double)v5;
  else
    return 2;
}
