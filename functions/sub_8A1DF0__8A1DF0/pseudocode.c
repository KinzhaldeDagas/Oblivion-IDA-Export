int __thiscall sub_8A1DF0(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  char v6; // [esp+Fh] [ebp-1h] BYREF

  v3 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v6); /*0x8a1e08*/
  if ( v3 ) /*0x8a1e0c*/
  {
    v4 = sub_7124A0(a2); /*0x8a1e10*/
    if ( v4 ) /*0x8a1e17*/
    {
      *(_DWORD *)(v3 + 4) = *(_DWORD *)(v4 + 8); /*0x8a1e1f*/
      return sub_8A2600(this, (int)a2); /*0x8a1e2b*/
    }
    *(_DWORD *)(v3 + 4) = 0; /*0x8a1e30*/
  }
  return sub_8A2600(this, (int)a2); /*0x8a1e27*/
}
