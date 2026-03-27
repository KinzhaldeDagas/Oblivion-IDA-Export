float *__thiscall sub_4BFE00(TESObjectCELL **this, float *a2, int a3)
{
  int v4; // eax
  int XCoordinate; // eax
  TESObjectCELL *v6; // ecx
  double v7; // st7
  int v8; // eax
  int YCoordinate; // eax
  TESObjectCELL *v10; // ecx

  v4 = (int)*(this + 9);
  if ( v4 )
  {
    XCoordinate = *(_DWORD *)(v4 + 0x98);
  }
  else
  {
    v6 = *(this + 8);
    if ( v6 )
      XCoordinate = TESObjectCELL_GetXCoordinate(v6);
    else
      XCoordinate = 0;
  }
  v7 = (double)(XCoordinate << 0xC);
  v8 = (int)*(this + 9);
  *a2 = v7 + dbl_A30F70;
  if ( v8 )
  {
    YCoordinate = *(_DWORD *)(v8 + 0x9C);
  }
  else
  {
    v10 = *(this + 8);
    if ( v10 )
      YCoordinate = TESObjectCELL_GetYCoordinate(v10);
    else
      YCoordinate = 0;
  }
  a2[1] = (double)(YCoordinate << 0xC) + dbl_A30F70;
  a2[2] = 0.0;
  return a2;
}
