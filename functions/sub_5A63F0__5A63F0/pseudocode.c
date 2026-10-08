unsigned int __cdecl sub_5A63F0(int a1, int a2)
{
  float v3; // [esp+4h] [ebp-10h] BYREF
  float v4; // [esp+8h] [ebp-Ch] BYREF
  float v5; // [esp+Ch] [ebp-8h] BYREF
  float v6; // [esp+10h] [ebp-4h] BYREF

  v3 = 0.0; /*0x5a63fa*/
  v4 = 0.0; /*0x5a63fe*/
  v5 = 0.0; /*0x5a6404*/
  v6 = 0.0; /*0x5a6408*/
  if ( (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable((_DWORD *)a1) ) /*0x5a640c*/
    sub_662AA0((Actor *)reference, *(void **)(a1 + 8), &v3, &v5); /*0x5a6429*/
  else
    v3 = *(float *)(a1 + 0x1C) - *(float *)(a1 + 4); /*0x5a6436*/
  if ( (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable((_DWORD *)a2) ) /*0x5a6440*/
    sub_662AA0((Actor *)reference, *(void **)(a2 + 8), &v4, &v6); /*0x5a645d*/
  else
    v4 = *(float *)(a2 + 0x1C) - *(float *)(a2 + 4); /*0x5a646a*/
  if ( v4 >= (double)v3 ) /*0x5a647e*/
    return v4 != v3; /*0x5a6492*/
  else
    return 0xFFFFFFFF; /*0x5a6482*/
}
