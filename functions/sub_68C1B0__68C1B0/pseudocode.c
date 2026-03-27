void __thiscall sub_68C1B0(NiSurfaceData **this)
{
  NiSurfaceData *i; // ebx
  NiDX92DBufferData *v2; // ebp
  NiSurfaceData *SurfaceData; // esi
  float *v4; // edi
  float *v5; // ecx
  NiDX92DBufferData *v6; // esi
  NiSurfaceData *v7; // eax

  for ( i = *this; i; i = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)i) )
  {
    v2 = 0;
    SurfaceData = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)i);
    if ( SurfaceData )
    {
      do
      {
        v4 = (float *)sub_6899C0((char *)i);
        v5 = (float *)sub_6899C0((char *)SurfaceData);
        if ( *v4 == *v5 && v4[1] == v5[1] && v4[2] == v5[2] )
          v2 = (NiDX92DBufferData *)SurfaceData;
        SurfaceData = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)SurfaceData);
      }
      while ( SurfaceData );
      if ( v2 )
      {
        v6 = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)i);
        v7 = NiDX92DBufferData::GetSurfaceData(v2);
        sub_6A2FD0(i, (int)v7);
        if ( NiDX92DBufferData::GetSurfaceData(v2) )
        {
          sub_68BDA0(this, v6, v2);
        }
        else
        {
          sub_68C0F0((NiDX92DBufferData **)this, v6);
          *(this + 1) = i;
        }
      }
    }
  }
}
