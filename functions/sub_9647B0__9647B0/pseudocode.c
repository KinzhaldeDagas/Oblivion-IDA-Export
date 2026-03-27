float *__thiscall sub_9647B0(float *this, float *a2, int a3, int a4, int a5, float a6, float a7, float a8)
{
  double v8; // st7
  int v10; // edx
  double v11; // st6
  double v12; // st5
  bool v13; // al
  double v14; // st4
  double v15; // st3
  double v16; // st3
  double v17; // st7
  float v19; // [esp+4h] [ebp+4h]
  float v20; // [esp+4h] [ebp+4h]
  float v21; // [esp+4h] [ebp+4h]
  float v22; // [esp+4h] [ebp+4h]
  float v23; // [esp+4h] [ebp+4h]
  float v24; // [esp+4h] [ebp+4h]

  v8 = a6;
  *a2 = Vector3_InitValue_;
  a2[1] = *(&Vector3_InitValue_ + 1);
  a2[2] = dword_B3F9B0;
  v10 = 0;
  v11 = a8;
  v12 = a7;
  v13 = Vector3_InitValue_ == a6 && *(&Vector3_InitValue_ + 1) == v12 && dword_B3F9B0 == v11;
  v14 = flt_AA3B44;
  if ( !v13 )
  {
    v19 = *(this + 5) * v12 + *(this + 4) * v8 + *(this + 6) * v11;
    v20 = fabs(v19);
    if ( v20 <= v14 )
      goto LABEL_14;
  }
  if ( a3 == 1 )
  {
    *a2 = *a2 + *(this + 4);
    a2[1] = *(this + 5) + a2[1];
    v15 = *(this + 6) + a2[2];
  }
  else
  {
    if ( a3 != 0xFFFFFFFF )
      goto LABEL_13;
    *a2 = *a2 - *(this + 4);
    a2[1] = a2[1] - *(this + 5);
    v15 = a2[2] - *(this + 6);
  }
  a2[2] = v15;
  v10 = 1;
LABEL_13:
  if ( v13 )
    goto LABEL_15;
LABEL_14:
  v21 = *(this + 8) * v12 + v8 * *(this + 7) + *(this + 9) * v11;
  v22 = fabs(v21);
  if ( v22 > v14 )
  {
LABEL_15:
    if ( a4 == 1 )
    {
      *a2 = *a2 + *(this + 7);
      a2[1] = *(this + 8) + a2[1];
      v16 = *(this + 9) + a2[2];
    }
    else
    {
      if ( a4 != 0xFFFFFFFF )
        goto LABEL_20;
      *a2 = *a2 - *(this + 7);
      a2[1] = a2[1] - *(this + 8);
      v16 = a2[2] - *(this + 9);
    }
    a2[2] = v16;
    ++v10;
LABEL_20:
    if ( v13 )
      goto LABEL_22;
  }
  v23 = v11 * *(this + 0xC) + v8 * *(this + 0xA) + v12 * *(this + 0xB);
  v24 = fabs(v23);
  if ( v14 >= v24 )
    goto LABEL_27;
LABEL_22:
  if ( a5 == 1 )
  {
    *a2 = *a2 + *(this + 0xA);
    a2[1] = *(this + 0xB) + a2[1];
    v17 = *(this + 0xC) + a2[2];
  }
  else
  {
    if ( a5 != 0xFFFFFFFF )
      goto LABEL_27;
    *a2 = *a2 - *(this + 0xA);
    a2[1] = a2[1] - *(this + 0xB);
    v17 = a2[2] - *(this + 0xC);
  }
  a2[2] = v17;
  ++v10;
LABEL_27:
  if ( v10 != 1 )
    sub_43F350(a2);
  return a2;
}
