TeleportData *__thiscall sub_68C280(TeleportData **this, NiPoint3 *a2, NiDX92DBufferData *a3)
{
  NiDX92DBufferData *v4; // ebx
  NiDX92DBufferData *v5; // eax
  TeleportData *v6; // esi
  NiSurfaceData *SurfaceData; // eax
  NiDX92DBufferData *v9; // eax

  v4 = a3;
  if ( a3 )
  {
    if ( !sub_68BF60((NiDX92DBufferData **)this, a3, &a3) )
      return sub_68BED0(this, a2);
    v5 = (NiDX92DBufferData *)FormHeapAlloc(0x14u);
    a3 = v5;
    if ( v5 )
      v6 = (TeleportData *)sub_68CB30(v5);
    else
      v6 = 0;
    TeleportData::SetTeleportPosition(v6, a2);
    SurfaceData = NiDX92DBufferData::GetSurfaceData(v4);
    sub_6A2FD0(v6, (int)SurfaceData);
    sub_6A2FD0(v4, (int)v6);
  }
  else
  {
    v9 = (NiDX92DBufferData *)FormHeapAlloc(0x14u);
    a3 = v9;
    if ( v9 )
      v6 = (TeleportData *)sub_68CB30(v9);
    else
      v6 = 0;
    TeleportData::SetTeleportPosition(v6, a2);
    if ( *this )
      sub_6A2FD0(v6, (int)*this);
    else
      *(this + 1) = v6;
    *this = v6;
  }
  return v6;
}
