void __thiscall sub_8ED200(const void **this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ecx
  const void **v5; // esi
  const void *v6; // eax
  _DWORD *v7; // ecx

  if ( *a2 ) /*0x8ed206*/
  {
    if ( !sub_88D780(this, (int)a2) ) /*0x8ed20e*/
    {
      v3 = (int)*(this + 0x4A); /*0x8ed217*/
      v4 = (int)*(this + 0x49); /*0x8ed21d*/
      v5 = this + 0x48; /*0x8ed223*/
      if ( v4 == (v3 & 0x3FFFFFFF) ) /*0x8ed230*/
        sub_8A6EE0(v5, 4); /*0x8ed235*/
      v6 = v5[1]; /*0x8ed23d*/
      v7 = (char *)*v5 + 4 * (_DWORD)v6; /*0x8ed242*/
      v5[1] = (char *)v6 + 1; /*0x8ed246*/
      *v7 = a2; /*0x8ed249*/
    }
  }
}
