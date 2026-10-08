float *__thiscall sub_577060(void *this)
{
  float *v2; // eax
  float *v3; // edi

  v2 = (float *)FormHeapAlloc(0x38u); /*0x577087*/
  if ( v2 ) /*0x57709d*/
    v3 = sub_576F30( /*0x5770ce*/
           v2,
           *(_DWORD *)this,
           *((_BYTE *)this + 4),
           *((_DWORD *)this + 2),
           *((_DWORD *)this + 3),
           *((_DWORD *)this + 4),
           *((_DWORD *)this + 5),
           *((_DWORD *)this + 6));
  else
    v3 = 0; /*0x5770d2*/
  BSStringT_Set((BSStringT *)(v3 + 7), *((const char **)this + 7), 0); /*0x5770e5*/
  v3[9] = *((float *)this + 9); /*0x5770ed*/
  v3[0xA] = *((float *)this + 0xA); /*0x5770f3*/
  v3[0xB] = *((float *)this + 0xB); /*0x5770f9*/
  v3[0xD] = *((float *)this + 0xD); /*0x5770ff*/
  v3[0xC] = 0.0; /*0x577102*/
  return v3; /*0x57710b*/
}
