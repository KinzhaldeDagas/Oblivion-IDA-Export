float *__thiscall TESObjectREFR_GetInitRot(TESChildCELL *this, int *a2)
{
  GetInitialRotation(this + 0x11, (float *)a2, (float *)this);
  return (float *)a2;
}
