bool __cdecl sub_497D50(D3DMULTISAMPLE_TYPE a1)
{
  IDirect3D9 *v1; // esi
  IDirect3D9Vtbl *lpVtbl; // ebx
  D3DDEVTYPE v3; // edi
  signed int v4; // eax
  bool result; // al
  BOOL v6; // [esp-18h] [ebp-18h]

  result = 0; /*0x497db0*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0x1248] ) /*0x497d50*/
  {
    if ( !bIsHDR ) /*0x497d5a*/
    {
      v1 = g_Direct3D9; /*0x497d6c*/
      lpVtbl = g_Direct3D9->lpVtbl; /*0x497d72*/
      v3 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x1248] + 0x5C0); /*0x497d75*/
      v6 = g_bFullScreen == 0; /*0x497d8d*/
      v4 = sub_4979E0(dword_B06C34); /*0x497d8f*/
      if ( (int)lpVtbl->CheckDeviceMultiSampleType(v1, dword_B06C54, v3, (D3DFORMAT)v4, v6, a1, 0) >= 0 ) /*0x497dab*/
        return 1; /*0x497d58*/
    }
  }
  return result; /*0x497daf*/
}
