int __thiscall sub_8BF1B0(_DWORD *this, int a2, int *a3)
{
  int *v3; // esi
  int result; // eax
  int v6; // edi
  _DWORD v7[6]; // [esp+4h] [ebp-18h] BYREF

  v3 = a3; /*0x8bf1ba*/
  *(float *)&v7[3] = flt_A34BA0; /*0x8bf1be*/
  *(float *)&v7[4] = flt_A37080; /*0x8bf1cb*/
  memset(v7, 0, 0xC); /*0x8bf1d3*/
  v7[5] = 0; /*0x8bf1df*/
  if ( !a3 ) /*0x8bf1e3*/
  {
    v3 = v7; /*0x8bf1f4*/
    (*(void (__cdecl **)(_DWORD, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))( /*0x8bf1fe*/
      *(_DWORD *)(a2 + 0x21C),
      v7,
      0x18,
      0,
      0);
  }
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x10))(this); /*0x8bf20a*/
  v6 = *(this + 1); /*0x8bf20f*/
  *(float *)(v6 + 0x10) = *((float *)v3 + 3); /*0x8bf212*/
  *(float *)(v6 + 0x14) = *((float *)v3 + 4); /*0x8bf218*/
  return result; /*0x8bf21c*/
}
