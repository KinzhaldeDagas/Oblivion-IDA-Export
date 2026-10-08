int __thiscall sub_89E0D0(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  char v6; // [esp+Fh] [ebp-1h] BYREF

  v3 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v6); /*0x89e0ea*/
  v4 = sub_7124A0(a2); /*0x89e0ec*/
  if ( v3 ) /*0x89e0f3*/
  {
    if ( v4 ) /*0x89e0f7*/
      *(_DWORD *)(v3 + 4) = *(_DWORD *)(v4 + 8); /*0x89e0fc*/
  }
  return sub_89D6C0(this, (int)a2); /*0x89e107*/
}
