int __thiscall NiFile_Seek(int this, int Offset, int Origin)
{
  int v4; // edi
  int result; // eax
  int v6; // ecx

  if ( !*(_BYTE *)(this + 0x24) )
    return NiFile_Seek_::Done(Offset, Origin);
  v4 = Offset;
  if ( Origin == 1 )
  {
    result = *(_DWORD *)(this + 0x14);
    v6 = result + Offset;
    if ( result + Offset >= 0 && v6 < *(_DWORD *)(this + 0x10) )
    {
      *(_DWORD *)(this + 0x14) = v6;
      return result;
    }
    v4 = result - *(_DWORD *)(this + 0x10) + Offset;
  }
  NiFile_Flush(this);
  *(_BYTE *)(this + 0x24) = fseek(*(FILE **)(this + 0x1C), v4, Origin) == 0;
  return NiFile_Seek_::Done(Offset, Origin);
}
