void __thiscall sub_6ACD10(char *this, unsigned __int16 a2, int a3, int a4)
{
  int v5; // ecx
  int v6; // eax
  char *v7; // edi
  const char *v8; // ebp
  __int16 v9; // ax
  __int16 v10; // ax
  TESForm *CurrentCell; // eax
  __int16 MusicType; // [esp+30h] [ebp-410h]
  CHAR MultiByteStr[512]; // [esp+34h] [ebp-40Ch] BYREF
  WCHAR WideCharStr[260]; // [esp+234h] [ebp-20Ch] BYREF

  v5 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x6acd2c*/
  *((_DWORD *)this + 0xBA) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x6acd2e*/
  v6 = *((_DWORD *)this + 0x37); /*0x6acd34*/
  LOWORD(v7) = a2; /*0x6acd3b*/
  *((_DWORD *)this + 0xBB) = v5 + 0x6A4; /*0x6acd4b*/
  *((_WORD *)this + 0x17E) = a2; /*0x6acd51*/
  if ( (v6 & 2) == 0 ) /*0x6acd58*/
  {
    *((float *)this + 0xBD) = *((float *)this + 0xBE); /*0x6acd67*/
    *((float *)this + 0xBC) = 0.0; /*0x6acd76*/
    *((_DWORD *)this + 0x37) = v6 & 0xFFFFFFE7 | 0x10; /*0x6acd7c*/
    v8 = 0; /*0x6acd82*/
    MusicType = a2; /*0x6acd8b*/
    if ( !MusicEnabled || strstr(this + 0x1E4, "death") && a2 == 0xFFFF ) /*0x6acdb3*/
      goto LABEL_37; /*0x6acdb3*/
    if ( strstr(this + 0x1E4, "success") && *((_WORD *)this + 0x58) == 8 ) /*0x6acdd7*/
    {
      *((_WORD *)this + 0x58) = a2; /*0x6acddc*/
      SoundManager_PlayMusic((int)this, a2); /*0x6acde3*/
      return; /*0x6acde9*/
    }
    v9 = *((_WORD *)this + 0x58); /*0x6acdee*/
    if ( v9 == 8 && (*(this + 0xDC) & 2) == 0 ) /*0x6ace01*/
      v8 = this + 0x1E4; /*0x6ace03*/
    if ( v9 == 4 && a2 == 8 ) /*0x6ace12*/
      *((_WORD *)this + 0x58) = 0; /*0x6ace14*/
    if ( ((v10 = *((_WORD *)this + 0x58), v10 == 8) || v10 == 4) && a2 != 0xFFFF || v10 == a2 ) /*0x6ace39*/
    {
      if ( (*(this + 0xDC) & 2) != 0 ) /*0x6ace42*/
        goto LABEL_37; /*0x6ace42*/
    }
    if ( v10 != 8 && v10 != 4 && a2 == 0xFFFF ) /*0x6ace58*/
      goto LABEL_37; /*0x6ace58*/
    if ( v8 ) /*0x6ace60*/
    {
      strcpy(MultiByteStr, v8); /*0x6ace66*/
    }
    else
    {
      if ( a2 == 0xFFFF ) /*0x6ace83*/
      {
        if ( TES_GetCurrentCell(MEMORY[0xB333A0]) ) /*0x6ace8b*/
        {
          CurrentCell = TES_GetCurrentCell(MEMORY[0xB333A0]); /*0x6ace9c*/
          MusicType = (unsigned __int16)TESObjectCELL_GetMusicType((TESObjectCELL *)CurrentCell, 0); /*0x6aceab*/
        }
        else
        {
          MusicType = 0; /*0x6aceb1*/
        }
      }
      if ( !sub_6A8E80(MultiByteStr, MusicType) ) /*0x6acecc*/
        goto LABEL_37; /*0x6acecc*/
    }
    if ( _access(MultiByteStr, 0) != 0xFFFFFFFF && (*((_WORD *)this + 0x58) == 8 || strcmp(this + 0x1E4, MultiByteStr)) ) /*0x6acf04*/
    {
      SoundManager_StopFilterGraph(this); /*0x6acf2f*/
      v7 = this + 0x70; /*0x6acf34*/
      if ( (int)CoCreateInstance(&CLSID_CLSID_FilgraphManager, 0, 1, &riid, (LPVOID *)this + 0x1C) >= 0 ) /*0x6acf4e*/
      {
        MultiByteToWideChar(0, 0, MultiByteStr, 0xFFFFFFFF, WideCharStr, 0x104); /*0x6acf6c*/
        if ( (*(int (__stdcall **)(_DWORD, WCHAR *, _DWORD))(**(_DWORD **)v7 + 0x34))(*(_DWORD *)v7, WideCharStr, 0) >= 0 ) /*0x6acf88*/
        {
          v7 = *(char **)v7; /*0x6acf8a*/
          (**(void (__stdcall ***)(char *, GUID *, char *))v7)(v7, &CLSID_IBasicAudio, this + 0x74); /*0x6acf9a*/
          if ( (*(this + 0xDC) & 0x18) == 0 ) /*0x6acfa3*/
            SoundManager_SetMusicVolume((int)this, *((float *)this + 0xBC), 0); /*0x6acfb3*/
          strcpy(this + 0x1E4, MultiByteStr); /*0x6acfb8*/
          *((_DWORD *)this + 0x37) |= 1u; /*0x6acfd7*/
          *((_WORD *)this + 0x58) = MusicType; /*0x6acfde*/
        }
      }
    }
LABEL_37:
    SoundManager_PlayMusic((int)this, (unsigned __int16)v7); /*0x6acfe6*/
    return; /*0x6acfee*/
  }
  if ( *((_WORD *)this + 0x58) != a2 ) /*0x6acff7*/
  {
    *((float *)this + 0xBD) = *((float *)this + 0xBE); /*0x6ad002*/
    *((_DWORD *)this + 0x37) = v6 | 8; /*0x6ad008*/
  }
}
