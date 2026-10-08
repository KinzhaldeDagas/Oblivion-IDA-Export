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

  v8 = a6; /*0x9647b5*/
  *a2 = g_zeroNiPoint3.x; /*0x9647c0*/
  a2[1] = g_zeroNiPoint3.y; /*0x9647c7*/
  a2[2] = g_zeroNiPoint3.z; /*0x9647cf*/
  v10 = 0; /*0x9647da*/
  v11 = a8; /*0x9647de*/
  v12 = a7; /*0x9647e5*/
  v13 = g_zeroNiPoint3.x == a6 && g_zeroNiPoint3.y == v12 && g_zeroNiPoint3.z == v11; /*0x96480d*/
  v14 = flt_AA3B44; /*0x964816*/
  if ( !v13 ) /*0x964824*/
  {
    v19 = *(this + 5) * v12 + *(this + 4) * v8 + *(this + 6) * v11; /*0x964839*/
    v20 = fabs(v19); /*0x964843*/
    if ( v20 <= v14 ) /*0x964852*/
      goto LABEL_14; /*0x964852*/
  }
  if ( a3 == 1 ) /*0x96485b*/
  {
    *a2 = *a2 + *(this + 4); /*0x964862*/
    a2[1] = *(this + 5) + a2[1]; /*0x96486a*/
    v15 = *(this + 6) + a2[2]; /*0x964870*/
  }
  else
  {
    if ( a3 != 0xFFFFFFFF ) /*0x964878*/
      goto LABEL_13; /*0x964878*/
    *a2 = *a2 - *(this + 4); /*0x96487f*/
    a2[1] = a2[1] - *(this + 5); /*0x964887*/
    v15 = a2[2] - *(this + 6); /*0x96488d*/
  }
  a2[2] = v15; /*0x964890*/
  v10 = 1; /*0x964893*/
LABEL_13:
  if ( v13 ) /*0x96489a*/
    goto LABEL_15; /*0x96489a*/
LABEL_14:
  v21 = *(this + 8) * v12 + v8 * *(this + 7) + *(this + 9) * v11; /*0x96489c*/
  v22 = fabs(v21); /*0x9648b9*/
  if ( v22 > v14 ) /*0x9648c8*/
  {
LABEL_15:
    if ( a4 == 1 ) /*0x9648d1*/
    {
      *a2 = *a2 + *(this + 7); /*0x9648d8*/
      a2[1] = *(this + 8) + a2[1]; /*0x9648e0*/
      v16 = *(this + 9) + a2[2]; /*0x9648e6*/
    }
    else
    {
      if ( a4 != 0xFFFFFFFF ) /*0x9648ee*/
        goto LABEL_20; /*0x9648ee*/
      *a2 = *a2 - *(this + 7); /*0x9648f5*/
      a2[1] = a2[1] - *(this + 8); /*0x9648fd*/
      v16 = a2[2] - *(this + 9); /*0x964903*/
    }
    a2[2] = v16; /*0x964906*/
    ++v10; /*0x964909*/
LABEL_20:
    if ( v13 ) /*0x96490e*/
      goto LABEL_22; /*0x96490e*/
  }
  v23 = v11 * *(this + 0xC) + v8 * *(this + 0xA) + v12 * *(this + 0xB); /*0x964910*/
  v24 = fabs(v23); /*0x964931*/
  if ( v14 >= v24 ) /*0x96493e*/
    goto LABEL_27; /*0x96493e*/
LABEL_22:
  if ( a5 == 1 ) /*0x964951*/
  {
    *a2 = *a2 + *(this + 0xA); /*0x964958*/
    a2[1] = *(this + 0xB) + a2[1]; /*0x964960*/
    v17 = *(this + 0xC) + a2[2]; /*0x964966*/
  }
  else
  {
    if ( a5 != 0xFFFFFFFF ) /*0x96496e*/
      goto LABEL_27; /*0x96496e*/
    *a2 = *a2 - *(this + 0xA); /*0x964975*/
    a2[1] = a2[1] - *(this + 0xB); /*0x96497d*/
    v17 = a2[2] - *(this + 0xC); /*0x964983*/
  }
  a2[2] = v17; /*0x964986*/
  ++v10; /*0x964989*/
LABEL_27:
  if ( v10 != 1 ) /*0x964990*/
    Vector3_NormalizeInPlace(a2); /*0x964994*/
  return a2; /*0x96499e*/
}
