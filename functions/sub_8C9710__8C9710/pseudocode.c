int __thiscall sub_8C9710(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  char v6; // [esp+Fh] [ebp-1h] BYREF

  v3 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v6); /*0x8c9728*/
  if ( v3 ) /*0x8c972c*/
  {
    v4 = sub_7124A0(a2); /*0x8c9730*/
    if ( v4 ) /*0x8c9737*/
    {
      *(_DWORD *)(v3 + 8) = *(_DWORD *)(v4 + 8); /*0x8c973f*/
      return sub_8A2600(this, (int)a2); /*0x8c974b*/
    }
    *(_DWORD *)(v3 + 8) = 0; /*0x8c9750*/
  }
  return sub_8A2600(this, (int)a2); /*0x8c9747*/
}
