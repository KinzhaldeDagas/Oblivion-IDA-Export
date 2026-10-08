TeleportData *__thiscall sub_68C3A0(TeleportData **this, NiPoint3 *a2, NiPoint3 *a3, NiDX92DBufferData *a4)
{
  NiDX92DBufferData *v5; // ebx
  TeleportData *v6; // esi
  _DWORD *v7; // eax
  TeleportData *v8; // edi
  _DWORD *v9; // eax
  NiDX92DBufferData *v11; // [esp-8h] [ebp-2Ch]

  v5 = a4; /*0x68c3cc*/
  v6 = 0; /*0x68c3d0*/
  if ( a4 && (v11 = a4, a4 = 0, sub_68BF60((NiDX92DBufferData **)this, v11, &a4)) ) /*0x68c3e4*/
  {
    v7 = (_DWORD *)FormHeapAlloc(0x14u); /*0x68c3f3*/
    if ( v7 ) /*0x68c405*/
      v8 = (TeleportData *)sub_68CB30(v7); /*0x68c40e*/
    else
      v8 = 0; /*0x68c412*/
    TeleportData::SetTeleportPosition(v8, a3); /*0x68c423*/
    v9 = (_DWORD *)FormHeapAlloc(0x14u); /*0x68c42a*/
    if ( v9 ) /*0x68c440*/
      v6 = (TeleportData *)sub_68CB30(v9); /*0x68c449*/
    TeleportData::SetTeleportPosition(v6, a2); /*0x68c45a*/
    sub_6A2FD0(v6, (int)v8); /*0x68c462*/
    sub_6A2FD0(v8, (int)v5); /*0x68c46a*/
    if ( a4 ) /*0x68c475*/
    {
      return (TeleportData *)sub_6A2FD0(a4, (int)v6); /*0x68c478*/
    }
    else
    {
      *this = v6; /*0x68c496*/
      return (TeleportData *)this; /*0x68c492*/
    }
  }
  else
  {
    sub_68BED0(this, a2); /*0x68c4b4*/
    return sub_68BED0(this, a3); /*0x68c4c0*/
  }
}
