char __thiscall sub_68BFB0(_DWORD *this, NiDX92DBufferData **a2, NiDX92DBufferData **a3)
{
  NiDX92DBufferData *SurfaceData; // esi
  NiDX92DBufferData *v5; // ebx
  NiSurfaceData *v6; // ebp
  char result; // al

  *a2 = 0; /*0x68bfbd*/
  *a3 = 0; /*0x68bfc3*/
  SurfaceData = (NiDX92DBufferData *)*this; /*0x68bfc9*/
  v5 = 0; /*0x68bfcb*/
  if ( *this ) /*0x68bfc9*/
  {
    do /*0x68bfed*/
    {
      v6 = (NiSurfaceData *)*(this + 1); /*0x68bfd2*/
      if ( NiDX92DBufferData::GetSurfaceData(SurfaceData) == v6 ) /*0x68bfde*/
        break; /*0x68bfde*/
      v5 = SurfaceData; /*0x68bfe2*/
      SurfaceData = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(SurfaceData); /*0x68bfe9*/
    }
    while ( SurfaceData ); /*0x68bfed*/
  }
  result = 0; /*0x68bff0*/
  if ( SurfaceData ) /*0x68bff4*/
  {
    *a2 = v5; /*0x68bffe*/
    *a3 = SurfaceData; /*0x68c000*/
    return 1; /*0x68c002*/
  }
  return result; /*0x68c004*/
}
