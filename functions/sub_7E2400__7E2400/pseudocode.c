void __thiscall sub_7E2400(int this)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(this + 0xC);
  *(_WORD *)(this + 4) = 0;
  if ( v2 )
    FormHeapFree(v2);
  *(_BYTE *)(this + 9) = 0;
  *(_DWORD *)(this + 0xC) = 0;
}
