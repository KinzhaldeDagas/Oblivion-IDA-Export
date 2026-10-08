char __thiscall sub_90F390(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // ebx
  _DWORD v6[4]; // [esp+8h] [ebp-10h] BYREF

  v3 = *(_DWORD **)(*(this + 2) + 0x74); /*0x90f39a*/
  v4 = *(this + 0x49) - 1; /*0x90f3a5*/
  v6[0] = *v3; /*0x90f3a6*/
  v6[1] = v3[1]; /*0x90f3ad*/
  v6[2] = v3[2]; /*0x90f3b4*/
  for ( v6[3] = v3[3]; v4 >= 0; --v4 ) /*0x90f3bf*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, _DWORD *, int))(**(_DWORD **)(*(this + 0x48) + 8 * v4) + 8))( /*0x90f3ec*/
      *(_DWORD *)(*(this + 0x48) + 8 * v4),
      this + 5,
      *(_DWORD *)(*(this + 0x48) + 8 * v4 + 4),
      v6,
      a2);
    LOBYTE(v3) = *(_BYTE *)(a2 + 4); /*0x90f3ef*/
    if ( (_BYTE)v3 ) /*0x90f3f4*/
      break; /*0x90f3f4*/
  }
  return (char)v3; /*0x90f3fb*/
}
