bool __thiscall BSFile_FileExists(const char *this)
{
  return _access(this + 0x3C, 0) != 0xFFFFFFFF;
}
