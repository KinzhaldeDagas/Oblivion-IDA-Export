void __thiscall sub_68C0F0(NiDX92DBufferData **this, NiDX92DBufferData *a2)
{
  NiDX92DBufferData *v2; // esi
  NiDX92DBufferData *SurfaceData; // eax
  NiDX92DBufferData *v5; // ebx
  NiSurfaceData *v6; // edi

  v2 = a2; /*0x68c0f2*/
  if ( a2 ) /*0x68c0fa*/
  {
    SurfaceData = *this; /*0x68c0fc*/
    if ( a2 == *this ) /*0x68c101*/
    {
      *this = 0; /*0x68c103*/
      *(this + 1) = 0; /*0x68c10a*/
    }
    v5 = 0; /*0x68c112*/
    if ( SurfaceData ) /*0x68c116*/
    {
      while ( SurfaceData != a2 ) /*0x68c11a*/
      {
        v5 = SurfaceData; /*0x68c11e*/
        SurfaceData = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(SurfaceData); /*0x68c120*/
        if ( !SurfaceData ) /*0x68c127*/
          goto LABEL_11; /*0x68c127*/
      }
      do /*0x68c151*/
      {
        v6 = NiDX92DBufferData::GetSurfaceData(v2); /*0x68c139*/
        if ( v2 ) /*0x68c13b*/
        {
          Shared_NoOpVirtual_60D0A0(v2); /*0x68c13f*/
          FormHeapFree((unsigned int)v2); /*0x68c145*/
        }
        v2 = (NiDX92DBufferData *)v6; /*0x68c14f*/
      }
      while ( v6 ); /*0x68c151*/
LABEL_11:
      if ( v5 ) /*0x68c156*/
      {
        sub_6A2FD0(v5, 0); /*0x68c15c*/
        *(this + 1) = v5; /*0x68c161*/
      }
    }
  }
}
