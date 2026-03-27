int __usercall sub_99CB44@<eax>(HMODULE a1@<edi>, int a2, int a3, int a4)
{
  HMODULE LibraryA; // eax
  int (__stdcall *MessageBoxA)(HWND, LPCSTR, LPCSTR, UINT); // eax
  HWND (__stdcall *GetActiveWindow)(); // eax
  HWND (__stdcall *GetLastActivePopup)(HWND); // eax
  signed int v9; // eax
  int v10; // edx
  BOOL (__stdcall *GetUserObjectInformationA)(HANDLE, int, PVOID, DWORD, LPDWORD); // eax
  HWINSTA (__stdcall *GetProcessWindowStation)(); // eax
  int v13; // esi
  int (*v14)(void); // eax
  int v15; // eax
  PVOID v16; // eax
  signed int v17; // eax
  int v18; // edx
  int (*v19)(void); // eax
  int (__stdcall *v20)(LPCSTR); // eax
  int (__stdcall *v21)(int, int, int, int); // eax
  int v22; // [esp-10h] [ebp-40h]
  int v23; // [esp-Ch] [ebp-3Ch]
  LPCSTR lpProcName; // [esp+0h] [ebp-30h]
  LPCSTR lpProcNamea; // [esp+0h] [ebp-30h]
  LPCSTR lpProcNameb; // [esp+0h] [ebp-30h]
  _BYTE v27[12]; // [esp+10h] [ebp-20h] BYREF
  _BYTE v28[4]; // [esp+1Ch] [ebp-14h] BYREF
  PVOID v29; // [esp+20h] [ebp-10h]
  unsigned int v30; // [esp+24h] [ebp-Ch] BYREF
  int v31; // [esp+28h] [ebp-8h] BYREF
  int v32; // [esp+2Ch] [ebp-4h]

  v29 = _encoded_null();
  v32 = 0;
  v31 = 0;
  v30 = 0;
  if ( !dword_BAA760 )
  {
    LibraryA = LoadLibraryA("USER32.DLL");
    a1 = LibraryA;
    if ( !LibraryA )
      return 0;
    MessageBoxA = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(LibraryA, "MessageBoxA");
    if ( !MessageBoxA )
      return 0;
    dword_BAA760 = (int)_encode_pointer(MessageBoxA);
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(a1, "GetActiveWindow");
    dword_BAA764 = (int)_encode_pointer(GetActiveWindow);
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(a1, "GetLastActivePopup");
    dword_BAA768 = (int)_encode_pointer(GetLastActivePopup);
    v9 = sub_981BF8(&v31);
    if ( v9 )
      _invoke_watson(v9, v10, (int)lpProcName, 0, (int)a1, (int)GetProcAddress);
    if ( v31 == 2 )
    {
      GetUserObjectInformationA = (BOOL (__stdcall *)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress(
                                                                                            a1,
                                                                                            "GetUserObjectInformationA");
      dword_BAA770 = (int)_encode_pointer(GetUserObjectInformationA);
      if ( dword_BAA770 )
      {
        GetProcessWindowStation = (HWINSTA (__stdcall *)())GetProcAddress(a1, "GetProcessWindowStation");
        dword_BAA76C = (int)_encode_pointer(GetProcessWindowStation);
      }
    }
  }
  v13 = (int)v29;
  if ( (PVOID)dword_BAA76C == v29
    || (PVOID)dword_BAA770 == v29
    || (v14 = (int (*)(void))_decode_pointer((void *)dword_BAA76C), (v15 = v14()) != 0)
    && (v22 = v15,
        v16 = _decode_pointer((void *)dword_BAA770),
        ((int (__stdcall *)(int, int, _BYTE *, int, _BYTE *))v16)(v22, 1, v27, 0xC, v28))
    && (v27[8] & 1) != 0 )
  {
    if ( dword_BAA764 != v13 )
    {
      v19 = (int (*)(void))_decode_pointer((void *)dword_BAA764);
      v32 = v19();
      if ( v32 )
      {
        if ( dword_BAA768 != v13 )
        {
          lpProcNameb = (LPCSTR)v32;
          v20 = (int (__stdcall *)(LPCSTR))_decode_pointer((void *)dword_BAA768);
          v32 = v20(lpProcNameb);
        }
      }
    }
  }
  else
  {
    v17 = sub_981C2F(&v30);
    if ( v17 )
      _invoke_watson(v17, v18, (int)lpProcNamea, 0, (int)a1, v13);
    if ( v30 < 4 )
      a4 |= 0x40000u;
    else
      a4 |= 0x200000u;
  }
  v23 = v32;
  v21 = (int (__stdcall *)(int, int, int, int))_decode_pointer((void *)dword_BAA760);
  return v21(v23, a2, a3, a4);
}
