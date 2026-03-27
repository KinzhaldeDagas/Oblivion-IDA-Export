int __thiscall sub_8A1DF0(void *this, _DWORD *a2)
{
  int v2; // edi
  int v3; // eax
  char v5; // [esp+Fh] [ebp-1h] BYREF

  v2 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x74))(this, &v5);
  if ( v2 )
  {
    v3 = sub_7124A0(a2);
    if ( v3 )
    {
      *(_DWORD *)(v2 + 4) = *(_DWORD *)(v3 + 8);
      return sub_8A2600(a2);
    }
    *(_DWORD *)(v2 + 4) = 0;
  }
  return sub_8A2600(a2);
}
