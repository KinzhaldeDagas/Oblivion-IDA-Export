void __thiscall sub_68C1B0(NiSurfaceData **this)
{
  NiSurfaceData *i; // ebx
  NiDX92DBufferData *v2; // ebp
  NiSurfaceData *SurfaceData; // esi
  float *Head; // edi
  float *v5; // ecx
  NiSurfaceData *v6; // esi
  NiSurfaceData *v7; // eax

  for ( i = *this; i; i = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)i) ) /*0x68c1b2*/
  {
    v2 = 0; /*0x68c1c5*/
    SurfaceData = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)i); /*0x68c1cc*/
    if ( SurfaceData ) /*0x68c1d0*/
    {
      do /*0x68c220*/
      {
        Head = (float *)EmbeddedList_GetHead((char *)i); /*0x68c1df*/
        v5 = (float *)EmbeddedList_GetHead((char *)SurfaceData); /*0x68c1e6*/
        if ( *Head == *v5 && Head[1] == v5[1] && Head[2] == v5[2] ) /*0x68c211*/
          v2 = (NiDX92DBufferData *)SurfaceData; /*0x68c213*/
        SurfaceData = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)SurfaceData); /*0x68c21c*/
      }
      while ( SurfaceData ); /*0x68c220*/
      if ( v2 ) /*0x68c224*/
      {
        v6 = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)i); /*0x68c22f*/
        v7 = NiDX92DBufferData::GetSurfaceData(v2); /*0x68c231*/
        sub_6A2FD0(i, (int)v7); /*0x68c239*/
        if ( NiDX92DBufferData::GetSurfaceData(v2) ) /*0x68c240*/
        {
          sub_68BDA0(this, v6, v2); /*0x68c260*/
        }
        else
        {
          sub_68C0F0((NiDX92DBufferData **)this, (NiDX92DBufferData *)v6); /*0x68c250*/
          *(this + 1) = i; /*0x68c255*/
        }
      }
    }
  }
}
