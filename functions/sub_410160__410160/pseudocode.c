char __thiscall sub_410160(int *this, const char *a2, char a3, char a4, char a5)
{
  unsigned int v6; // eax
  char *v7; // edi
  int v9; // esi
  char v10; // bl
  UInt32 mainThreadID; // edi
  int v12; // eax
  char v14; // [esp+13h] [ebp-13Dh]
  int v15[11]; // [esp+18h] [ebp-138h] BYREF
  char v16; // [esp+47h] [ebp-109h] BYREF
  CHAR FileName[8]; // [esp+48h] [ebp-108h] BYREF
  void *v18; // [esp+50h] [ebp-100h]

  qmemcpy(FileName, "Data\\Vid", sizeof(FileName)); /*0x41018b*/
  v18 = &loc_5C6F65; /*0x410196*/
  v6 = strlen(a2) + 1; /*0x4101ac*/
  v7 = &v16; /*0x4101b6*/
  while ( *++v7 ) /*0x4101c8*/
    ; /*0x4101c0*/
  qmemcpy(v7, a2, v6); /*0x4101d6*/
  v9 = 0; /*0x4101df*/
  if ( (a4 || a5) /*0x410214*/
    && _stat64i32((const unsigned __int8 *)FileName, (int)v15) != 0xFFFFFFFF
    && (v15[5] <= dword_B030BC || a5) )
  {
    v9 = 0x2000; /*0x410216*/
  }
  v14 = 0; /*0x410222*/
  v10 = 1; /*0x410227*/
  if ( MEMORY[0xB33398] )                       // ModernWindowsCompatible decode: Bink open path compares current thread id with OSGlobals+0x10 before using OSGlobals+0x14 as the main thread handle for SuspendThread. /*0x410229*/
  {
    mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x41022b*/
    if ( GetCurrentThreadId() != mainThreadID ) /*0x410236*/
    {
      v14 = 1; /*0x410242*/
      SuspendThread(MEMORY[0xB33398]->mainThreadHandle); /*0x410246*/
      v9 |= 0x8000000u; /*0x41024c*/
    }
  }
  v12 = BinkOpen(FileName, v9); /*0x410258*/
  *this = v12; /*0x410260*/
  if ( !v12 ) /*0x410263*/
  {
    if ( !a3 ) /*0x41026c*/
      PrintError("Could not open %s for playback.", a2); /*0x410278*/
    *(this + 8) = 0; /*0x410280*/
    v10 = 0; /*0x410287*/
  }
  if ( v14 )                                    // ModernWindowsCompatible decode: Bink open path resumes OSGlobals+0x14 after non-main-thread BinkOpen; this verifies the mainThreadHandle consumer for the 0x404A55 patch. /*0x41028e*/
    ResumeThread(MEMORY[0xB33398]->mainThreadHandle); /*0x410299*/
  return v10; /*0x41029f*/
}
