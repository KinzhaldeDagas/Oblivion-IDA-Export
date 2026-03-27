void __thiscall BSFile_Flush(int this)
{
  if ( *(_BYTE *)(this + 0x24) )
  {
    if ( *(_DWORD *)(this + 0x1C) )
    {
      NiFile_Flush(this);
      fclose(*(FILE **)(this + 0x1C));
    }
  }
  FormHeapFree(*(_DWORD *)(this + 0x18));
  *(_DWORD *)(this + 0x18) = 0;
  *(_DWORD *)(this + 0x1C) = 0;
}
