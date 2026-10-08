// Returns the Euclidean 3D distance from TESObjectREFR position fields at +0x2C/+0x30/+0x34 to pointXYZ. The second social scan uses this result against its effective conversation radius.
float __thiscall TESObjectREFR::GetDistanceToPoint(TESObjectREFR *this, const float *pointXYZ)
{
  float v4; // [esp+0h] [ebp-Ch]
  float v5; // [esp+4h] [ebp-8h]
  float v6; // [esp+8h] [ebp-4h]
  float pointXYZa; // [esp+10h] [ebp+4h]

  v4 = *pointXYZ - this->member.pos[0]; /*0x4d7e3c*/
  v5 = pointXYZ[1] - this->member.pos[1]; /*0x4d7e45*/
  v6 = pointXYZ[2] - this->member.pos[2]; /*0x4d7e4f*/
  pointXYZa = v4 * v4 + v5 * v5 + v6 * v6; /*0x4d7e6e*/
  return sqrt(pointXYZa); /*0x4d7e83*/
}
