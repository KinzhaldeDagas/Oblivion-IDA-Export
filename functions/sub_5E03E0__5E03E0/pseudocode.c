float *__thiscall sub_5E03E0(TESObjectREFR *this, float *a2, float *a3)
{
  void *v3; // eax
  NiPoint3 *Position; // eax
  float x; // ecx
  float y; // edx
  float z; // eax

  *a2 = *a3; /*0x5e03eb*/
  a2[1] = a3[1]; /*0x5e03f0*/
  a2[2] = a3[2]; /*0x5e03f8*/
  v3 = (void *)sub_67DD70(a3, this); /*0x5e03fb*/
  if ( v3 ) /*0x5e0405*/
  {
    Position = PathGraphNode_GetPosition(v3); /*0x5e0409*/
    x = Position->x; /*0x5e040e*/
    y = Position->y; /*0x5e0410*/
    z = Position->z; /*0x5e0413*/
    *a2 = x; /*0x5e0416*/
    a2[1] = y; /*0x5e0418*/
    a2[2] = z; /*0x5e041b*/
  }
  return a2; /*0x5e0420*/
}
