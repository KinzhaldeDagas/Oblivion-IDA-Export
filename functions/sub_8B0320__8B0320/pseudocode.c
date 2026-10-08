int __thiscall sub_8B0320(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  char v6; // [esp+Fh] [ebp-1h] BYREF

  v3 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v6); /*0x8b033a*/
  v4 = sub_7124A0(a2); /*0x8b033c*/
  if ( v4 ) /*0x8b0343*/
    *(_DWORD *)(v3 + 4) = *(_DWORD *)(v4 + 8); /*0x8b0348*/
  return sub_8A2600(this, (int)a2); /*0x8b0353*/
}
