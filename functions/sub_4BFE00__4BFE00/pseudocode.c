float *__thiscall sub_4BFE00(TESObjectCELL **this, float *a2, int a3)
{
  int v4; // eax
  int XCoordinate; // eax
  TESObjectCELL *v6; // ecx
  double v7; // st7
  int v8; // eax
  int YCoordinate; // eax
  TESObjectCELL *v10; // ecx

  v4 = (int)*(this + 9); /*0x4bfe04*/
  if ( v4 ) /*0x4bfe0a*/
  {
    XCoordinate = *(_DWORD *)(v4 + 0x98); /*0x4bfe0c*/
  }
  else
  {
    v6 = *(this + 8); /*0x4bfe14*/
    if ( v6 ) /*0x4bfe19*/
      XCoordinate = TESObjectCELL_GetXCoordinate(v6); /*0x4bfe1b*/
    else
      XCoordinate = 0; /*0x4bfe22*/
  }
  v7 = (double)(XCoordinate << 0xC); /*0x4bfe2f*/
  v8 = (int)*(this + 9); /*0x4bfe33*/
  *a2 = v7 + dbl_A30F70; /*0x4bfe3e*/
  if ( v8 ) /*0x4bfe40*/
  {
    YCoordinate = *(_DWORD *)(v8 + 0x9C); /*0x4bfe42*/
  }
  else
  {
    v10 = *(this + 8); /*0x4bfe4a*/
    if ( v10 ) /*0x4bfe4f*/
      YCoordinate = TESObjectCELL_GetYCoordinate(v10); /*0x4bfe51*/
    else
      YCoordinate = 0; /*0x4bfe58*/
  }
  a2[1] = (double)(YCoordinate << 0xC) + dbl_A30F70; /*0x4bfe6d*/
  a2[2] = 0.0; /*0x4bfe72*/
  return a2; /*0x4bfe75*/
}
