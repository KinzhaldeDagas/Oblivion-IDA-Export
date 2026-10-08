bool __thiscall sub_4C1080(TESObjectCELL **this, signed int *a2, float *a3)
{
  int v4; // eax
  int v5; // esi
  TESObjectCELL *v6; // ecx
  int v7; // eax
  int v8; // eax
  TESObjectCELL *v9; // ecx
  double v10; // st6
  float v12; // [esp+8h] [ebp-Ch]
  float v13; // [esp+8h] [ebp-Ch]
  float v14; // [esp+Ch] [ebp-8h]
  float v15; // [esp+Ch] [ebp-8h]

  if ( !a2 ) /*0x4c108d*/
    return 1; /*0x4c108d*/
  v4 = (int)*(this + 9); /*0x4c1093*/
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 0x9C); /*0x4c109b*/
  }
  else
  {
    v6 = *(this + 8); /*0x4c10a3*/
    v5 = v6 ? TESObjectCELL_GetYCoordinate(v6) : 0;
  }
  v7 = (int)*(this + 9); /*0x4c10b5*/
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 0x98); /*0x4c10bc*/
  }
  else
  {
    v9 = *(this + 8); /*0x4c10c4*/
    v8 = v9 ? TESObjectCELL_GetXCoordinate(v9) : 0;
  }
  v10 = dbl_A30F70; /*0x4c10e3*/
  v12 = (double)(v8 << 0xC) + v10; /*0x4c10f5*/
  v14 = v10 + (double)(v5 << 0xC); /*0x4c10fd*/
  v13 = *a3 + v12; /*0x4c1107*/
  v15 = a3[1] + v14; /*0x4c1112*/
  return (double)a2[2] >= v13 && (double)a2[1] >= v15 && (double)*a2 <= v13 && (double)a2[3] <= v15; /*0x4c115e*/
}
