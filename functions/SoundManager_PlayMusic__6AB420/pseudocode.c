void __usercall SoundManager_PlayMusic(int a1@<ecx>, int a2@<edi>)
{
  int v3; // edi
  int v4; // eax
  _BYTE v5[4]; // [esp+40h] [ebp-8h] BYREF
  int v6; // [esp+44h] [ebp-4h] BYREF

  if ( MusicEnabled ) /*0x6ab423*/
  {
    if ( (*(_BYTE *)(a1 + 0xDC) & 1) != 0 /*0x6ab456*/
      && (***(int (__stdcall ****)(_DWORD, GUID *, _BYTE *))(a1 + 0x70))(
           *(_DWORD *)(a1 + 0x70),
           &CLSID_IMediaControl,
           v5) >= 0 )
    {
      if ( (***(int (__stdcall ****)(_DWORD, GUID *, int *))(a1 + 0x70))( /*0x6ab472*/
             *(_DWORD *)(a1 + 0x70),
             &CLSID_IMediaPosition,
             &v6) >= 0 )
        (*(void (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v6 + 0x20))( /*0x6ab486*/
          v6,
          COERCE_UNSIGNED_INT64(0.0),
          HIDWORD(COERCE_UNSIGNED_INT64(0.0)));
      (*(void (__stdcall **)(int, int))(*(_DWORD *)v6 + 8))(v6, a2); /*0x6ab493*/
      v3 = (*(int (__stdcall **)(int))(*(_DWORD *)v6 + 0x1C))(v6); /*0x6ab4a8*/
      if ( (*(_BYTE *)(a1 + 0xDC) & 4) != 0 ) /*0x6ab4aa*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 0x20))(v6); /*0x6ab4b6*/
      (*(void (__cdecl **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x6ab4c2*/
      if ( v3 >= 0 ) /*0x6ab4c7*/
        *(_DWORD *)(a1 + 0xDC) |= 2u; /*0x6ab4c9*/
      v4 = *(_DWORD *)(a1 + 0xDC); /*0x6ab4d0*/
      if ( (v4 & 1) != 0 && ((v4 & 8) == 0 || (v4 & 0x10) == 0) ) /*0x6ab4e0*/
        SoundManager_SetMusicVolume(a1, *(float *)(a1 + 0x2F0), 0); /*0x6ab4f0*/
    }
  }
}
