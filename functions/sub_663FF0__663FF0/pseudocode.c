// bhkWorldRayCastData::SetCastDirectionVector. Converts a world-space direction vector by hkFactor and writes data+0x60. Used by actor movement probes for downward ground snapping instead of an absolute To point.
float *__thiscall sub_663FF0(_OWORD *this, float *a2)
{
  double v3; // rt0
  __int128 v4; // [esp+0h] [ebp-20h]

  v3 = hkFactor; /*0x664011*/
  *(float *)&v4 = *a2 * v3; /*0x664013*/
  *((float *)&v4 + 1) = a2[1] * v3; /*0x66401b*/
  *((float *)&v4 + 2) = v3 * a2[2]; /*0x664022*/
  *(this + 6) = v4; /*0x66402a*/
  return a2; /*0x66402e*/
}
