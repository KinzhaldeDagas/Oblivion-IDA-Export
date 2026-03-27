NiSurfaceData *__thiscall sub_68C6F0(NiDX92DBufferData **this, NiSurfaceData *a2)
{
  NiSurfaceData *result; // eax
  char *v4; // esi
  char *v5; // eax

  sub_68C0F0(this, *this);
  result = a2;
  if ( a2 )
  {
    v4 = *(char **)&a2->unk00;
    if ( *(_DWORD *)&a2->unk00 )
    {
      do
      {
        v5 = sub_6899C0(v4);
        sub_68BED0((TeleportData **)this, (NiPoint3 *)v5);
        result = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v4);
        v4 = (char *)result;
      }
      while ( result );
    }
  }
  return result;
}
