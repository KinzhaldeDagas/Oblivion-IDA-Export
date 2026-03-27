void __thiscall sub_68BDA0(NiSurfaceData **this, NiDX92DBufferData *a2, NiDX92DBufferData *a3)
{
  NiDX92DBufferData *v3; // esi
  NiSurfaceData *v6; // edi
  NiSurfaceData *SurfaceData; // [esp+10h] [ebp+8h]

  v3 = a2;
  if ( a2 )
  {
    if ( a3 )
    {
      SurfaceData = NiDX92DBufferData::GetSurfaceData(a3);
      do
      {
        v6 = NiDX92DBufferData::GetSurfaceData(v3);
        if ( v3 )
        {
          TESTexture::ClearComponentReferences(v3);
          FormHeapFree((unsigned int)v3);
        }
        if ( v3 == a3 )
          break;
        v3 = (NiDX92DBufferData *)v6;
      }
      while ( v6 );
      if ( a2 == (NiDX92DBufferData *)*this )
        *this = SurfaceData;
      if ( a3 == (NiDX92DBufferData *)*(this + 1) )
        *(this + 1) = 0;
    }
  }
}
