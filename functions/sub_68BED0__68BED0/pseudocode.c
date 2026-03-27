TeleportData *__thiscall sub_68BED0(TeleportData **this, NiPoint3 *a2)
{
  _DWORD *v3; // eax
  TeleportData *v4; // esi
  _DWORD *v5; // ecx

  v3 = (_DWORD *)FormHeapAlloc(0x14u);
  if ( v3 )
    v4 = (TeleportData *)sub_68CB30(v3);
  else
    v4 = 0;
  TeleportData::SetTeleportPosition(v4, a2);
  v5 = *(this + 1);
  if ( v5 )
    sub_6A2FD0(v5, (int)v4);
  else
    *this = v4;
  *(this + 1) = v4;
  return v4;
}
