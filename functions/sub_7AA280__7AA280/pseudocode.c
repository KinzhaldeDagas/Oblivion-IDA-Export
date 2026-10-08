void __thiscall sub_7AA280(_DWORD *this)
{
  double v1; // st7
  int v3; // ebx
  signed int v4; // ebp
  unsigned int *v5; // esi
  char v6; // [esp+Bh] [ebp-9h]
  float v7; // [esp+Ch] [ebp-8h]
  unsigned int v8; // [esp+10h] [ebp-4h]

  v1 = 0.0; /*0x7aa283*/
  v7 = 0.0; /*0x7aa287*/
  v3 = 0; /*0x7aa28f*/
  v8 = 0x7FFFFFFF; /*0x7aa291*/
  v6 = 1; /*0x7aa299*/
  v4 = 0; /*0x7aa29e*/
  v5 = this + 0x35; /*0x7aa2a0*/
  do /*0x7aa30c*/
  {
    if ( *((_BYTE *)v5 + 0xFFFFFFF8) ) /*0x7aa2a6*/
    {
      sub_7A99F0(this, v4); /*0x7aa2b1*/
      v1 = 0.0; /*0x7aa2b6*/
      if ( *((_BYTE *)v5 + 0xFFFFFFF8) ) /*0x7aa2b8*/
      {
        ++v5[1]; /*0x7aa2be*/
        *((_BYTE *)this + 0xC0) = 1; /*0x7aa2c2*/
        v6 = 0; /*0x7aa2c9*/
      }
    }
    if ( v1 < *((float *)v5 + 0xFFFFFFFF) || *v5 ) /*0x7aa2d8*/
    {
      if ( *v5 < v8 ) /*0x7aa2e3*/
        v8 = *v5; /*0x7aa2e5*/
      if ( v7 < (double)*((float *)v5 + 0xFFFFFFFF) ) /*0x7aa2f7*/
        v7 = *((float *)v5 + 0xFFFFFFFF); /*0x7aa2fc*/
    }
    v3 += v5[1]; /*0x7aa300*/
    ++v4; /*0x7aa303*/
    v5 += 5; /*0x7aa306*/
  }
  while ( v4 < 3 ); /*0x7aa30c*/
  if ( v6 ) /*0x7aa313*/
  {
    *((float *)this + 0x31) = v7; /*0x7aa320*/
    *((_BYTE *)this + 0xC0) = 0; /*0x7aa326*/
    if ( v8 < 0xA ) /*0x7aa32d*/
      *((float *)this + 0x31) = 1.0; /*0x7aa331*/
    *(this + 0x2F) = v8; /*0x7aa337*/
    g_rendererSunOcclusionWaitFrames = v3; /*0x7aa33d*/
    *((float *)this + 0x34) = v1; /*0x7aa343*/
    *((float *)this + 0x39) = v1; /*0x7aa34b*/
    *((float *)this + 0x3E) = v1; /*0x7aa351*/
    *(this + 0x35) = 0; /*0x7aa357*/
    *(this + 0x3A) = 0; /*0x7aa35d*/
    *(this + 0x3F) = 0; /*0x7aa363*/
  }
}
