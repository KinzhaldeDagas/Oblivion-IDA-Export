int __userpurge sub_798300@<eax>(int this@<ecx>, int a2@<esi>, int *a3)
{
  void *v4; // ebx
  int v5; // eax
  const void **v6; // ecx
  int v7; // esi
  size_t v9; // [esp-8h] [ebp-10h]

  v4 = *(void **)(this + 0x18);
  v5 = 0x20 * *(unsigned __int16 *)(this + 8) * *(unsigned __int16 *)(this + 0x1C);
  if ( !v4 )
    return *(_DWORD *)(this + 0x18);
  v6 = *(const void ***)(this + 0x10);
  if ( !v6 || !*v6 )
    return *(_DWORD *)(this + 0x18);
  HIDWORD(v9) = a2;
  v7 = 4 * v5;
  LODWORD(v9) = 4 * v5;
  memcpy(v4, *v6, v9);
  *a3 = ((int)v4 + v7 - *(_DWORD *)(this + 0x18)) >> 2;
  return *(_DWORD *)(this + 0x18);
}
