TeleportData *__thiscall sub_68C3A0(TeleportData **this, NiPoint3 *a2, NiPoint3 *a3, NiDX92DBufferData *a4)
{
  NiDX92DBufferData *v5; // ebx
  TeleportData *v6; // esi
  _DWORD *v7; // eax
  TeleportData *v8; // edi
  _DWORD *v9; // eax
  NiDX92DBufferData *v11; // [esp-8h] [ebp-2Ch]

  v5 = a4;
  v6 = 0;
  if ( a4 && (v11 = a4, a4 = 0, sub_68BF60((NiDX92DBufferData **)this, v11, &a4)) )
  {
    v7 = (_DWORD *)FormHeapAlloc(0x14u);
    if ( v7 )
      v8 = (TeleportData *)sub_68CB30(v7);
    else
      v8 = 0;
    TeleportData::SetTeleportPosition(v8, a3);
    v9 = (_DWORD *)FormHeapAlloc(0x14u);
    if ( v9 )
      v6 = (TeleportData *)sub_68CB30(v9);
    TeleportData::SetTeleportPosition(v6, a2);
    sub_6A2FD0(v6, (int)v8);
    sub_6A2FD0(v8, (int)v5);
    if ( a4 )
    {
      return (TeleportData *)sub_6A2FD0(a4, (int)v6);
    }
    else
    {
      *this = v6;
      return (TeleportData *)this;
    }
  }
  else
  {
    sub_68BED0(this, a2);
    return sub_68BED0(this, a3);
  }
}
