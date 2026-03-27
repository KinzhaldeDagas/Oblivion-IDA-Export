_DWORD *__cdecl sub_95D8B0(unsigned __int16 a1, float *a2)
{
  _DWORD *v2; // eax
  _DWORD *result; // eax
  float v4[15]; // [esp+0h] [ebp-3Ch] BYREF

  if ( !a1 || !a2 )
    return 0;
  sub_96E980(v4, a1, a2);
  v2 = (_DWORD *)FormHeapAlloc(0x40u);
  if ( v2 )
    result = sub_961580(v2, &flt_B258F4, &Vector3_InitValue_, &dword_B258D0, &dword_B258DC, &dword_B258E8);
  else
    result = 0;
  qmemcpy(result + 1, v4, 0x3Cu);
  return result;
}
