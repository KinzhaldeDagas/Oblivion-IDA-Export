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

  v6 = flt_A3765C; /*0x4c0530*/
  *a2 = flt_A3765C; /*0x4c0541*/
  a2[1] = v6; /*0x4c0544*/
  if ( a5 ) /*0x4c0549*/
  {
    XCoordinate = *a5; /*0x4c054d*/
  }
  else
  {
    v9 = (int)*(this + 9); /*0x4c0553*/
    if ( v9 ) /*0x4c0558*/
    {
      XCoordinate = *(_DWORD *)(v9 + 0x98); /*0x4c0560*/
    }
    else
    {
      v10 = *(this + 8); /*0x4c0566*/
      if ( v10 ) /*0x4c056b*/
        XCoordinate = TESObjectCELL_GetXCoordinate(v10); /*0x4c0572*/
      else
        XCoordinate = 0; /*0x4c0578*/
    }
  }
  *a2 = (double)XCoordinate * *a2; /*0x4c058c*/
  if ( a6 ) /*0x4c058e*/
  {
    YCoordinate = *a6; /*0x4c0592*/
  }
  else
  {
    v11 = (int)*(this + 9); /*0x4c0598*/
    if ( v11 ) /*0x4c059d*/
    {
      YCoordinate = *(_DWORD *)(v11 + 0x9C); /*0x4c05a5*/
    }
    else
    {
      v12 = *(this + 8); /*0x4c05ab*/
      if ( v12 ) /*0x4c05b0*/
        YCoordinate = TESObjectCELL_GetYCoordinate(v12); /*0x4c05b7*/
      else
        YCoordinate = 0; /*0x4c05bd*/
    }
  }
  v17 = (double)((unsigned __int8)(a3 & 1) << 0xB) + *a2; /*0x4c05f0*/
  *a2 = v17 + (double)((a4 % 0x11) << 7); /*0x4c0606*/
  v18 = (double)YCoordinate * a2[1]; /*0x4c060f*/
  v19 = v18 + (double)((unsigned __int8)(a3 & 2) << 0xA); /*0x4c061f*/
  a2[1] = v19 + (double)((a4 / 0x11) << 7); /*0x4c0631*/
  a2[2] = 0.0; /*0x4c0636*/
  return a2; /*0x4c0639*/
}
