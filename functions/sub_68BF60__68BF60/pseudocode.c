char __thiscall sub_68BF60(NiDX92DBufferData **this, NiDX92DBufferData *a2, NiDX92DBufferData **a3)
{
  NiDX92DBufferData *SurfaceData; // ecx
  NiDX92DBufferData *i; // esi
  char result; // al

  *a3 = 0;
  SurfaceData = *this;
  for ( i = 0; SurfaceData; SurfaceData = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(SurfaceData) )
  {
    if ( SurfaceData == a2 )
      break;
    i = SurfaceData;
  }
  result = 0;
  if ( SurfaceData )
  {
    *a3 = i;
    return 1;
  }
  return result;
}
