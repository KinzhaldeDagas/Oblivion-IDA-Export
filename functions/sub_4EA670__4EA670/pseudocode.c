_DWORD *__thiscall sub_4EA670(_DWORD *this, float *a2, _DWORD *a3)
{
  int v4; // eax
  _DWORD *v6; // [esp+8h] [ebp-10h]
  float v7; // [esp+14h] [ebp-4h]
  float v8; // [esp+1Ch] [ebp+4h]
  float v9; // [esp+1Ch] [ebp+4h]
  float v10; // [esp+1Ch] [ebp+4h]

  v7 = *a2 * dbl_A47A20;
  v8 = dbl_A47A20 * a2[1];
  v9 = floor(v8);
  v6 = (_DWORD *)Double_To_SInt32(v9);
  v10 = floor(v7);
  v4 = Double_To_SInt32(v10);
  return sub_4EA580(this, v4, v6, a3);
}
