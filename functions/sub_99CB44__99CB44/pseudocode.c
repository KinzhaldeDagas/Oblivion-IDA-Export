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

  v29 = _encoded_null(); /*0x99cb5a*/
  v32 = 0; /*0x99cb5d*/
  v31 = 0; /*0x99cb60*/
  v30 = 0; /*0x99cb63*/
  if ( !dword_BA9E10[0x254] ) /*0x99cb66*/
  {
    LibraryA = LoadLibraryA("USER32.DLL"); /*0x99cb71*/
    a1 = LibraryA; /*0x99cb77*/
    if ( !LibraryA ) /*0x99cb7b*/
      return 0; /*0x99cb7b*/
    MessageBoxA = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(LibraryA, "MessageBoxA"); /*0x99cb90*/
    if ( !MessageBoxA ) /*0x99cb94*/
      return 0; /*0x99cb7f*/
    dword_BA9E10[0x254] = _encode_pointer(MessageBoxA); /*0x99cba4*/
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(a1, "GetActiveWindow"); /*0x99cba9*/
    dword_BA9E10[0x255] = _encode_pointer(GetActiveWindow); /*0x99cbb9*/
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(a1, "GetLastActivePopup"); /*0x99cbbe*/
    dword_BA9E10[0x256] = _encode_pointer(GetLastActivePopup); /*0x99cbc6*/
    v9 = sub_981BF8(0, (int)a1, &v31); /*0x99cbcf*/
    if ( v9 ) /*0x99cbd8*/
      _invoke_watson(v9, v10, (int)lpProcName, 0, (int)a1, (int)GetProcAddress); /*0x99cbdf*/
    if ( v31 == 2 ) /*0x99cbeb*/
    {
      GetUserObjectInformationA = (BOOL (__stdcall *)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress( /*0x99cbf3*/
                                                                                            a1,
                                                                                            "GetUserObjectInformationA");
      dword_BA9E10[0x258] = _encode_pointer(GetUserObjectInformationA); /*0x99cbfe*/
      if ( dword_BA9E10[0x258] ) /*0x99cc03*/
      {
        GetProcessWindowStation = (HWINSTA (__stdcall *)())GetProcAddress(a1, "GetProcessWindowStation"); /*0x99cc0b*/
        dword_BA9E10[0x257] = _encode_pointer(GetProcessWindowStation); /*0x99cc14*/
      }
    }
  }
  v13 = (int)v29; /*0x99cc1e*/
  if ( (PVOID)dword_BA9E10[0x257] == v29 /*0x99cc5d*/
    || (PVOID)dword_BA9E10[0x258] == v29
    || (v14 = (int (*)(void))_decode_pointer((void *)dword_BA9E10[0x257]), (v15 = v14()) != 0)
    && (v22 = v15,
        v16 = _decode_pointer((void *)dword_BA9E10[0x258]),
        ((int (__stdcall *)(int, int, _BYTE *, int, _BYTE *))v16)(v22, 1, v27, 0xC, v28))
    && (v27[8] & 1) != 0 )
  {
    if ( dword_BA9E10[0x255] != v13 ) /*0x99cc99*/
    {
      v19 = (int (*)(void))_decode_pointer((void *)dword_BA9E10[0x255]); /*0x99cc9c*/
      v32 = v19(); /*0x99cca6*/
      if ( v32 ) /*0x99cca9*/
      {
        if ( dword_BA9E10[0x256] != v13 ) /*0x99ccb2*/
        {
          lpProcNameb = (LPCSTR)v32; /*0x99ccb4*/
          v20 = (int (__stdcall *)(LPCSTR))_decode_pointer((void *)dword_BA9E10[0x256]); /*0x99ccb8*/
          v32 = v20(lpProcNameb); /*0x99ccc0*/
        }
      }
    }
  }
  else
  {
    v17 = sub_981C2F(0, (int)a1, &v30); /*0x99cc63*/
    if ( v17 ) /*0x99cc6b*/
      _invoke_watson(v17, v18, (int)lpProcNamea, 0, (int)a1, v13); /*0x99cc72*/
    if ( v30 < 4 ) /*0x99cc7e*/
      a4 |= 0x40000u; /*0x99cc89*/
    else
      a4 |= 0x200000u; /*0x99cc80*/
  }
  v23 = v32; /*0x99cccc*/
  v21 = (int (__stdcall *)(int, int, int, int))_decode_pointer((void *)dword_BA9E10[0x254]); /*0x99ccd5*/
  return v21(v23, a2, a3, a4); /*0x99ccdd*/
}
