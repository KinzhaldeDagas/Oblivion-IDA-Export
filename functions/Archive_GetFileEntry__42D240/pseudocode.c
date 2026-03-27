unsigned int __thiscall Archive_GetFileEntry(_DWORD *this, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v4; // esi
  unsigned int v6; // esi
  const char *v8; // [esp-8h] [ebp-10h]

  v4 = a4;
  if ( Archive_ContainsFolder((int)this, a2, (signed int *)&a4, (const char *)a4)
    && (v8 = (const char *)v4, v6 = a4, Archive_FolderContainFile((int)this, a4, a3, (signed int *)&a4, v8, 1)) )
  {
    return *(_DWORD *)(*(this + 0x5E) + 0x10 * v6 + 0xC) + 0x10 * a4;
  }
  else
  {
    return 0;
  }
}
