int __thiscall sub_90F510(_DWORD *this)
{
  _DWORD *v2; // eax
  int v3; // edx
  int result; // eax
  int v5; // edi
  _DWORD v6[4]; // [esp+8h] [ebp-10h] BYREF

  v2 = *(_DWORD **)(*(this + 2) + 0x74); /*0x90f519*/
  v6[0] = *v2; /*0x90f51e*/
  v6[1] = v2[1]; /*0x90f525*/
  v6[2] = v2[2]; /*0x90f52c*/
  v3 = v2[3]; /*0x90f530*/
  result = *(this + 0x49); /*0x90f533*/
  v5 = 0; /*0x90f53a*/
  for ( v6[3] = v3; v5 < result; ++v5 ) /*0x90f542*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, _DWORD *))(**(_DWORD **)(*(this + 0x48) + 8 * v5) + 0x1C))( /*0x90f568*/
      *(_DWORD *)(*(this + 0x48) + 8 * v5),
      this + 5,
      *(_DWORD *)(*(this + 0x48) + 8 * v5 + 4),
      v6);
    result = *(this + 0x49); /*0x90f56b*/
  }
  return result; /*0x90f578*/
}
