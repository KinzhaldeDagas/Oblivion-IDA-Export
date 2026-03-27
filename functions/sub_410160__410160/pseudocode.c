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

  qmemcpy(FileName, "Data\\Vid", sizeof(FileName));
  v18 = &loc_5C6F65;
  v6 = strlen(a2) + 1;
  v7 = &v16;
  while ( *++v7 )
    ;
  qmemcpy(v7, a2, v6);
  v9 = 0;
  if ( (a4 || a5) && _stat64i32(FileName, (int)v15) != 0xFFFFFFFF && (v15[5] <= dword_B030BC || a5) )
    v9 = 0x2000;
  v14 = 0;
  v10 = 1;
  if ( OSGlobals )
  {
    mainThreadID = OSGlobals->mainThreadID;
    if ( GetCurrentThreadId() != mainThreadID )
    {
      v14 = 1;
      SuspendThread(OSGlobals->mainThreadHandle);
      v9 |= 0x8000000u;
    }
  }
  v12 = BinkOpen(FileName, v9);
  *this = v12;
  if ( !v12 )
  {
    if ( !a3 )
      PrintError("Could not open %s for playback.", a2);
    *(this + 8) = 0;
    v10 = 0;
  }
  if ( v14 )
    ResumeThread(OSGlobals->mainThreadHandle);
  return v10;
}
