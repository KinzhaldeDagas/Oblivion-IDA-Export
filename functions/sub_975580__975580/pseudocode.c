float *__usercall sub_975580@<eax>(float *a1@<eax>, float *a2@<edx>, float *a3@<ecx>, float *a4, float *a5)
{
  double v6; // st6
  double v7; // st7
  double v9; // st7
  float v10; // [esp+Ch] [ebp-Ch] BYREF
  float v11; // [esp+10h] [ebp-8h]
  float v12; // [esp+14h] [ebp-4h]
  float v13; // [esp+20h] [ebp+8h]
  float v14; // [esp+20h] [ebp+8h]
  float v15; // [esp+20h] [ebp+8h]
  float v16; // [esp+20h] [ebp+8h]
  float v17; // [esp+20h] [ebp+8h]
  float v18; // [esp+20h] [ebp+8h]

  v10 = *a4 - a3[0xC]; /*0x975595*/
  v11 = a4[1] - a3[0xD]; /*0x9755a1*/
  v12 = a4[2] - a3[0xE]; /*0x9755ab*/
  v13 = a5[1] * v10; /*0x9755bc*/
  v6 = v13; /*0x9755c0*/
  v14 = *a5 * v11; /*0x9755d0*/
  if ( v14 > v6 ) /*0x9755e1*/
  {
    v17 = v11 * a5[2]; /*0x97562d*/
    v9 = v17; /*0x975631*/
    v18 = a5[1] * v12; /*0x97563c*/
    if ( v18 <= v9 ) /*0x97564b*/
      return sub_974E40(2, (int)a4, (int)a5, 0, (int)a3, 1, &v10, a1, a2); /*0x97566a*/
  }
  else
  {
    v15 = v10 * a5[2]; /*0x9755e8*/
    v7 = v15; /*0x9755ec*/
    v16 = *a5 * v12; /*0x9755f6*/
    if ( v16 <= v7 ) /*0x975605*/
      return sub_974E40(1, (int)a4, (int)a5, 2, (int)a3, 0, &v10, a1, a2); /*0x975627*/
  }
  return sub_974E40(0, (int)a4, (int)a5, 1, (int)a3, 2, &v10, a1, a2); /*0x975621*/
}
