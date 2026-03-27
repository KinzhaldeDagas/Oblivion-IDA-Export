int sub_585F00()
{
  int v0; // eax
  int v1; // esi

  v0 = FormHeapAlloc(0x10u);
  if ( v0 )
  {
    *(_DWORD *)(v0 + 8) = 0;
    *(_WORD *)(v0 + 0xC) = 0;
    *(_WORD *)(v0 + 0xE) = 0;
    v1 = v0;
  }
  else
  {
    v1 = 0;
  }
  FormHeapFree(*(_DWORD *)(v1 + 8));
  *(_DWORD *)(v1 + 8) = 0;
  *(_WORD *)(v1 + 0xE) = 0;
  *(_WORD *)(v1 + 0xC) = 0;
  return v1;
}
