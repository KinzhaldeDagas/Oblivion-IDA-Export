void __thiscall sub_725FC0(int this, unsigned int a2)
{
  unsigned int v2; // eax

  v2 = a2;
  if ( !a2 )
  {
    if ( *(_BYTE *)(this + 0xC) )
      v2 = *(_DWORD *)(this + 8);
  }
  FormHeapFree(v2);
}
