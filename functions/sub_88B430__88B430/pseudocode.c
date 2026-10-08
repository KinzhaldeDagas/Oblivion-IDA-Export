char __thiscall sub_88B430(unsigned int *this, int a2)
{
  char v3; // bl
  _DWORD *v4; // eax
  _WORD *v5; // edi
  int v6; // ecx
  int v7; // eax

  v3 = 0; /*0x88b43a*/
  v4 = (_DWORD *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this); /*0x88b43c*/
  if ( !v4 ) /*0x88b440*/
    return v3; /*0x88b440*/
  v5 = (_WORD *)a2; /*0x88b446*/
  if ( !a2 ) /*0x88b44c*/
    return v3; /*0x88b44c*/
  v6 = *(_DWORD *)(a2 + 0xC); /*0x88b456*/
  if ( !*(this + 8) ) /*0x88b459*/
  {
    if ( !v6 || (*(_BYTE *)(v6 + 0x18) & 0x30) != 0 ) /*0x88b4c1*/
      return 1; /*0x88b4c1*/
    return *sub_8996C0(v4, &a2, (int (__stdcall ***)(signed int))a2) != 0; /*0x88b4d8*/
  }
  if ( !v6 ) /*0x88b45d*/
    return 1; /*0x88b45d*/
  v7 = *(_DWORD *)(v6 + 0x18); /*0x88b45f*/
  if ( (v7 & 0x30) != 0 ) /*0x88b464*/
    return 1; /*0x88b4b6*/
  *(_DWORD *)(v6 + 0x18) = v7 | 0x20; /*0x88b469*/
  if ( *(this + 0x13) >= 0xBB8 ) /*0x88b473*/
  {
    sub_88A440(this); /*0x88b477*/
    sub_88A3A0(this); /*0x88b47e*/
    sub_88A310((int *)this); /*0x88b485*/
    sub_88A280(this); /*0x88b48c*/
  }
  sub_8BC720(v5); /*0x88b493*/
  *(_DWORD *)(*(this + 0x12) + 4 * (*(this + 0x13))++) = v5; /*0x88b49e*/
  return 1; /*0x88b4a9*/
}
