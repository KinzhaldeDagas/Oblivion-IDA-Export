void __cdecl _splitpath(const char *FullPath, char *Drive, char *Dir, char *Filename, char *Ext)
{
  _splitpath_helper(
    (char *)FullPath,
    Drive,
    Drive != 0 ? 3 : 0,
    Dir,
    Dir != 0 ? 0x100 : 0,
    Filename,
    Filename != 0 ? 0x100 : 0,
    Ext,
    Ext != 0 ? 0x100 : 0);
}
