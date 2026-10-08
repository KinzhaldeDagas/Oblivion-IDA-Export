float *__thiscall TESObjectREFR_GetInitRot(TESChildCELL *this, int *a2)
{
  GetInitialRotation(this + 0x11, (float *)a2, (float *)this); /*0x4d821a*/
  return (float *)a2; /*0x4d8221*/
}
