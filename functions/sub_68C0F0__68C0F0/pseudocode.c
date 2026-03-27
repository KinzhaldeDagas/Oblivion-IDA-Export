void __thiscall sub_68C0F0(NiDX92DBufferData **this, NiDX92DBufferData *a2)
{
  NiDX92DBufferData *v2; // esi
  NiDX92DBufferData *SurfaceData; // eax
  NiDX92DBufferData *v5; // ebx
  NiSurfaceData *v6; // edi

  v2 = a2;
  if ( a2 )
  {
    SurfaceData = *this;
    if ( a2 == *this )
    {
      *this = 0;
      *(this + 1) = 0;
    }
    v5 = 0;
    if ( SurfaceData )
    {
      while ( SurfaceData != a2 )
      {
        v5 = SurfaceData;
        SurfaceData = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(SurfaceData);
        if ( !SurfaceData )
          goto LABEL_11;
      }
      do
      {
        v6 = NiDX92DBufferData::GetSurfaceData(v2);
        if ( v2 )
        {
          TESTexture::ClearComponentReferences(v2);
          FormHeapFree((unsigned int)v2);
        }
        v2 = (NiDX92DBufferData *)v6;
      }
      while ( v6 );
LABEL_11:
      if ( v5 )
      {
        sub_6A2FD0(v5, 0);
        *(this + 1) = v5;
      }
    }
  }
}
