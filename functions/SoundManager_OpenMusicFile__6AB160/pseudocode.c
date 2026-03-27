char __thiscall SoundManager_OpenMusicFile(char *this, __int16 a2, const char *a3, char a4)
{
  __int16 MusicType; // bp
  __int16 v7; // cx
  char *v8; // eax
  __int16 v9; // cx
  CHAR *v10; // edx
  char v11; // cl
  TESForm *CurrentCell; // eax
  const char *v13; // esi
  CHAR MultiByteStr[512]; // [esp+2Ch] [ebp-40Ch] BYREF
  WCHAR WideCharStr[260]; // [esp+22Ch] [ebp-20Ch] BYREF

  if ( !MusicEnabled )
    return 0;
  MusicType = a2;
  if ( strstr(this + 0x1E4, "death") && a2 == (__int16)0xFFFF && !a4 )
    return 0;
  if ( strstr(this + 0x1E4, "success") && *((_WORD *)this + 0x58) == 8 )
  {
    *((_WORD *)this + 0x58) = a2;
    return 0;
  }
  v7 = *((_WORD *)this + 0x58);
  if ( v7 != 8 || (*(this + 0xDC) & 2) != 0 )
  {
    v8 = (char *)a3;
  }
  else
  {
    v8 = (char *)a3;
    if ( !a3 )
      v8 = this + 0x1E4;
  }
  if ( v7 == 4 && a2 == 8 )
    *((_WORD *)this + 0x58) = 0;
  v9 = *((_WORD *)this + 0x58);
  if ( ((v9 == 8 || v9 == 4) && a2 != (__int16)0xFFFF || v9 == a2) && (*(this + 0xDC) & 2) != 0
    || v9 != 8 && v9 != 4 && a2 == (__int16)0xFFFF )
  {
    return 0;
  }
  if ( v8 )
  {
    v10 = (CHAR *)(MultiByteStr - v8);
    do
    {
      v11 = *v8;
      v8[(_DWORD)v10] = *v8;
      ++v8;
    }
    while ( v11 );
  }
  else
  {
    if ( a2 == (__int16)0xFFFF )
    {
      if ( TES_GetCurrentCell(TES) )
      {
        CurrentCell = TES_GetCurrentCell(TES);
        MusicType = (unsigned __int16)TESObjectCELL_GetMusicType((TESObjectCELL *)CurrentCell, 0);
      }
      else
      {
        MusicType = 0;
      }
    }
    if ( !sub_6A8E80(MultiByteStr, MusicType) )
      return 0;
  }
  if ( _access(MultiByteStr, 0) == 0xFFFFFFFF )
    return 0;
  if ( *((_WORD *)this + 0x58) != 8 && !strcmp(this + 0x1E4, MultiByteStr) )
    return 0;
  SoundManager_StopFilterGraph(this);
  v13 = this + 0x70;
  if ( (int)CoCreateInstance(&CLSID_CLSID_FilgraphManager, 0, 1, &riid, (LPVOID *)this + 0x1C) < 0 )
    return 0;
  MultiByteToWideChar(0, 0, MultiByteStr, 0xFFFFFFFF, WideCharStr, 0x104);
  if ( (*(int (__stdcall **)(_DWORD, WCHAR *, _DWORD))(**(_DWORD **)v13 + 0x34))(*(_DWORD *)v13, WideCharStr, 0) < 0 )
    return 0;
  (***(void (__stdcall ****)(_DWORD, GUID *, const char *))v13)(*(_DWORD *)v13, &CLSID_IBasicAudio, this + 0x74);
  if ( (*(this + 0xDC) & 0x18) == 0 )
    SoundManager_SetMusicVolume((int)this, *((float *)this + 0xBC), 0);
  strcpy(this + 0x1E4, MultiByteStr);
  *((_DWORD *)this + 0x37) |= 1u;
  *((_WORD *)this + 0x58) = MusicType;
  return 1;
}
