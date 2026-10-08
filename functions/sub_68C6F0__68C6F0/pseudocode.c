NiSurfaceData *__thiscall sub_68C6F0(NiDX92DBufferData **this, NiSurfaceData *a2)
{
  NiSurfaceData *result; // eax
  NiSurfaceData *v4; // esi
  char *Head; // eax

  sub_68C0F0(this, *this); /*0x68c6f6*/
  result = a2; /*0x68c6fb*/
  if ( a2 ) /*0x68c701*/
  {
    v4 = *(NiSurfaceData **)&a2->unk00; /*0x68c704*/
    if ( *(_DWORD *)&a2->unk00 ) /*0x68c704*/
    {
      do /*0x68c72a*/
      {
        Head = EmbeddedList_GetHead((char *)v4); /*0x68c712*/
        sub_68BED0((TeleportData **)this, (NiPoint3 *)Head); /*0x68c71a*/
        result = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v4); /*0x68c721*/
        v4 = result; /*0x68c726*/
      }
      while ( result ); /*0x68c72a*/
    }
  }
  return result; /*0x68c72d*/
}
