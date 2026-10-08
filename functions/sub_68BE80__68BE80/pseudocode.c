void __thiscall sub_68BE80(NiSurfaceData **this, NiSurfaceData *a2, NiSurfaceData *a3)
{
  NiSurfaceData *SurfaceData; // eax

  if ( a2 ) /*0x68be8a*/
  {
    if ( a3 ) /*0x68be93*/
    {
      SurfaceData = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)a2); /*0x68be97*/
      sub_6A2FD0(a3, (int)SurfaceData); /*0x68be9f*/
    }
    if ( a2 == *this ) /*0x68bea6*/
      *this = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)a2); /*0x68beaf*/
    if ( a2 == *(this + 1) ) /*0x68beb4*/
      *(this + 1) = a3; /*0x68beb6*/
    Shared_NoOpVirtual_60D0A0(a2); /*0x68bebb*/
    FormHeapFree((unsigned int)a2); /*0x68bec1*/
  }
}
