void __thiscall sub_6ACD10(char *this, unsigned __int16 a2, int a3, int a4)
{
  unsigned int v5; // ecx
  int v6; // eax
  _DWORD *v7; // edi
  const char *v8; // ebp
  __int16 v9; // ax
  __int16 v10; // ax
  TESForm *CurrentCell; // eax
  __int16 MusicType; // [esp+30h] [ebp-410h]
  CHAR MultiByteStr[512]; // [esp+34h] [ebp-40Ch] BYREF
  WCHAR WideCharStr[260]; // [esp+234h] [ebp-20Ch] BYREF

  v5 = Seed;
  *((_DWORD *)this + 0xBA) = Seed;
  v6 = *((_DWORD *)this + 0x37);
  LOWORD(v7) = a2;
  *((_DWORD *)this + 0xBB) = v5 + 0x6A4;
  *((_WORD *)this + 0x17E) = a2;
  if ( (v6 & 2) == 0 )
  {
    *((float *)this + 0xBD) = *((float *)this + 0xBE);
    *((float *)this + 0xBC) = 0.0;
    *((_DWORD *)this + 0x37) = v6 & 0xFFFFFFE7 | 0x10;
    v8 = 0;
    MusicType = a2;
    if ( !MusicEnabled || strstr(this + 0x1E4, "death") && a2 == 0xFFFF )
      goto LABEL_37;
    if ( strstr(this + 0x1E4, "success") && *((_WORD *)this + 0x58) == 8 )
    {
      *((_WORD *)this + 0x58) = a2;
      SoundManager_PlayMusic((int)this, a2);
      return;
    }
    v9 = *((_WORD *)this + 0x58);
    if ( v9 == 8 && (*(this + 0xDC) & 2) == 0 )
      v8 = this + 0x1E4;
    if ( v9 == 4 && a2 == 8 )
      *((_WORD *)this + 0x58) = 0;
    if ( ((v10 = *((_WORD *)this + 0x58), v10 == 8) || v10 == 4) && a2 != 0xFFFF || v10 == a2 )
    {
      if ( (*(this + 0xDC) & 2) != 0 )
        goto LABEL_37;
    }
    if ( v10 != 8 && v10 != 4 && a2 == 0xFFFF )
      goto LABEL_37;
    if ( v8 )
    {
      strcpy(MultiByteStr, v8);
    }
    else
    {
      if ( a2 == 0xFFFF )
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
        goto LABEL_37;
    }
    if ( _access(MultiByteStr, 0) != 0xFFFFFFFF && (*((_WORD *)this + 0x58) == 8 || strcmp(this + 0x1E4, MultiByteStr)) )
    {
      SoundManager_StopFilterGraph(this);
      v7 = this + 0x70;
      if ( (int)CoCreateInstance(&CLSID_CLSID_FilgraphManager, 0, 1, &riid, (LPVOID *)this + 0x1C) >= 0 )
      {
        MultiByteToWideChar(0, 0, MultiByteStr, 0xFFFFFFFF, WideCharStr, 0x104);
        if ( (*(int (__stdcall **)(_DWORD, WCHAR *, _DWORD))(*(_DWORD *)*v7 + 0x34))(*v7, WideCharStr, 0) >= 0 )
        {
          v7 = (_DWORD *)*v7;
          (*(void (__stdcall **)(_DWORD *, GUID *, char *))*v7)(v7, &CLSID_IBasicAudio, this + 0x74);
          if ( (*(this + 0xDC) & 0x18) == 0 )
            SoundManager_SetMusicVolume((int)this, *((float *)this + 0xBC), 0);
          strcpy(this + 0x1E4, MultiByteStr);
          *((_DWORD *)this + 0x37) |= 1u;
          *((_WORD *)this + 0x58) = MusicType;
        }
      }
    }
LABEL_37:
    SoundManager_PlayMusic((int)this, (unsigned __int16)v7);
    return;
  }
  if ( *((_WORD *)this + 0x58) != a2 )
  {
    *((float *)this + 0xBD) = *((float *)this + 0xBE);
    *((_DWORD *)this + 0x37) = v6 | 8;
  }
}
