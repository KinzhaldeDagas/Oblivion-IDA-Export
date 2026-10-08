float *__thiscall sub_6D0FE0(int this, float a2)
{
  unsigned int v2; // eax
  float *v3; // eax
  float v5; // [esp+1Ch] [ebp+4h]

  v2 = LOWORD(a2); /*0x6d1001*/
  v5 = 0.0; /*0x6d100c*/
  if ( v2 < *(unsigned __int16 *)(this + 0x4A) ) /*0x6d1012*/
    v5 = *(float *)(*(_DWORD *)(this + 0x44) + 4 * v2); /*0x6d101a*/
  v3 = (float *)FormHeapAlloc(0x18u); /*0x6d1020*/
  if ( v3 ) /*0x6d1036*/
    return sub_6D29E0(v3, v5); /*0x6d1042*/
  else
    return 0; /*0x6d1059*/
}
