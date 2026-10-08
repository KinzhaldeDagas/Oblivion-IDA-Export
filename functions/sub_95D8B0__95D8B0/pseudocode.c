float *__cdecl sub_95D8B0(unsigned __int16 a1, float *a2)
{
  float *v2; // eax
  float *result; // eax
  float v4[15]; // [esp+0h] [ebp-3Ch] BYREF

  if ( !a1 || !a2 ) /*0x95d8c2*/
    return 0; /*0x95d917*/
  sub_96E980(v4, a1, a2); /*0x95d8ca*/
  v2 = (float *)FormHeapAlloc(0x40u); /*0x95d8d1*/
  if ( v2 ) /*0x95d8db*/
    result = sub_961580(v2, &flt_B258F4, &g_zeroNiPoint3.x, &stru_B258D0.x, &stru_B258DC.x, &rhs.x); /*0x95d8f8*/
  else
    result = 0; /*0x95d8ff*/
  qmemcpy(result + 1, v4, 0x3Cu); /*0x95d90f*/
  return result; /*0x95d913*/
}
