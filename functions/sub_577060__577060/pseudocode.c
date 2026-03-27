float *__thiscall sub_577060(void *this)
{
  float *v2; // eax
  float *v3; // edi

  v2 = (float *)FormHeapAlloc(0x38u);
  if ( v2 )
    v3 = sub_576F30(
           v2,
           *(_DWORD *)this,
           *((_BYTE *)this + 4),
           *((_DWORD *)this + 2),
           *((_DWORD *)this + 3),
           *((_DWORD *)this + 4),
           *((_DWORD *)this + 5),
           *((_DWORD *)this + 6));
  else
    v3 = 0;
  BSStringT_Set((BSStringT *)(v3 + 7), *((const char **)this + 7), 0);
  v3[9] = *((float *)this + 9);
  v3[0xA] = *((float *)this + 0xA);
  v3[0xB] = *((float *)this + 0xB);
  v3[0xD] = *((float *)this + 0xD);
  v3[0xC] = 0.0;
  return v3;
}
