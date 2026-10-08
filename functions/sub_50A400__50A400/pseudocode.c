char __usercall sub_50A400@<al>(
        double st6_0@<st1>,
        double a2@<st0>,
        ParamInfo *a1,
        UInt8 *a4,
        TESObjectREFR *a5,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        int a9,
        UInt32 *a10)
{
  HANDLE FileA; // eax
  void *v12; // edi
  void (__stdcall *v13)(HANDLE, LPCVOID, DWORD, LPDWORD, LPOVERLAPPED); // ebx
  Data *OverrideFile; // eax
  Data *v15; // eax
  unsigned int v16; // eax
  TESForm *v17; // eax
  const char *v18; // eax
  TESObjectCELL *DwordAtOffset40; // ebp
  int XCoordinate; // eax
  const char *v21; // eax
  const char *v22; // eax
  double v23; // st7
  double v24; // st7
  double v25; // st7
  int v26; // [esp+0h] [ebp-1240h]
  int YCoordinate; // [esp+4h] [ebp-123Ch]
  int v28; // [esp+4h] [ebp-123Ch]
  DWORD NumberOfBytesWritten; // [esp+18h] [ebp-1228h] BYREF
  struct _SYSTEMTIME v30; // [esp+1Ch] [ebp-1224h] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+2Ch] [ebp-1214h] BYREF
  char Buffer[4096]; // [esp+3Ch] [ebp-1204h] BYREF
  char v33[512]; // [esp+103Ch] [ebp-204h] BYREF

  NumberOfBytesWritten = (DWORD)a10; /*0x50a44d*/
  if ( !Script_ExtractArgs(a1, a4, a10, a5, a6, a7, l, v33) ) /*0x50a464*/
    return 0; /*0x50a464*/
  if ( !*off_B09EF0 ) /*0x50a47c*/
    return 0; /*0x50a47c*/
  FileA = CreateFileA(off_B09EF0, 0xC0000000, 0, 0, 4, 0x80, 0); /*0x50a494*/
  v12 = FileA; /*0x50a49a*/
  if ( FileA == (HANDLE)0xFFFFFFFF ) /*0x50a49f*/
    return 0; /*0x50a470*/
  ((void (__userpurge *)(HANDLE, _DWORD, _DWORD, int, double@<st0>, double@<st1>))SetFilePointer)( /*0x50a4a8*/
    FileA,
    0,
    0,
    2,
    a2,
    st6_0);
  GetLocalTime(&SystemTime); /*0x50a4b3*/
  _sprintf( /*0x50a4e1*/
    Buffer,
    "%d/%d/%d (%02d:%02d)\t",
    SystemTime.wMonth,
    SystemTime.wDay,
    SystemTime.wYear,
    SystemTime.wHour,
    SystemTime.wMinute);
  v13 = (void (__stdcall *)(HANDLE, LPCVOID, DWORD, LPDWORD, LPOVERLAPPED))WriteFile; /*0x50a4f9*/
  WriteFile(v12, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0); /*0x50a50f*/
  if ( a5 && TESForm_GetOverrideFile((TESForm *)a5, 0xFFFFFFFF) ) /*0x50a51d*/
  {
    OverrideFile = TESForm_GetOverrideFile((TESForm *)a5, 0xFFFFFFFF); /*0x50a52e*/
    _sprintf(Buffer, "%s\t", OverrideFile->name); /*0x50a541*/
    v13(v12, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0); /*0x50a569*/
    v15 = TESForm_GetOverrideFile((TESForm *)a5, 0xFFFFFFFF); /*0x50a574*/
    TESFile_GetLastWriteTime((int)v15, &v30); /*0x50a57b*/
    _sprintf(Buffer, "%d/%d/%d (%02d:%02d)\t", v30.wMonth, v30.wDay, v30.wYear, v30.wHour, v30.wMinute); /*0x50a5a8*/
    v16 = strlen(Buffer); /*0x50a5c0*/
  }
  else
  {
    _sprintf(Buffer, "\t\t"); /*0x50a5ce*/
    v16 = strlen(Buffer); /*0x50a5e9*/
  }
  v13(v12, Buffer, v16, &NumberOfBytesWritten, 0); /*0x50a5f9*/
  _sprintf(Buffer, "%s\t", &MEMORY[0xB33E90][0x300]); /*0x50a60a*/
  v13(v12, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0); /*0x50a639*/
  v17 = a5->vtbl->GetBaseForm(a5); /*0x50a645*/
  v18 = v17->vtbl->GetEditorName(v17); /*0x50a651*/
  _sprintf(Buffer, "%s\t", v18); /*0x50a65e*/
  v13(v12, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0); /*0x50a689*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x50a692*/
  if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x50a696*/
  {
    v22 = DwordAtOffset40->vtbl->GetEditorName((TESForm *)DwordAtOffset40); /*0x50a6da*/
    _sprintf(Buffer, "%s\t", v22); /*0x50a6e7*/
  }
  else
  {
    YCoordinate = TESObjectCELL_GetYCoordinate(DwordAtOffset40); /*0x50a6a6*/
    XCoordinate = TESObjectCELL_GetXCoordinate(DwordAtOffset40); /*0x50a6a9*/
    v21 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int))DwordAtOffset40->vtbl->GetEditorName)( /*0x50a6ba*/
                          DwordAtOffset40,
                          XCoordinate,
                          YCoordinate);
    _sprintf(Buffer, "%s (%d,%d)\t", v21, v26, v28); /*0x50a6c7*/
  }
  v13(v12, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0); /*0x50a70f*/
  v23 = *a5->vtbl->GetPos(a5); /*0x50a71d*/
  _sprintf(Buffer, "%.0f\t", v23); /*0x50a72f*/
  v13(v12, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0); /*0x50a759*/
  v24 = a5->vtbl->GetPos(a5)[1]; /*0x50a767*/
  _sprintf(Buffer, "%.0f\t", v24); /*0x50a77a*/
  v13(v12, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0); /*0x50a7a9*/
  v25 = a5->vtbl->GetPos(a5)[2]; /*0x50a7b7*/
  _sprintf(Buffer, "%.0f\t", v25); /*0x50a7ca*/
  v13(v12, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0); /*0x50a7f9*/
  _sprintf(Buffer, "\"%s\"\t", v33); /*0x50a80d*/
  v13(v12, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0); /*0x50a839*/
  _sprintf(Buffer, word_A3D9B0); /*0x50a845*/
  v13(v12, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0); /*0x50a86d*/
  CloseHandle(v12); /*0x50a870*/
  Interface_ConsolePrint("BetaComment added"); /*0x50a87b*/
  return 1; /*0x50a885*/
}
