int __thiscall sub_72EFB0(_DWORD *this)
{
  unsigned int v2; // ebx
  int v3; // edi
  int result; // eax

  if ( *(this + 0x11) )
  {
    v2 = 0;
    if ( *(this + 0x10) )
    {
      v3 = 0;
      do
      {
        FormHeapFree(*(_DWORD *)(v3 + *(this + 0x11) + 0x44));
        *(_DWORD *)(v3 + *(this + 0x11) + 0x44) = 0;
        ++v2;
        v3 += 0x4C;
      }
      while ( v2 < *(this + 0x10) );
    }
  }
  return result;
}
