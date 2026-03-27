void __thiscall sub_68BE80(NiSurfaceData **this, NiDX92DBufferData *a2, NiSurfaceData *a3)
{
  NiSurfaceData *SurfaceData; // eax

  if ( a2 )
  {
    if ( a3 )
    {
      SurfaceData = NiDX92DBufferData::GetSurfaceData(a2);
      sub_6A2FD0(a3, (int)SurfaceData);
    }
    if ( a2 == (NiDX92DBufferData *)*this )
      *this = NiDX92DBufferData::GetSurfaceData(a2);
    if ( a2 == (NiDX92DBufferData *)*(this + 1) )
      *(this + 1) = a3;
    TESTexture::ClearComponentReferences(a2);
    FormHeapFree((unsigned int)a2);
  }
}
