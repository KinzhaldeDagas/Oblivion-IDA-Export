_DWORD *__thiscall sub_558770(_DWORD *this, char *Src)
{
  _DWORD *v3; // edi
  rsize_t v5; // [esp-4h] [ebp-40h]
  int v6; // [esp+14h] [ebp-28h] BYREF
  unsigned int v7; // [esp+18h] [ebp-24h]
  int v8; // [esp+28h] [ebp-14h]
  unsigned int v9; // [esp+2Ch] [ebp-10h]
  int v10; // [esp+38h] [ebp-4h]

  v3 = this + 1;
  ArrayConstructor(this + 1, 0x10u, 2, (int)sub_6EF4A0, (void (__thiscall *)(void *))sub_558570);
  v10 = 0;
  v9 = 0xF;
  v8 = 0;
  LOBYTE(v7) = 0;
  LODWORD(v5) = strlen(Src);
  sub_414500(&v6, (int)v3, Src, v5);
  LOBYTE(v10) = 1;
  sub_6F0A00(&v6, this, v3, this + 5);
  if ( v9 >= 0x10 )
    FormHeapFree(v7);
  return this;
}
