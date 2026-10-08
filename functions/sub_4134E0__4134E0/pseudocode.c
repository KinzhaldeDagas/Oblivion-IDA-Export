_DWORD *__userpurge sub_4134E0@<eax>(_DWORD *this@<ecx>, int a2@<ebp>, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // ecx
  _DWORD *v9; // ebp
  _DWORD *v10; // edx
  unsigned int v11; // eax
  bool v12; // cf
  rsize_t v14; // [esp-10h] [ebp-1Ch]
  rsize_t v15; // [esp-4h] [ebp-10h]
  _DWORD *v16; // [esp+10h] [ebp+4h]

  if ( *(this + 5) < a3 ) /*0x4134ec*/
    std::_String_base::_Xran(); /*0x4134ee*/
  v6 = a4; /*0x4134f6*/
  v7 = *(this + 5) - a3; /*0x4134fa*/
  if ( v7 < a4 ) /*0x4134fe*/
    v6 = *(this + 5) - a3; /*0x413500*/
  if ( v6 ) /*0x413504*/
  {
    v8 = *(this + 6); /*0x413506*/
    LODWORD(v15) = a2; /*0x41350c*/
    v9 = this + 1; /*0x41350d*/
    if ( v8 < 0x10 ) /*0x413510*/
      v16 = this + 1; /*0x41351b*/
    else
      v16 = (_DWORD *)*v9; /*0x413515*/
    if ( v8 < 0x10 ) /*0x413522*/
      v10 = this + 1; /*0x413529*/
    else
      v10 = (_DWORD *)*v9; /*0x413524*/
    HIDWORD(v14) = (char *)v16 + a3 + v6; /*0x413536*/
    LODWORD(v14) = v8 - a3; /*0x413539*/
    memmove_s((char *)v10 + a3, v14, (const void *)(v7 - v6), v15); /*0x41353d*/
    v11 = *(this + 5) - v6; /*0x413545*/
    v12 = *(this + 6) < 0x10u; /*0x41354a*/
    *(this + 5) = v11; /*0x41354e*/
    if ( !v12 ) /*0x413551*/
      v9 = (_DWORD *)*v9; /*0x413553*/
    *((_BYTE *)v9 + v11) = 0; /*0x413556*/
  }
  return this; /*0x41355b*/
}
