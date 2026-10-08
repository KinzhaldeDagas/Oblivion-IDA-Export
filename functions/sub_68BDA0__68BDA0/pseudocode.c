void __thiscall sub_68BDA0(NiSurfaceData **this, NiSurfaceData *a2, NiDX92DBufferData *a3)
{
  NiDX92DBufferData *v3; // esi
  NiSurfaceData *v6; // edi
  NiSurfaceData *SurfaceData; // [esp+10h] [ebp+8h]

  v3 = (NiDX92DBufferData *)a2; /*0x68bda2*/
  if ( a2 ) /*0x68bdaa*/
  {
    if ( a3 ) /*0x68bdb3*/
    {
      SurfaceData = NiDX92DBufferData::GetSurfaceData(a3); /*0x68bdbc*/
      do /*0x68bde6*/
      {
        v6 = NiDX92DBufferData::GetSurfaceData(v3); /*0x68bdca*/
        if ( v3 ) /*0x68bdcc*/
        {
          Shared_NoOpVirtual_60D0A0(v3); /*0x68bdd0*/
          FormHeapFree((unsigned int)v3); /*0x68bdd6*/
        }
        if ( v3 == a3 ) /*0x68bde0*/
          break; /*0x68bde0*/
        v3 = (NiDX92DBufferData *)v6; /*0x68bde4*/
      }
      while ( v6 ); /*0x68bde6*/
      if ( a2 == *this ) /*0x68bdf0*/
        *this = SurfaceData; /*0x68bdf6*/
      if ( a3 == (NiDX92DBufferData *)*(this + 1) ) /*0x68bdfc*/
        *(this + 1) = 0; /*0x68bdfe*/
    }
  }
}
