int __thiscall sub_89E0D0(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  char v6; // [esp+Fh] [ebp-1h] BYREF

  v3 = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, &v6);
  v4 = sub_7124A0(a2);
  if ( v3 )
  {
    if ( v4 )
      *(_DWORD *)(v3 + 4) = *(_DWORD *)(v4 + 8);
  }
  return sub_89D6C0(this, (int)a2);
}
