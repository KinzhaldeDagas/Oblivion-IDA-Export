char __thiscall SoundManager_OpenMusicFile(char *this, __int16 a2, char *a3, char a4)
{
  __int16 MusicType; // bp
  __int16 v7; // cx
  char *v8; // eax
  __int16 v9; // cx
  CHAR *v10; // edx
  char v11; // cl
  TESForm *CurrentCell; // eax
  char *v13; // esi
  CHAR MultiByteStr[512]; // [esp+2Ch] [ebp-40Ch] BYREF
  WCHAR WideCharStr[260]; // [esp+22Ch] [ebp-20Ch] BYREF

  if ( !MusicEnabled ) /*0x6ab174*/
    return 0; /*0x6ab197*/
  MusicType = a2; /*0x6ab1ad*/
  if ( strstr(this + 0x1E4, "death") && a2 == (__int16)0xFFFF && !a4 ) /*0x6ab1ca*/
    return 0; /*0x6ab1ca*/
  if ( strstr(this + 0x1E4, "success") && *((_WORD *)this + 0x58) == 8 ) /*0x6ab1ea*/
  {
    *((_WORD *)this + 0x58) = a2; /*0x6ab1ec*/
    return 0; /*0x6ab1ec*/
  }
  v7 = *((_WORD *)this + 0x58); /*0x6ab20f*/
  if ( v7 != 8 || (*(this + 0xDC) & 2) != 0 ) /*0x6ab222*/
  {
    v8 = a3; /*0x6ab237*/
  }
  else
  {
    v8 = a3; /*0x6ab224*/
    if ( !a3 ) /*0x6ab22d*/
      v8 = this + 0x1E4; /*0x6ab22f*/
  }
  if ( v7 == 4 && a2 == 8 ) /*0x6ab247*/
    *((_WORD *)this + 0x58) = 0; /*0x6ab249*/
  v9 = *((_WORD *)this + 0x58); /*0x6ab252*/
  if ( ((v9 == 8 || v9 == 4) && a2 != (__int16)0xFFFF || v9 == a2) && (*(this + 0xDC) & 2) != 0 /*0x6ab28d*/
    || v9 != 8 && v9 != 4 && a2 == (__int16)0xFFFF )
  {
    return 0; /*0x6ab28d*/
  }
  if ( v8 ) /*0x6ab295*/
  {
    v10 = (CHAR *)(MultiByteStr - v8); /*0x6ab29b*/
    do /*0x6ab2aa*/
    {
      v11 = *v8; /*0x6ab2a0*/
      v8[(_DWORD)v10] = *v8; /*0x6ab2a2*/
      ++v8; /*0x6ab2a5*/
    }
    while ( v11 ); /*0x6ab2aa*/
  }
  else
  {
    if ( a2 == (__int16)0xFFFF ) /*0x6ab2b3*/
    {
      if ( TES_GetCurrentCell(MEMORY[0xB333A0]) ) /*0x6ab2bb*/
      {
        CurrentCell = TES_GetCurrentCell(MEMORY[0xB333A0]); /*0x6ab2cc*/
        MusicType = (unsigned __int16)TESObjectCELL_GetMusicType((TESObjectCELL *)CurrentCell, 0); /*0x6ab2d8*/
      }
      else
      {
        MusicType = 0; /*0x6ab2dd*/
      }
    }
    if ( !sub_6A8E80(MultiByteStr, MusicType) ) /*0x6ab2ee*/
      return 0; /*0x6ab2ee*/
  }
  if ( _access(MultiByteStr, 0) == 0xFFFFFFFF ) /*0x6ab306*/
    return 0; /*0x6ab306*/
  if ( *((_WORD *)this + 0x58) != 8 && !strcmp(this + 0x1E4, MultiByteStr) ) /*0x6ab324*/
    return 0; /*0x6ab324*/
  SoundManager_StopFilterGraph(this); /*0x6ab34f*/
  v13 = this + 0x70; /*0x6ab354*/
  if ( (int)CoCreateInstance(&CLSID_CLSID_FilgraphManager, 0, 1, &riid, (LPVOID *)this + 0x1C) < 0 ) /*0x6ab36e*/
    return 0; /*0x6ab36e*/
  MultiByteToWideChar(0, 0, MultiByteStr, 0xFFFFFFFF, WideCharStr, 0x104); /*0x6ab38c*/
  if ( (*(int (__stdcall **)(_DWORD, WCHAR *, _DWORD))(**(_DWORD **)v13 + 0x34))(*(_DWORD *)v13, WideCharStr, 0) < 0 ) /*0x6ab3a8*/
    return 0; /*0x6ab20c*/
  (***(void (__stdcall ****)(_DWORD, GUID *, char *))v13)(*(_DWORD *)v13, &CLSID_IBasicAudio, this + 0x74); /*0x6ab3be*/
  if ( (*(this + 0xDC) & 0x18) == 0 ) /*0x6ab3c7*/
    SoundManager_SetMusicVolume((int)this, *((float *)this + 0xBC), 0); /*0x6ab3d7*/
  strcpy(this + 0x1E4, MultiByteStr); /*0x6ab3dc*/
  *((_DWORD *)this + 0x37) |= 1u; /*0x6ab3fc*/
  *((_WORD *)this + 0x58) = MusicType; /*0x6ab403*/
  return 1; /*0x6ab182*/
}
