char __thiscall sub_88B4E0(unsigned int *this, int a2)
{
  char v3; // bl
  _DWORD *v4; // eax
  int v5; // ecx
  char v6; // al
  int v8; // edx

  v3 = 0; /*0x88b4ea*/
  v4 = (_DWORD *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this); /*0x88b4ec*/
  if ( !v4 || !a2 ) /*0x88b4f8*/
    return v3; /*0x88b4f8*/
  v3 = 1; /*0x88b4fe*/
  if ( !*(this + 8) ) /*0x88b503*/
  {
    v8 = *(_DWORD *)(a2 + 0xC); /*0x88b558*/
    if ( v8 ) /*0x88b55d*/
    {
      if ( (*(_BYTE *)(v8 + 0x10) & 3) == 0 ) /*0x88b563*/
        sub_899B30(v4, (int (__stdcall ***)(signed int))a2); /*0x88b568*/
    }
    return v3; /*0x88b568*/
  }
  v5 = *(_DWORD *)(a2 + 0xC); /*0x88b505*/
  if ( !v5 ) /*0x88b50a*/
    return v3; /*0x88b50a*/
  v6 = *(_BYTE *)(v5 + 0x10); /*0x88b50c*/
  if ( (v6 & 3) != 0 ) /*0x88b511*/
    return v3; /*0x88b56f*/
  *(_BYTE *)(v5 + 0x10) = v6 | 2; /*0x88b515*/
  if ( *(this + 0xD) >= 0xC8 ) /*0x88b51f*/
  {
    sub_88A440(this); /*0x88b523*/
    sub_88A3A0(this); /*0x88b52a*/
    sub_88A310((int *)this); /*0x88b531*/
    sub_88A280(this); /*0x88b538*/
  }
  sub_8BC720((_WORD *)a2); /*0x88b53f*/
  *(_DWORD *)(*(this + 0xC) + 4 * (*(this + 0xD))++) = a2; /*0x88b54a*/
  return 1; /*0x88b550*/
}
