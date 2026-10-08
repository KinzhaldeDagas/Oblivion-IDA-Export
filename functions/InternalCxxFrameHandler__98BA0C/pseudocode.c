int __cdecl __InternalCxxFrameHandler(int a1, int a2, DWORD a3, int a4, int a5, int a6, int a7, unsigned __int8 a8)
{
  int (__cdecl *v8)(int, int, DWORD, int, int, int, int, _DWORD); // edx

  if ( _getptd()[0x83] /*0x98ba4f*/
    || *(_DWORD *)a1 == 0xE06D7363
    || *(_DWORD *)a1 == 0x80000026
    || (*(_DWORD *)a5 & 0x1FFFFFFFu) < 0x19930522
    || (*(_BYTE *)(a5 + 0x20) & 1) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 0x66) != 0 ) /*0x98ba59*/
    {
      if ( *(_DWORD *)(a5 + 4) ) /*0x98ba5b*/
      {
        if ( !a6 ) /*0x98ba69*/
          __FrameUnwindToState(a2, a4, a5, 0xFFFFFFFF); /*0x98ba74*/
      }
    }
    else if ( *(_DWORD *)(a5 + 0xC) || (*(_DWORD *)a5 & 0x1FFFFFFFu) >= 0x19930521 && *(_DWORD *)(a5 + 0x1C) ) /*0x98ba90*/
    {
      if ( *(_DWORD *)a1 == 0xE06D7363 && *(_DWORD *)(a1 + 0x10) >= 3u && *(_DWORD *)(a1 + 0x14) > 0x19930522u ) /*0x98baa3*/
      {
        v8 = *(int (__cdecl **)(int, int, DWORD, int, int, int, int, _DWORD))(*(_DWORD *)(a1 + 0x1C) + 8); /*0x98baa8*/
        if ( v8 ) /*0x98baad*/
          return v8(a1, a2, a3, a4, a5, a6, a7, a8); /*0x98baca*/
      }
      unknown_libname_83((struct EHExceptionRecord *)a1, a2, a3, a4, a5); /*0x98bae0*/
    }
  }
  return 1; /*0x98baeb*/
}
