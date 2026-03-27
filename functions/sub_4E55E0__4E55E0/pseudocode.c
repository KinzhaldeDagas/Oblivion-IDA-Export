int __thiscall sub_4E55E0(int *this, float *a2)
{
  int v2; // edi
  int XCoordinate; // esi
  int YCoordinate; // eax
  int *v6; // esi
  float *v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // ebx
  int v12; // [esp+8h] [ebp-1Ch]
  int v13; // [esp+Ch] [ebp-18h]
  int v14; // [esp+10h] [ebp-14h]
  float v15; // [esp+10h] [ebp-14h]
  float v16; // [esp+14h] [ebp-10h]
  float v17; // [esp+18h] [ebp-Ch]
  float v18; // [esp+1Ch] [ebp-8h]
  float v19; // [esp+20h] [ebp-4h]

  v2 = 0;
  v12 = 0;
  if ( !*(this + 9) )
    return 0;
  v13 = (int)*a2;
  v14 = (int)a2[1];
  XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)*(this + 8));
  YCoordinate = TESObjectCELL_GetYCoordinate((TESObjectCELL *)*(this + 8));
  if ( v13 >> 0xC == XCoordinate && v14 >> 0xC == YCoordinate )
    return 0;
  v6 = this + 0xA;
  v15 = flt_A32048;
  if ( this == (int *)0xFFFFFFD8 )
    return 0;
  while ( v6[1] || *v6 )
  {
    v7 = (float *)*v6;
    v8 = *(unsigned __int16 *)*v6;
    v9 = *(_DWORD *)(*(this + 9) + 4);
    v10 = *(_DWORD *)(v9 + 4 * v8);
    if ( v10 )
    {
      if ( !sub_67ED70(*(_BYTE **)(v9 + 4 * v8)) )
      {
        v17 = v7[1] - *a2;
        v18 = v7[2] - a2[1];
        v19 = v7[3] - a2[2];
        v16 = v17 * v17 + v18 * v18 + v19 * v19;
        if ( v15 > (double)v16 )
        {
          v15 = v17 * v17 + v18 * v18 + v19 * v19;
          v12 = v10;
        }
      }
    }
    v6 = (int *)v6[1];
    if ( !v6 )
      return v12;
    v2 = v12;
  }
  return v2;
}
