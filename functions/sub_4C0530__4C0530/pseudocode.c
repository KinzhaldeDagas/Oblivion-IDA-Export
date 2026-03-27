float *__thiscall sub_4C0530(TESObjectCELL **this, float *a2, char a3, unsigned __int16 a4, int *a5, int *a6)
{
  double v6; // st7
  int v9; // eax
  TESObjectCELL *v10; // ecx
  int v11; // eax
  TESObjectCELL *v12; // ecx
  int XCoordinate; // [esp+Ch] [ebp+4h]
  int YCoordinate; // [esp+Ch] [ebp+4h]
  float v17; // [esp+10h] [ebp+8h]
  float v18; // [esp+10h] [ebp+8h]
  float v19; // [esp+10h] [ebp+8h]

  v6 = flt_A3765C;
  *a2 = flt_A3765C;
  a2[1] = v6;
  if ( a5 )
  {
    XCoordinate = *a5;
  }
  else
  {
    v9 = (int)*(this + 9);
    if ( v9 )
    {
      XCoordinate = *(_DWORD *)(v9 + 0x98);
    }
    else
    {
      v10 = *(this + 8);
      if ( v10 )
        XCoordinate = TESObjectCELL_GetXCoordinate(v10);
      else
        XCoordinate = 0;
    }
  }
  *a2 = (double)XCoordinate * *a2;
  if ( a6 )
  {
    YCoordinate = *a6;
  }
  else
  {
    v11 = (int)*(this + 9);
    if ( v11 )
    {
      YCoordinate = *(_DWORD *)(v11 + 0x9C);
    }
    else
    {
      v12 = *(this + 8);
      if ( v12 )
        YCoordinate = TESObjectCELL_GetYCoordinate(v12);
      else
        YCoordinate = 0;
    }
  }
  v17 = (double)((unsigned __int8)(a3 & 1) << 0xB) + *a2;
  *a2 = v17 + (double)((a4 % 0x11) << 7);
  v18 = (double)YCoordinate * a2[1];
  v19 = v18 + (double)((unsigned __int8)(a3 & 2) << 0xA);
  a2[1] = v19 + (double)((a4 / 0x11) << 7);
  a2[2] = 0.0;
  return a2;
}
