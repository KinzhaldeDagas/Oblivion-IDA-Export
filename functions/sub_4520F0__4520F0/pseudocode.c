// Returns the root TESFile on the main thread; on worker threads returns the per-thread clone selected by GetCurrentThreadId via TESFile_GetThreadSafeFileForThread.
Data *__thiscall TESFile_GetThreadSafeFile(Data *this)
{
  Data *ghostFileParent; // eax
  Data *v3; // ecx
  DWORD (__stdcall *v4)(); // edi
  UInt32 mainThreadID; // esi
  int v7; // eax

  while ( 1 ) /*0x4520f4*/
  {
    ghostFileParent = this->ghostFileParent; /*0x4520f4*/
    v3 = ghostFileParent; /*0x4520f7*/
    if ( !ghostFileParent ) /*0x4520fb*/
      break; /*0x4520fb*/
    do /*0x452105*/
      v3 = v3->ghostFileParent; /*0x452100*/
    while ( v3 ); /*0x452105*/
    while ( ghostFileParent->ghostFileParent ) /*0x452115*/
      ghostFileParent = ghostFileParent->ghostFileParent; /*0x452117*/
    this = ghostFileParent; /*0x45211d*/
  }
  v4 = GetCurrentThreadId; /*0x452126*/
  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x45212d*/
  if ( GetCurrentThreadId() == mainThreadID ) /*0x452135*/
    return this; /*0x452138*/
  v7 = v4(); /*0x45213c*/
  return TESFile_GetThreadSafeFileForThread(this, v7); /*0x452137*/
}
