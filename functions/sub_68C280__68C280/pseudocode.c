TeleportData *__thiscall sub_68C280(TeleportData **this, NiPoint3 *a2, NiDX92DBufferData *a3)
{
  NiDX92DBufferData *v4; // ebx
  NiDX92DBufferData *v5; // eax
  TeleportData *v6; // esi
  NiSurfaceData *SurfaceData; // eax
  NiDX92DBufferData *v9; // eax

  v4 = a3; /*0x68c2a5*/
  if ( a3 ) /*0x68c2ab*/
  {
    if ( !sub_68BF60((NiDX92DBufferData **)this, a3, &a3) ) /*0x68c2be*/
      return sub_68BED0(this, a2); /*0x68c332*/
    v5 = (NiDX92DBufferData *)FormHeapAlloc(0x14u); /*0x68c2c2*/
    a3 = v5; /*0x68c2ca*/
    if ( v5 ) /*0x68c2d8*/
      v6 = (TeleportData *)sub_68CB30(v5); /*0x68c2e1*/
    else
      v6 = 0; /*0x68c2e5*/
    TeleportData::SetTeleportPosition(v6, a2); /*0x68c2f6*/
    SurfaceData = NiDX92DBufferData::GetSurfaceData(v4); /*0x68c2fd*/
    sub_6A2FD0(v6, (int)SurfaceData); /*0x68c305*/
    sub_6A2FD0(v4, (int)v6); /*0x68c30d*/
  }
  else
  {
    v9 = (NiDX92DBufferData *)FormHeapAlloc(0x14u); /*0x68c337*/
    a3 = v9; /*0x68c33f*/
    if ( v9 ) /*0x68c34d*/
      v6 = (TeleportData *)sub_68CB30(v9); /*0x68c356*/
    else
      v6 = 0; /*0x68c35a*/
    TeleportData::SetTeleportPosition(v6, a2); /*0x68c36b*/
    if ( *this ) /*0x68c370*/
      sub_6A2FD0(v6, (int)*this); /*0x68c379*/
    else
      *(this + 1) = v6; /*0x68c380*/
    *this = v6; /*0x68c383*/
  }
  return v6; /*0x68c320*/
}
