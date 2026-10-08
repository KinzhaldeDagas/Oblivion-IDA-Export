float *sub_6E7E70()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x20u); /*0x6e7e94*/
  v1 = v0; /*0x6e7e99*/
  if ( !v0 ) /*0x6e7eac*/
    return 0; /*0x6e7edb*/
  sub_6E7F50(v0, 0); /*0x6e7eb2*/
  *(_DWORD *)v1 = &NiBoolTimelineInterpolator::`vftable'; /*0x6e7eb7*/
  v1[6] = 0.0; /*0x6e7ebd*/
  *((_BYTE *)v1 + 0x1C) = 0; /*0x6e7ec4*/
  return v1; /*0x6e7eca*/
}
