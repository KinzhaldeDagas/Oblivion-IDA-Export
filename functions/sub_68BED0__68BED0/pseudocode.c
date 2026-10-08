TeleportData *__thiscall sub_68BED0(TeleportData **this, NiPoint3 *a2)
{
  _DWORD *v3; // eax
  TeleportData *v4; // esi
  _DWORD *v5; // ecx

  v3 = (_DWORD *)FormHeapAlloc(0x14u); /*0x68bef7*/
  if ( v3 ) /*0x68bf0d*/
    v4 = (TeleportData *)sub_68CB30(v3); /*0x68bf16*/
  else
    v4 = 0; /*0x68bf1a*/
  TeleportData::SetTeleportPosition(v4, a2); /*0x68bf2b*/
  v5 = *(this + 1); /*0x68bf30*/
  if ( v5 ) /*0x68bf35*/
    sub_6A2FD0(v5, (int)v4); /*0x68bf38*/
  else
    *this = v4; /*0x68bf3f*/
  *(this + 1) = v4; /*0x68bf43*/
  return v4; /*0x68bf46*/
}
