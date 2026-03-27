char __thiscall sub_68BE10(NiSurfaceData **this, float *a2, int a3)
{
  NiSurfaceData *SurfaceData; // esi
  NiDX92DBufferData *i; // edi
  float *v7; // eax
  char result; // al

  SurfaceData = *this;
  for ( i = 0; SurfaceData; SurfaceData = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)SurfaceData) )
  {
    v7 = (float *)sub_6899C0((char *)SurfaceData);
    if ( sub_47D810(a2, v7, 1.0) )
      break;
    if ( !--a3 )
    {
      SurfaceData = 0;
      break;
    }
    i = (NiDX92DBufferData *)SurfaceData;
  }
  result = 0;
  if ( SurfaceData )
  {
    if ( i )
      sub_68BDA0(this, (NiDX92DBufferData *)*this, i);
    return 1;
  }
  return result;
}
