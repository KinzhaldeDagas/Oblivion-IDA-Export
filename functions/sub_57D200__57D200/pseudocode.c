void __thiscall sub_57D200(unsigned int *this)
{
  unsigned int v2; // esi
  unsigned int v3; // eax

  v2 = *(_DWORD *)(*(this + 0x4C) + 0x10);
  while ( v2 )
  {
    v3 = v2;
    v2 = *(_DWORD *)(v2 + 0x10);
    FormHeapFree(v3);
  }
  FormHeapFree(*(this + 0x4C));
  *(this + 0x4C) = 0;
}
