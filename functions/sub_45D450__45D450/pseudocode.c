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

  if ( *(this + 0x1B) )
    sub_459400(this, a2);
  v3 = (_DWORD *)FormHeapAlloc(8u);
  if ( v3 )
  {
    *v3 = 0;
    v3[1] = 0;
  }
  else
  {
    v3 = 0;
  }
  *(this + 0x1B) = v3;
  lstrcpyA(String1, word_B3F280);
  v4 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA;
  lstrcatA(String1, lpString2);
  v4(String1, "*.ess");
  result = FindFirstFileA(String1, &FindFileData);
  v6 = result;
  if ( result != (HANDLE)0xFFFFFFFF )
  {
    do
    {
      if ( FindFileData.nFileSizeHigh || FindFileData.nFileSizeLow )
      {
        _sprintf(v16, "%s%s%s", word_B3F280, lpString2, FindFileData.cFileName);
        v7 = FormHeapAlloc(0x160u);
        v17 = 0;
        if ( v7 )
        {
          BSFile_constr((_DWORD *)v7, v16, 0, 0x20000, 0);
          *(_DWORD *)v7 = &SaveGameFile::`vftable';
          *(_BYTE *)(v7 + 0x154) = 0;
        }
        else
        {
          v7 = 0;
        }
        v8 = (_DWORD *)*(this + 0x1B);
        v17 = 0xFFFFFFFF;
        BSSimpleList_InsertSorted(v8, v7, (int)sub_459450, v9, v10, v11, v12, v13);
      }
    }
    while ( FindNextFileA(v6, &FindFileData) );
    return (HANDLE)FindClose(v6);
  }
  return result;
}
