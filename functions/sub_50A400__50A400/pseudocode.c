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
  void *v13; // edi
  void (__stdcall *v14)(HANDLE, LPCVOID, DWORD, LPDWORD, LPOVERLAPPED); // ebx
  Data *OverrideFile; // eax
  Data *v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  const char *v19; // eax
  TESObjectCELL *ParentCell; // ebp
  int XCoordinate; // eax
  const char *v22; // eax
  const char *v23; // eax
  double v24; // st7
  double v25; // st7
  double v26; // st7
  int v27; // [esp+0h] [ebp-1240h]
  int YCoordinate; // [esp+4h] [ebp-123Ch]
  int v29; // [esp+4h] [ebp-123Ch]
  DWORD NumberOfBytesWritten; // [esp+18h] [ebp-1228h] BYREF
  struct _SYSTEMTIME v31; // [esp+1Ch] [ebp-1224h] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+2Ch] [ebp-1214h] BYREF
  char Buffer[4096]; // [esp+3Ch] [ebp-1204h] BYREF
  char v34[512]; // [esp+103Ch] [ebp-204h] BYREF

  NumberOfBytesWritten = (DWORD)a10;
  if ( !Script_ExtractArgs(a1, a4, a10, a5, a6, a7, l, v34) )
    return 0;
  if ( !*off_B09EF0 )
    return 0;
  FileA = CreateFileA(off_B09EF0, 0xC0000000, 0, 0, 4, 0x80, 0);
  v13 = FileA;
  if ( FileA == (HANDLE)0xFFFFFFFF )
    return 0;
  ((void (__userpurge *)(HANDLE, _DWORD, _DWORD, int, double@<st0>, double@<st1>))SetFilePointer)(
    FileA,
    0,
    0,
    2,
    a2,
    st6_0);
  GetLocalTime(&SystemTime);
  _sprintf(
    Buffer,
    "%d/%d/%d (%02d:%02d)\t",
    SystemTime.wMonth,
    SystemTime.wDay,
    SystemTime.wYear,
    SystemTime.wHour,
    SystemTime.wMinute);
  v14 = (void (__stdcall *)(HANDLE, LPCVOID, DWORD, LPDWORD, LPOVERLAPPED))WriteFile;
  WriteFile(v13, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0);
  if ( a5 && TESForm_GetOverrideFile((TESForm *)a5, 0xFFFFFFFF) )
  {
    OverrideFile = TESForm_GetOverrideFile((TESForm *)a5, 0xFFFFFFFF);
    _sprintf(Buffer, "%s\t", OverrideFile->name);
    v14(v13, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0);
    v16 = TESForm_GetOverrideFile((TESForm *)a5, 0xFFFFFFFF);
    TESFile_GetLastWriteTime((int)v16, &v31);
    _sprintf(Buffer, "%d/%d/%d (%02d:%02d)\t", v31.wMonth, v31.wDay, v31.wYear, v31.wHour, v31.wMinute);
    v17 = strlen(Buffer);
  }
  else
  {
    _sprintf(Buffer, "\t\t");
    v17 = strlen(Buffer);
  }
  v14(v13, Buffer, v17, &NumberOfBytesWritten, 0);
  _sprintf(Buffer, "%s\t", byte_B34190);
  v14(v13, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0);
  v18 = (int)a5->vtbl->GetBaseForm(a5);
  v19 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 0xD4))(v18);
  _sprintf(Buffer, "%s\t", v19);
  v14(v13, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0);
  ParentCell = TESObjectREFR_GetParentCell(a5);
  if ( TESObjectCELL_IsInterior(ParentCell) )
  {
    v23 = ParentCell->vtbl->GetEditorName((TESForm *)ParentCell);
    _sprintf(Buffer, "%s\t", v23);
  }
  else
  {
    YCoordinate = TESObjectCELL_GetYCoordinate(ParentCell);
    XCoordinate = TESObjectCELL_GetXCoordinate(ParentCell);
    v22 = (const char *)((int (__thiscall *)(TESObjectCELL *, int, int))ParentCell->vtbl->GetEditorName)(
                          ParentCell,
                          XCoordinate,
                          YCoordinate);
    _sprintf(Buffer, "%s (%d,%d)\t", v22, v27, v29);
  }
  v14(v13, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0);
  v24 = *a5->vtbl->GetPos(a5);
  _sprintf(Buffer, "%.0f\t", v24);
  v14(v13, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0);
  v25 = a5->vtbl->GetPos(a5)[1];
  _sprintf(Buffer, "%.0f\t", v25);
  v14(v13, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0);
  v26 = a5->vtbl->GetPos(a5)[2];
  _sprintf(Buffer, "%.0f\t", v26);
  v14(v13, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0);
  _sprintf(Buffer, "\"%s\"\t", v34);
  v14(v13, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0);
  _sprintf(Buffer, word_A3D9B0);
  v14(v13, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0);
  CloseHandle(v13);
  Interface_ConsolePrint("BetaComment added");
  return 1;
}
