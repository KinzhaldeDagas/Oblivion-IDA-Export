// ContinueFromLastSave fidelity decode: enumerates GameSaveRoot+SaveSubdir+*.ess, constructs SaveGameFile objects (BSFile + vtable + flag byte), inserts into SaveLoad+0x6C list via BSSimpleList_InsertSorted comparator 0x459450.
HANDLE __fastcall sub_45D450(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  void (__stdcall *v4)(LPSTR, LPCSTR); // esi
  HANDLE result; // eax
  HANDLE v6; // ebp
  int v7; // esi
  _DWORD *v8; // ecx
  int v9; // [esp+0h] [ebp-370h]
  int v10; // [esp+4h] [ebp-36Ch]
  int v11; // [esp+8h] [ebp-368h]
  int v12; // [esp+Ch] [ebp-364h]
  int (__cdecl *v13)(int, _DWORD); // [esp+10h] [ebp-360h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+18h] [ebp-358h] BYREF
  CHAR String1[260]; // [esp+158h] [ebp-218h] BYREF
  char v16[260]; // [esp+25Ch] [ebp-114h] BYREF
  unsigned int v17; // [esp+36Ch] [ebp-4h]

  if ( *(this + 0x1B) ) /*0x45d48f*/
    sub_459400(this, a2); /*0x45d494*/
  v3 = (_DWORD *)FormHeapAlloc(8u); /*0x45d49b*/
  if ( v3 ) /*0x45d4a5*/
  {
    *v3 = 0; /*0x45d4a7*/
    v3[1] = 0; /*0x45d4a9*/
  }
  else
  {
    v3 = 0; /*0x45d4ae*/
  }
  *(this + 0x1B) = v3;                          // TESSaveLoadGame+0x6C owns the 8-byte BSSimpleList head of SaveGameFile objects. /*0x45d4b0*/
  lstrcpyA(String1, unk_B3F280); /*0x45d4c0*/
  v4 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x45d4cc*/
  lstrcatA(String1, lpString2); /*0x45d4db*/
  v4(String1, "*.ess"); /*0x45d4ea*/
  result = FindFirstFileA(String1, &FindFileData); /*0x45d4f9*/
  v6 = result; /*0x45d4ff*/
  if ( result != (HANDLE)0xFFFFFFFF ) /*0x45d504*/
  {
    do /*0x45d5a6*/
    {
      if ( FindFileData.nFileSizeHigh || FindFileData.nFileSizeLow ) /*0x45d51a*/
      {
        _sprintf(v16, "%s%s%s", unk_B3F280, lpString2, FindFileData.cFileName); /*0x45d53e*/
        v7 = FormHeapAlloc(0x160u); /*0x45d54d*/
        v17 = 0; /*0x45d558*/
        if ( v7 ) /*0x45d55f*/
        {
          BSFile_constr((_DWORD *)v7, v16, 0, 0x20000, 0); /*0x45d572*/
          *(_DWORD *)v7 = &SaveGameFile::`vftable';// SaveGameFile is BSFile-derived; path buffer begins at +0x3C and timestamp cache begins at +0x154. /*0x45d577*/
          *(_BYTE *)(v7 + 0x154) = 0; /*0x45d57d*/
        }
        else
        {
          v7 = 0; /*0x45d585*/
        }
        v8 = (_DWORD *)*(this + 0x1B); /*0x45d587*/
        v17 = 0xFFFFFFFF; /*0x45d590*/
        BSSimpleList_InsertSorted(v8, v7, (int)sub_459450, v9, v10, v11, v12, v13); /*0x45d59b*/
      }
    }
    while ( FindNextFileA(v6, &FindFileData) ); /*0x45d5a6*/
    return (HANDLE)FindClose(v6); /*0x45d5b5*/
  }
  return result; /*0x45d5bb*/
}
