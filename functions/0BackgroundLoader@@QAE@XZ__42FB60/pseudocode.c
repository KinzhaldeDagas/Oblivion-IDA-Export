BackgroundLoader *__thiscall BackgroundLoader::BackgroundLoader(
        BackgroundLoader *this,
        char a2,
        int a3,
        LONG lMaximumCount,
        int a5,
        LONG a6)
{
  LONG *v7; // eax
  LONG *v8; // eax

  *(_DWORD *)this = &BackgroundLoader::`vftable'; /*0x42fb8a*/
  *((_BYTE *)this + 4) = 0; /*0x42fb90*/
  *((_DWORD *)this + 2) = 0; /*0x42fb93*/
  *((_DWORD *)this + 3) = 0; /*0x42fb96*/
  if ( a2 ) /*0x42fb99*/
  {
    v7 = (LONG *)FormHeapAlloc(0x44u); /*0x42fb9d*/
    if ( v7 ) /*0x42fbaf*/
      v8 = sub_42FA50(v7, (int)this, a3, lMaximumCount, a5, a6); /*0x42fbc8*/
    else
      v8 = 0; /*0x42fbcf*/
    *((_DWORD *)this + 3) = v8; /*0x42fbd1*/
  }
  return this; /*0x42fbd6*/
}
