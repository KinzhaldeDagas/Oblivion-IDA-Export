char __thiscall sub_68BFB0(_DWORD *this, NiDX92DBufferData **a2, NiDX92DBufferData **a3)
{
  NiDX92DBufferData *SurfaceData; // esi
  NiDX92DBufferData *v5; // ebx
  NiSurfaceData *v6; // ebp
  char result; // al

  *a2 = 0;
  *a3 = 0;
  SurfaceData = (NiDX92DBufferData *)*this;
  v5 = 0;
  if ( *this )
  {
    do
    {
      v6 = (NiSurfaceData *)*(this + 1);
      if ( NiDX92DBufferData::GetSurfaceData(SurfaceData) == v6 )
        break;
      v5 = SurfaceData;
      SurfaceData = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(SurfaceData);
    }
    while ( SurfaceData );
  }
  result = 0;
  if ( SurfaceData )
  {
    *a2 = v5;
    *a3 = SurfaceData;
    return 1;
  }
  return result;
}
