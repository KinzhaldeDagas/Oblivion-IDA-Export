char __thiscall sub_68BF60(NiDX92DBufferData **this, NiDX92DBufferData *a2, NiDX92DBufferData **a3)
{
  NiDX92DBufferData *SurfaceData; // ecx
  NiDX92DBufferData *i; // esi
  char result; // al

  *a3 = 0; /*0x68bf65*/
  SurfaceData = *this; /*0x68bf6b*/
  for ( i = 0; SurfaceData; SurfaceData = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(SurfaceData) ) /*0x68bf72*/
  {
    if ( SurfaceData == a2 ) /*0x68bf82*/
      break; /*0x68bf82*/
    i = SurfaceData; /*0x68bf84*/
  }
  result = 0; /*0x68bf92*/
  if ( SurfaceData ) /*0x68bf96*/
  {
    *a3 = i; /*0x68bf98*/
    return 1; /*0x68bf9a*/
  }
  return result; /*0x68bf9c*/
}
