// Verified worker callback (+0x04 vtable): obtains an existing task BSFile or opens the task path, calls TESWorldSpace_LoadCellDistantLODData with task cellX/cellY, embedded object map and lodMode, then sets parseComplete at taskData +0x28.
void __thiscall DistantLODLoaderTask_LoadCellData(_DWORD *this)
{
  _BYTE *BSFile; // eax
  int v3; // esi

  BSFile = sub_434650(this, 0, 1); /*0x4bcc67*/
  if ( !BSFile ) /*0x4bcc6e*/
    BSFile = FileFinder_LoadBSFile((const char *)*(this + 8), 0, 0x800); /*0x4bcc7b*/
  v3 = *(this + 0xB); /*0x4bcc83*/
  if ( v3 ) /*0x4bcc88*/
  {
    TESWorldSpace_LoadCellDistantLODData( /*0x4bcc9d*/
      *(TESForm **)(v3 + 8),
      *(_DWORD *)v3,
      *(_DWORD *)(v3 + 4),
      (_DWORD *)(v3 + 0xC),
      *(_DWORD *)(v3 + 0x24),
      BSFile);
    *(_BYTE *)(v3 + 0x28) = 1; /*0x4bcca2*/
  }
}
