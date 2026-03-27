char __thiscall sub_68C010(NiDX92DBufferData **this, unsigned int a2)
{
  NiDX92DBufferData *SurfaceData; // eax
  unsigned int v3; // esi

  SurfaceData = *this;
  v3 = 0;
  if ( *this )
  {
    while ( 1 )
    {
      ++v3;
      SurfaceData = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(SurfaceData);
      if ( !SurfaceData )
        break;
      if ( v3 >= a2 )
        return 0;
    }
  }
  return 1;
}
