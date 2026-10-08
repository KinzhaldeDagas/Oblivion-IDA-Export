char __thiscall sub_4A6990(float *this, float *a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st7
  double v5; // st6
  bool v6; // c0
  bool v7; // c3
  double v8; // st7
  double v10; // st7
  double v11; // st6
  bool v12; // c0
  bool v13; // c3
  double v14; // st6
  double v15; // st5

  v2 = *this; /*0x4a69a0*/
  v3 = *a2; /*0x4a69a4*/
  if ( v3 >= v2 ) /*0x4a69ae*/
  {
    v10 = v3 - v2; /*0x4a69cb*/
    v11 = dbl_A30E40; /*0x4a69cd*/
    v12 = v11 < v10; /*0x4a69d3*/
    v13 = v11 == v10; /*0x4a69d3*/
    v8 = v11; /*0x4a69d7*/
    if ( v12 || v13 ) /*0x4a69d9*/
      return 0; /*0x4a69dc*/
  }
  else
  {
    v4 = v2 - v3; /*0x4a69b0*/
    v5 = dbl_A30E40; /*0x4a69b2*/
    v6 = v5 < v4; /*0x4a69b8*/
    v7 = v5 == v4; /*0x4a69b8*/
    v8 = v5; /*0x4a69bc*/
    if ( v6 || v7 ) /*0x4a69be*/
      return 0; /*0x4a69c8*/
  }
  v14 = *(this + 1); /*0x4a69eb*/
  v15 = a2[1]; /*0x4a69ef*/
  if ( v15 >= v14 ) /*0x4a69f9*/
  {
    if ( v15 - v14 >= v8 ) /*0x4a6a15*/
      return 0; /*0x4a6a15*/
  }
  else if ( v14 - v15 >= v8 ) /*0x4a6a04*/
  {
    return 0; /*0x4a6a09*/
  }
  return 1; /*0x4a69c8*/
}
