char __thiscall sub_68C010(NiDX92DBufferData **this, unsigned int a2)
{
  NiDX92DBufferData *SurfaceData; // eax
  unsigned int v3; // esi

  SurfaceData = *this; /*0x68c010*/
  v3 = 0; /*0x68c013*/
  if ( *this ) /*0x68c010*/
  {
    while ( 1 ) /*0x68c022*/
    {
      ++v3; /*0x68c022*/
      SurfaceData = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(SurfaceData); /*0x68c025*/
      if ( !SurfaceData ) /*0x68c02c*/
        break; /*0x68c02c*/
      if ( v3 >= a2 ) /*0x68c030*/
        return 0; /*0x68c036*/
    }
  }
  return 1; /*0x68c032*/
}
